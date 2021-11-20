//Algorithme smallestIndex - Damien GARCIA - M1BB

#include <iostream>
#include <ctime>
using namespace std ;

//Fonction qui détermine la position de la plus petite valeur dans le tableau.
int smallestIndex(int testArray[] , int maxArraySize ){
  int i = 0 ;
  int smallestPosition = 0 ;
  int smallestValue = testArray[0] ;
  for(i = 0 ; i <= (maxArraySize - 2) ; i++){
    if(smallestValue > testArray[i]){
      smallestValue = testArray[i] ;
      smallestPosition = i ;
    }
  }
  return smallestPosition ;
}

int main(){
  //Initialisation
  int maxArraySize = 10 ;
  int testArray[maxArraySize] = {0} ;

  //Génération d'entiers aléatoirement pour remplir le tableau
  srand(time(0)) ;
  for(int i = 0 ; i <= (maxArraySize - 1) ; i++){
    int randomValue = rand() % 100 + 1 ;
    testArray[i] = randomValue ;
  }

  //Appel de la fonction smallestIndex
  int smallestPosition = smallestIndex(testArray, maxArraySize) ;

  //Affichage du tableau utilisé
  cout << "Valeurs du tableau =   " ;
  for(int i = 0 ; i <= (maxArraySize - 1) ; i++){
    cout  << testArray[i] << "   " ;
  }
  cout << endl ;

  //Affichage du résultat
  cout  << "La position de la première occurence du plus petit élément est "
        << smallestPosition + 1
        << " avec une valeur de "
        << testArray[smallestPosition]
        << endl ;

  return 0 ;
}
