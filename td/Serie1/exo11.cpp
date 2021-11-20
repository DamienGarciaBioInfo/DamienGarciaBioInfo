//Algorithme Calcul_IMC

#include <iostream>
#include <math.h>

using namespace std ;

float poids, poidsMin, poidsMax, taille, imc ;

int main(){

  //Saisies de l'utilisateur
  cout  << "Indiquez votre taille (m) : " ;
  cin   >> taille ;
  cout  << "Indiquez votre poids (kg) : " ;
  cin   >> poids ;

  //Calcul d'imc, imcMin et imcMax
  imc       = poids / pow(taille , 2) ;
  poidsMin  = 18.5  * pow(taille , 2) ;
  poidsMax  = 25    * pow(taille , 2) ;

  cout << "Votre IMC est de : " << imc ;

  //Indique la classification de l'IMC de l'utilisateur
  if(imc < 18.5){
    cout << " et indique un souspoids." << endl ;
  }else{
    if(imc > 25){
      cout << " et indique un surpoids." << endl ;
    }else{
      cout << " et indique une constitution moyenne." << endl ;
    }
  }

  //Indique l'intervale de poids de l'individu pour une IMC moyenne
  cout  << "Votre poids idéal se situe entre "
        << poidsMin << "kg et "
        << poidsMax << "kg." << endl ;

}
