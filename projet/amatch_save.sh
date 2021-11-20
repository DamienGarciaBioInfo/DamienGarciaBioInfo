#! /usr/bin/env bash

#-------- Messages et codes d'erreur --------#
#Appel avec le mauvais nombre de paramètres
if [ $# -ne 1 ] ; then
  echo "[amatch.sh] Error code : 1" 1>&2 ;
  exit 1 ;
fi

#Impossibilité d'exécuter le programme tre-agrep
if [ -z $(which tre-agrep) ] ; then
  echo "[amatch.sh] Error code : 2" 1>&2 ;
  exit 2 ;
fi

#Base CSV absente et impossibilité de la récupérer sur le site de Nantes Métrople
test -e 244400404_stations-velos-libre-service-nantes-metropole.csv ;
if [ $? -ne 0 ] ; then
  wget -q "https://data.nantesmetropole.fr/explore/dataset/244400404_stations-velos-libre-service-nantes-metropole/download/?format=csv&timezone=Europe/Berlin&lang=fr&use_labels_for_header=true&csv_separator=%3B" -O 244400404_stations-velos-libre-service-nantes-metropole.csv ;
  if [ $? -ne 0 ] ; then
    rm 244400404_stations-velos-libre-service-nantes-metropole.csv ;
    echo "[amatch.sh] Error code : 3" 1>&2 ;
    exit 3 ;
  fi
fi

#-------- Programme principal --------#
if [ -z $AMATCH_DISTANCE ] ; then
  AMATCH_DISTANCE=2 ;
fi

station_request=$1 ;
tre-agrep -$((AMATCH_DISTANCE)) -i -s $station_request 244400404_stations-velos-libre-service-nantes-metropole.csv | sort -n | head -n 1 | cut -d ';' -f 2 | tr -d -c '0-9' > "station_id.txt" ;
