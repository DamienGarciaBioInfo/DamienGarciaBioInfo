//Programme moyenne_3_entier - Damien GARCIA - M1BB

#include <iostream>

using namespace std ;

int main(){
  int num1 , num2 , num3 , moyenne ;

  //Affectation des valeurs pour les 3 entier
  cout  << "Entrez 3 entier pour en obtenir une moyenne." << endl ;
  cout  << "num1 = " ;
  cin   >> num1 ;
  cout  << "num2 = " ;
  cin   >> num2 ;
  cout  << "num3 = " ;
  cin   >> num3 ;

  //Calcul du la moyenne
  moyenne = (num1 + num2 + num3) / 3 ;

  //Affichage du résulat
  cout << "Moyenne = " << moyenne << endl ;

  return 0 ;
}
