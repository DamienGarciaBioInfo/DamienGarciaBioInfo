//Algorithme - Exercice 1 - plus_grand_nombre

#include <iostream>

using namespace std ;

int nbMax , nbTemp , i ; //i étant le compteur

int main(){
  //Initialisation des variables
  nbTemp = 0 ;
  nbMax  = 0 ;
  i = 0 ;

  cout  << "Entrez une suite de 20 nombres" << endl
        << "Entrez un nombre négatif pour obtenir le résultat nbMax." << endl ;

  for(i = 0 ; i <= 19 ; i = i + 1){
    cin >> nbTemp ;

    if(nbTemp > nbMax){
      nbMax = nbTemp ;
    }

    //Permet de quitter la boucle si l'utilisateur entre un nombre négatif
    if(nbTemp < 0){
      break ;
    }

  }
  cout << "Le plus grand nombre entré est = " << nbMax << endl ;

  return 0 ;
}
