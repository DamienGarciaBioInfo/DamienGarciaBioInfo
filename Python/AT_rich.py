#!/usr/bin/env python3

def at_rich(adn) :
    at = (adn.upper().count("A") + adn.upper().count("T")) / len(adn)
    if at < 0.65 :
        return False
    else :
        return True

adn = input("Séquence ADN \n")
if at_rich(adn) == False :
    print("Séquence pas riche en bases A et T \n")
else :
    print("Séquence riche en bases A et T \n")
