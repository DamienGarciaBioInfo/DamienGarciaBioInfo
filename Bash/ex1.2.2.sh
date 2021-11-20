#BASH project

#Affichage des noms des colonnes
echo "Poids Age" | column -t -s ' ' > poids-age.dat2

cat poids-age.dat1 |
tr : , |
cut -d , -f 2,4 |
tr , ' ' |
column -t -s ' ' >> poids-age.dat2
