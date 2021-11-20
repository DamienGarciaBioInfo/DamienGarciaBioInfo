#!/usr/bin/env python3

def is_bissextile(annee) :
    if annee % 400 == 0 or (annee % 4 == 0 and annee % 100 != 0) :
        return True
    else :
        return False
        
print(__name__)

annee = int(input("Indiquez une année\n"))
if  is_bissextile(annee) :
    print("Année bissextile")
else :
    print("Année non bissextile")
