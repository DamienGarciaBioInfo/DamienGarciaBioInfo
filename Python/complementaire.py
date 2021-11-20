#! /usr/bin/env python3
#Algorithme donnant le complémentaire d'une séquence ADN entrée en paramètre

import sys

s2 = ""
complementaire = dict()
complementaire = {
    "A" : "T" ,
    "T" : "A" ,
    "C" : "G" ,
    "G" : "C"
}

if len(sys.argv) != 2 :
    print("Nombre de paramètres incorrect !")
else :
    s1 = sys.argv[1]
    s1 = s1.upper()
    for i in range(len(s1)) :
        x = complementaire.get(s1[i])
        s2 += x

    print(s2)
