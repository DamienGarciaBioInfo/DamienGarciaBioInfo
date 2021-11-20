//Algorithme - Exercice 1 - plus_grand_nombre

#include <iostream>

using namespace std ;

int nbMax , nbTemp , i ; //i étant le compteur

int main(){
  //Initialisation des variables
  nbTemp = -999999 ;
  nbMax  = 0 ;
  i = 0 ;

  cout  << "Entrez une suite de nombres" << endl
        << "Entrez un nombre négatif pour obtenir le résultat nbMax." << endl ;

  while(nbTemp >= 0){
    cin >> nbTemp ;

    if(nbTemp > nbMax){
      nbMax = nbTemp ;
    }

  }
  cout << "Le plus grand nombre entré est = " << nbMax << endl ;

  return 0 ;
}
