#! /usr/bin/env python3

#Programme qui prend en entrée un fichier fastq et retourne les séquences
#après colorisation des bases selon leur score Phred.

import textcolors
import sys


# ----------- Programme principal -------------------- #
lst_seq = []
lst_score = []
lst_Q = []
line = 1
#Récupération du document en paramètre
data = open(sys.argv[1]).readlines()
#Création de lst_seq contenant toutes les séquences ADN de data
for line in range(2 , len(data) + 1 , 4) :
    lst_seq.append(data[line - 1])
#Création de lst_seq contenant tous les scores Phred de data
for line in range(4 , len(data) + 1 , 4) :
    lst_score.append(data[line - 1])

#Transformation de la liste score Ascii en liste score integers
'''
for i in range(len(lst_score)) :
    if ord(i) < 30 :
        lst_Q[i] =
'''

# --------------------- Tests ------------------------ #
print(ord("!"))
print(lst_seq)
print(lst_score)

'''
j = 0
Q = 0
for i in range(len(lst_seq[0])) :
    Q = ord(lst_score[i]-33)
    if Q < 30 :
        print(textcolors.color(255,0,0)+ base +textcolors.resetcolor())
    elif 30 < Q < 60 :
        print(textcolors.color(255,255,0)+ base +textcolors.resetcolor())
    elif Q >= 60 :
        print(textcolors.color(0,255,0)+ base +textcolors.resetcolor())
'''
