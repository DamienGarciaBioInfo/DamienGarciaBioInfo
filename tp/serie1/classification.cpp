//Série 1 - Exercice 5

#include <iostream>
using namespace std ;

  int q ; //Quantième (jour du mois)
  int m , mTemp ; //Mois (Commençant à Janvier = 3)
  int s ; //Séculaire (Le centenaire en cours)
  int d ; //Deux dernier chiffres de l'année
  int annee ;
  int k , kTemp ; //Valeur du jour
  string jour ;

int main(){
  cout  << "Entrez le jour du mois" << endl ;
  cin   >> q ;

  cout  << "Entrez le mois" << endl ;
  cin   >> mTemp ;
  if(mTemp < 3){
    m = mTemp + 12 ;
  }else{
    m = mTemp ;
  }

  cout  << "Entrez l'année" << endl ;
  cin   >> annee ;
  s = annee / 100 ;
  d = annee % 100 ;

  kTemp = q + (int)(2.6*(m+1)) + (int)(s/4) - 2*s + d + (int)(d/4) ;
  k = kTemp % 7 ;
  if(k < 0){
    k = -k ;
  }

  cout << kTemp << endl ;
  cout << k << endl ;

  switch(k){
    case 0 : jour = "Samedi" ;                break ;
    case 1 : jour = "Dimanche" ;              break ;
    case 2 : jour = "Lundi" ;                 break ;
    case 3 : jour = "Mardi" ;                 break ;
    case 4 : jour = "Mercredi" ;              break ;
    case 5 : jour = "Jeudi" ;                 break ;
    case 6 : jour = "Vendredi" ;              break ;
    default : cout << "What the f*** man ?" ; break ;
  }

  cout << "Vous êtes né un " << jour << endl ;

  return 0 ;
}
