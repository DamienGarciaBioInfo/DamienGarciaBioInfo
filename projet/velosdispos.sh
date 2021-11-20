#! /usr/bin/env bash
#
#Description :
#Utiliser velosdispos.py pour retourner le nombre de velos disponibles
#Vérifier si le fichier json est disponible et à jour (moins de 15min)

#Variable d'environnement qui détermine "l'âge" maximum du fichier json
if [ -z $OBSOLESCENCE_TIME ] ; then
  OBSOLESCENCE_TIME=15 ;
fi

#Fonction de téléchargement du fichier disponibilité json
function dl_jsonFile() {
  wget -q "https://data.nantesmetropole.fr/explore/dataset/244400404_stations-velos-libre-service-nantes-metropole-disponibilites/download/?format=json&timezone=Europe/Berlin&lang=fr" -O data.nantesmetropole.fr.json ; #Ajouter l'URL
  jsonFile="data.nantesmetropole.fr.json" ;
  #Erreur dans le téléchargement de la base de disponibilités json [ErrCode4]
  if [ $? -ne 0 ] ; then
    rm data.nantesmetropole.fr.json ;
    echo "[velosdispos.sh] Error code : 4" 1>&2 ;
    exit 4 ;
  fi
}

#------ Fonction principale ------#

#Appel avec le mauvais nombre de paramètres [ErrCode1]
if [ $# -ne 1 ] ; then
  echo "[velosdispos.sh] Error code : 1" 1>&2 ;
  exit 1 ;
fi

#Le programme amatch.sh n'a pas été trouvé [ErrCode2]
if [ ! -e "amatch.sh" ] ; then
  echo "[velosdispos.sh] Error code : 2 (amatch.sh introuvable)" 1>&2 ;
  exit 2 ;
fi

#Le programme velosdispos.py n'a pas été trouvé [ErrCode2]
if [ ! -e "velosdispos.py" ] ; then
  echo "[velosdispos.sh] Error code : 2 (velosdispos.py introuvable)" 1>&2 ;
  exit 2 ;
fi

#Version douteuse avec stockage de l'information obtenue dans un fichier tier
#par amatch.sh et qui sera lu par velosdispos.sh pour récupérer l'information.
sh ./amatch.sh $1 ;
station_id=$(cat "station_id.txt") ;
rm "station_id.txt" ;

#Pas de station trouvée avec amatch.sh [ErrCode3]
if [ -s $station_id ] ; then
  echo "[velosdispos.sh] Error code : 3" 1>&2 ;
  exit 3 ;
fi

#Vérification si le fichier disponibilité json existe
test -e data.nantesmetropole.fr.json ;
if [ $? -ne 0 ] ; then
  dl_jsonFile ;
else #Vérfication de l'âge du fichier dispinibilité json
  jsonFile_age=$(date -r "data.nantesmetropole.fr.json") ;
  currentTime=$(date -d "-15 minutes") ;
  if [[ $jsonFile_age < $currentTime ]] ; then
    dl_jsonFile ;
  fi
fi

#Utilisation de velodispos.py
./velosdispos.py "data.nantesmetropole.fr.json" $station_id ;
