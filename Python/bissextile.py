#!/usr/bin/env python3

annee = int(input("Indiquez une année\n"))
if annee % 400 == 0 or (annee % 4 == 0 and annee % 100 != 0) :
    print("Année bissextile")
else :
    print("Année non bissextile")
