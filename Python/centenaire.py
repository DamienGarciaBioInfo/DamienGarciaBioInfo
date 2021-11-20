#!/usr/bin/env python3

name=input("Entrez votre prénom --> ")
birth=input("Entrez votre année de naissance --> ")

centenaire=int(birth)+100

print("{}, vous aurez cent ans en {}.".format(name,centenaire))
