#! /usr/bin/env python3

import sys
import json
from utc2localtime import *

#Appel avec le mauvais nombre de paramètres [ErrCode1]
if len(sys.argv) != 3 :
    print('[velosdispos.py] Error code 1')
    sys.exit(1) ;

#Identifiant en paramètre 2 n'est pas un entier [ErrCode2]
try :
    int(sys.argv[2])
except :
    print('[velosdispos.py] Error code 2')
    sys.exit(2)

station_id = int(sys.argv[2]) #sys.argv[2] étant le numéro de la station

with open(sys.argv[1]) as jsonFile : #arg 1 est le fichier
    fichier = json.load(jsonFile) #j'ai donc une liste
    #de class list, après dumps devient class str
    jsonFile.close()


for i in range(len(fichier)): #parcour de toute la liste
    search = fichier[i] #prend l'élément i de la liste
    if search["fields"]["number"] == station_id :
        station_name = search["fields"]["name"]
        bike_number = search["fields"]["available_bikes"]
        maj = search["fields"]["last_update"]
        break

print("A la station ----------------- :" , station_name)
print("Nombre de vélos disponibles -- :" , bike_number)
print("Dernière Mise à Jour --------- :" , utc2localtime(maj))
