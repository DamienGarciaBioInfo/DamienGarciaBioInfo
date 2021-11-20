//Algorithme Mois

#include <iostream>

using namespace std ;

int numero_mois ;
string nom_mois ;

int main(){

  //Saisie par l'utilisateur
  cout  << "Choisissez un nombre entre 1 et 12 --> " ;
  cin   >> numero_mois ;

  //Conditionnelle multiple
  switch(numero_mois){
    case 1 :
      nom_mois = "Janvier" ;
      break ;
    case 2 :
      nom_mois = "Février" ;
      break ;
    case 3 :
      nom_mois = "Mars" ;
      break ;
    case 4 :
      nom_mois = "Avril" ;
      break ;
    case 5 :
      nom_mois = "Mai" ;
      break ;
    case 6 :
      nom_mois = "Juin" ;
      break ;
    case 7 :
      nom_mois = "Juillet" ;
      break ;
    case 8 :
      nom_mois = "Août" ;
      break ;
    case 9 :
      nom_mois = "Septembre" ;
      break ;
    case 10 :
      nom_mois = "Octobre" ;
      break ;
    case 11 :
      nom_mois = "Novembre" ;
      break ;
    case 12 :
      nom_mois = "Décembre" ;
      break ;
    default :
      cout << "La valeur indiquée doit être entre 1 et 12 !" << endl ;
    break ;
  }

  //Affichage
  if(numero_mois >= 0 && numero_mois <= 12){
    cout  << "Le mois correspondant à la valeur indiquée est --> "
          << nom_mois
          << endl ;
  }

}
