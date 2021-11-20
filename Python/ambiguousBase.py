#! /usr/bin/env python3

import sys

#--------- Variables et initialisations ---------#
bases = ["A","T","C","G"]
complementaire = dict()
complementaire = {
    "A" : "T" ,
    "T" : "A" ,
    "C" : "G" ,
    "G" : "C"
}
choice = ""
ADNcomp = ""

#--------- Fonctions ---------#
#Fonction qui retourne toutes les positions et valeurs des bases ambigues
def all_ambiguous(ADNseq) :
    for i in range(len(ADNseq)) :
        if ADNseq[i] not in bases :
            print("Ambiguous base", ADNseq[i] , "at position" , i , "in sequence")

#Fonction qui détermine la longueur de la queue poly sur ARNseq
def polyAtail(ARNseq) :
    tail = 0
    i = 0
    ARNseq = ARNseq[::-1]
    while ARNseq[i] == "A" :
        tail += 1
        i += 1
    print("Longueur queue polyA = " , tail)

#Fonction qui donne le brin complémentaire d'une séquence en entrée
def complement(ADNseq) :
    ADNseq = open(sys.argv[1]).read()
    for i in range(len(ADNseq)) :
        x = complementaire.get(ADNseq[i])
        ADNcomp += x
    print(ADNcomp)

#--------- Programme principal ---------#
if len(sys.argv) == 1 :
    choice = input("ADN [1] ou ARN [2]?")
    if choice == "ADN" :
        ADNseq = input("Séquence ADN : ").upper()
        all_ambiguous(ADNseq)
    else :
        ARNseq = input("Séquence ARN : ").upper()
        polyAtail(ARNseq)
elif len(sys.argv) == 2 :
    ADNseq = sys.argv[1]
    complement(ADNseq)
else :
    print("Nombre de paramètre incorrect...")
