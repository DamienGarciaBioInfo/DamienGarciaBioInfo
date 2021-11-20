#! /usr/bin/env python3
#Algorithme définissant la distance de Hamming entre 2 chaînes ADN.

import sys

if len(sys.argv) != 3 :
    print("Nombre de paramètres incorrect !")
else :
    #Initialisation de la variable de distance de Hamming
    hamming = 0

    #Passage des paramètres dans les variables s1 et s2 (strings)
    s1 = sys.argv[1]
    s2 = sys.argv[2]

    #Test sur la longueur des chaînes
    if len(s1) != len(s2) :
        print("Les deux séquences ne font pas la même longueur")
    else :
        #Calcul de la distance de Hamming
        for i in range(len(s1)) :
            if s1[i] != s2[i] :
                hamming += 1
        #Affichage du résultat
        print("La distance de hamming est de " , hamming)
