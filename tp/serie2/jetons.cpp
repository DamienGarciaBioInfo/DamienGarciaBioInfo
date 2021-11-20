//Algorithme jeuDesJetons - Exercice 2

#include <iostream>
#include <ctime>
using namespace std ;

int nbJetons ;
int substract ;
int bestChoice ;
bool playerTurn = true ;

int main(){
  srand(time(0)) ;
  nbJetons = rand() % 70 + 1;
  cout  << "Nombre de jetons de départ : " << nbJetons << endl ;

  while(nbJetons > 0){
    if(playerTurn == true){
      cout  << "Enlevez un nombre de jetons compris entre 1 et 6." << endl
            << "Choix ? " ;
      cin   >> substract ;
      nbJetons -= substract ;
      cout  << "Nombre de jetons restants : " << nbJetons << endl ;
    }else{
      bestChoice = nbJetons % 7 ;
      if(bestChoice != 0){
        nbJetons -= bestChoice ;
        cout << "L'ordinateur enlève " << bestChoice << " jetons" << endl ;
      }else{
        srand(time(0)) ;
        bestChoice = rand() % 5 + 1 ;
        nbJetons -= bestChoice ;
        cout << "L'ordinateur enlève " << bestChoice << " jetons" << endl ;
      }
      cout << "Nombre de jetons restants :" << nbJetons << endl ;
    }
    playerTurn = !playerTurn ;
  }
  if(playerTurn == false){
    cout << "Vous avez gagné !" << endl ;
  }else{
    cout << "Vous avez perdu !" << endl ;
  }

  return 0 ;
}
