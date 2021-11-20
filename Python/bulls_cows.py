#! /usr/bin/env python3

#Algorithme Bulls and Cows
#Entrez un nombre à 4 chiffres
#Le programme indique combien de chiffres sont corrects et bien placés ainsi que le nombre de nombres corrects mais mals placés.

import random

#Initialisation des tableaux
lst_guess = []
lst_find = []

a = 0
for a in [0,1,2,3] :
    rand_nb = random.randint(0,9)
    lst_find[a] = rand_nb

print(lst_find)

guess = input("Entrez un nombre à 4 chiffres \n")
lst = list(guess)   #Fonction list qui stock les caractères d'une chaîne dans un tableau.
