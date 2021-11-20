#! /usr/bin/env bash

#Affichage des noms des colonnes
echo -e "Poids\tAge" > poids-age.dat2

#Création des délimiteurs
cat poids-age.dat1 |
tr : ',' |

#Affichage des colonnes
cut -d ',' --output-delimiter='\t' -f 2,4 |
column -t -s '\t' >> poids-age.dat2
