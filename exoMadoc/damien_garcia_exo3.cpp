//Damien GARCIA - M1BB - Exercice 3

#include <iostream>
#include <ctime>
using namespace std ;

//Variables :
int counter = 0 ;
int nbMyst ;
int guess ;

//Fonction qui détermine si le nombre entré par l'utilisateur est
//plus petit, plus grand ou égal au nombre mystère.
int deviner(int guess, int nbMyst) ;

int deviner(int guess, int nbMyst){
  if(guess == nbMyst){
    return 0 ;
  }else{
    if(guess < nbMyst){
      return 1 ;
    }else{
      return 2 ;
    }
  }
}

//Algorithme déterminant un nombre mystère que l'utilisateur doit trouver.
int main(){
  cout << "Trouvez le nombre mystère (Entre 0 et 100)" << endl ;

  //Génération du nombre mystère aléatoirement
  srand(time(0)) ;
  nbMyst = rand() % 100 + 1 ;

  //Appel de la fonction et retour du résultat
  do{
    cin >> guess ;
    switch(deviner(guess , nbMyst)){
      case 0 : cout << "Vous avez trouvé le nombre mystère" << endl ; break ;
      case 1 : cout << "Plus grand" << endl ; break ;
      case 2 : cout << "Plus petit" << endl ; break ;
    }

    //Incrémentation du compteur
    counter++ ;

  }while(guess != nbMyst) ;

  //Affichage du nombre de tentatives
  cout << "Il vous a fallu " << counter << " tentatives" << endl ;

  return 0 ;
}
