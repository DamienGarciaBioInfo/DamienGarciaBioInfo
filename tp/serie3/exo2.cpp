#include <iostream>
using namespace std ;

//Variables globales
int nb , i , choice ;

//Fonctions
float addition(float tab) ;
float soustraction(float tab) ;
float multiplication(float tab) ;
float division(float tab) ;

float addition(float tab[] , int nb){
  float result = 0 ;

  for(i = 0 ; i <= nb ; i++){
    result = result + tab[i] ;
  }

  return result ;
}

float soustraction(float tab[] , int nb){
  float result = 0 ;

  for(i = 0 ; i <= nb ; i++){
    result = result - tab[i] ;
  }

  return result ;
}

float multiplication(float tab[] , int nb){
  float result = 0 ;

  for(i = 0 ; i <= nb ; i++){
    result = result * tab[i] ;
  }

  return result ;
}

float division(float tab[] , int nb){
  float result = 0 ;

  for(i = 0 ; i <= nb ; i++){
    result = result / tab[i] ;
  }

  return result ;
}

int main(){
  cout  << "Choisissez l'opération à l'effectuer :" << endl
        << "1 --> Addition" << endl
        << "2 --> Soustraction" << endl
        << "3 --> Multiplication" << endl
        << "4 --> Division" << endl ;
  cin   >> choice ;

  switch(choice){
    case 1 : addition(tab) ;        break ;
    case 2 : soustraction(tab) ;    break ;
    case 3 : multiplication(tab) ;  break ;
    case 4 : division(tab) ;        break ;
    default : cout << "Erreur d'entrée..." << endl ;
  }

  cout  << "Nombre de valeurs pour l'opération --> " ;
  cin   >> nb ;
  float tab[nb] = {0} ;

  for(i = 0 ; i = nb ; i++){
    cin >> tab[i] ;
  }

  return 0 ;
}
