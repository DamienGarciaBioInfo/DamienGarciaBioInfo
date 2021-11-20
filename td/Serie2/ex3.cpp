//Algorithme tarif_envoi_lettre

#include <iostream>

using namespace std ;

int destination , poids ;
float tarif ;

int main(){

  //Affectation des données par l'utilisateur
  destination = 0 ;
  while(destination < 1 || destination > 3){
    cout  << "Indiquez la destination de votre lettre :" << endl
          << "France métropolitaine --> [1]" << endl
          << "DOM --> [2]" << endl
          << "TOM --> [3]" << endl
          << "Réponse = " ;
    cin   >> destination ;
  }

  poids = -1 ;
  while(poids <= 0){
    cout  << "Indiquez le poids de votre lettre (g) :" << endl
          << "Réponse = " ;
    cin   >> poids ;
  }

  //Calcul du coup de base d'envoi
  if(poids > 0 && poids <= 20){
    tarif = 0.66 ;
  }else{
    if(poids > 20 && poids <= 50){
      tarif = 1.10 ;
    }else{
      if(poids > 50 && poids <= 100){
        tarif = 1.65 ;
      }else{
        tarif = 2.65 ;
      }
    }
  }

  //Calcul des frais supplémentaires si besoin
  if(destination == 2 && poids >= 20){
    tarif = tarif + ((tarif / 10) * 0.05) ;
  }else{
    if(destination == 3 && poids >= 20){
      tarif = tarif + ((tarif / 10) * 0.11) ;
    }
  }

  //Affichage des frais d'envoi
  if(poids > 250){
    cout  << "Ce service ne permet pas l'envoi de lettre de plus de 250g"
          << endl ;
  }else{
    cout  << "Vous devez payer " << tarif << "€ pour votre envoi"
          << endl ;
  }

  return 0 ;
}
