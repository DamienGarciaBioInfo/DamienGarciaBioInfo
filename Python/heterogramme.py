#! /usr/bin/env python3

import sys

str = ""
dictionary = dict()
heterogramme = True

if len(sys.argv) == 1 :
    print("Nombre de paramètre incorrect")
else :
    for i in range(1, len(sys.argv)) :
        str += sys.argv[i]

    str = str.lower().strip()

    for letter in str :
        if letter not in dictionary :
            dictionary[letter] = 1
        else :
            heterogramme = False

    if heterogramme == True :
        print("C'est un hétérogramme")
    else :
        print("Ce n'est pas un hétérogramme")
