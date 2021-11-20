//Série 1 - Exercice 1

#include <iostream>
using namespace std ;

int annee , mois , nbJour , nbJour_fevrier ;
string nomMois ;
bool bissextile ;

int main(){

  //Saisies de la date
  cout  << "Entrez une année : " ;
  cin   >> annee ;
  cout  << "Entrez le numéro du mois : " ;
  cin   >> mois ;

  //Détermine si l'année est bissextile
  //Détermine le nombre de jour en Février
  if(annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0){
    bissextile = true ;
    nbJour_fevrier = 29 ;
  }else{
    bissextile = false ;
    nbJour_fevrier = 28 ;
  }

  //Indique le nom du mois et le nombre de jour qu'il contient
  switch(mois){
    case 1  : nomMois = "Janvier" ;
              nbJour  = 31 ;
              break ;
    case 2  : nomMois = "Février" ;
              nbJour  = nbJour_fevrier ;
              break ;
    case 3  : nomMois = "Mars" ;
              nbJour  = 31 ;
              break ;
    case 4  : nomMois = "Avril" ;
              nbJour  = 30 ;
              break ;
    case 5  : nomMois = "Mai" ;
              nbJour  = 31 ;
              break ;
    case 6  : nomMois = "Juin" ;
              nbJour  = 30 ;
              break ;
    case 7  : nomMois = "Juillet" ;
              nbJour  = 31 ;
              break ;
    case 8  : nomMois = "Août" ;
              nbJour  = 31 ;
              break ;
    case 9  : nomMois = "Septembre" ;
              nbJour  = 30 ;
              break ;
    case 10 : nomMois = "Octobre" ;
              nbJour = 31 ;
              break ;
    case 11 : nomMois = "Novembre" ;
              nbJour = 30 ;
              break ;
    case 12 : nomMois = "Décembre" ;
              nbJour = 31 ;
              break ;
    default : cout << "La valeur entrée pour le mois n'existe pas" << endl ;
  }

  //Affichage des résultats
  cout  << "Le mois de " << nomMois << " de l'année " << annee
        << " contient "  << nbJour  << "jours." << endl ;

  return 0;
}
