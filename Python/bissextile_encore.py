#!/usr/bin/env python3

def bissextile(annee) :
    if ( annee % 4 == 0 and annee % 100 != 0 ) or annee % 400 == 0 :
        return True
    else :
        return False

x = True
while x == True :
    annee = input("Indiquez une année après 1583 \n")
    if bissextile(annee) == True :
        print("Année bissextile \n")
    else :
        print("Année non bissextile \n")

    if annee < 1683 :
        x = False
