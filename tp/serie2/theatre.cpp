//Algorithme theatre - Exercice 1

#include <iostream>
using namespace std ;

//Variables globales :
int placeCat1 = 25 ;
int placeCat2 = 60 ;
int placeCat3 = 45 ;
int categorySelection ;
int nbPlaces ;

//Constantes :
const int PLACE_MAX_1 = 25 ;
const int PLACE_MAX_2 = 60 ;
const int PLACE_MAX_3 = 45 ;

void liberer() ;
void reserver() ;
void afficher() ;

//Procédure qui affiche le nombre de places disponibles
void afficher(){
  cout  << "Nombre de places de catégories 1 disponibles --> " << placeCat1 << endl
        << "Nombre de places de catégories 2 disponbiles --> " << placeCat2 << endl
        << "Nombre de places de catégories 3 disponibles --> " << placeCat3 << endl ;
}

//Fonction qui permet de réserver des places
void reserver(){
  cout  << "Quelle catégorie de place souhaitez vous réserver ?" << endl
        << "Catégorie 1 --> [1]" << endl
        << "Catégorie 2 --> [2]" << endl
        << "Catégorie 3 --> [3]" << endl ;
  cin   >> categorySelection ;
  cout  << "Combien de places souhaitez-vous réserver ?" << endl ;
  cin   >> nbPlaces ;
}

//Fonction qui permet de libérer des places
void liberer(){
  cout  << "Quelle catégorie de place souhaitez vous libérer ?" << endl
        << "Catégorie 1 --> [1]" << endl
        << "Catégorie 2 --> [2]" << endl
        << "Catégorie 3 --> [3]" << endl ;
  cin   >> categorySelection ;
  cout  << "Combien de places souhaitez-vous libérer ?" << endl ;
  cin   >> nbPlaces ;
}

//Fonction principale
int main(){
  int menuSelection ;

  do{
    cout  << "----------------------------------------" << endl
          << "| 0 : Quitter                          |" << endl
          << "| 1 : Réserver des places              |" << endl
          << "| 2 : Libérer des places               |" << endl
          << "| 3 : Afficher l'état des réservations |" << endl
          << "----------------------------------------" << endl ;
    cin   >> menuSelection ;

    switch(menuSelection){
      case 0  : cout << "Merci de votre visite, au revoir" << endl ;
                break ;
      case 1  : reserver() ;
                if(categorySelection == 1){
                  if(placeCat1 - nbPlaces < 0){
                    cout << "Pas assez de places disponibles" << endl ;
                  }else{
                    placeCat1 = placeCat1 - nbPlaces ;
                  }
                }else{
                  if(categorySelection == 2){
                    if(placeCat2 - nbPlaces < 0){
                      cout << "Pas assez de places disponibles" << endl ;
                    }else{
                      placeCat2 = placeCat2 - nbPlaces ;
                    }
                  }else{
                    if(categorySelection == 3){
                      if(placeCat3 - nbPlaces < 0){
                        cout << "Pas assez de places disponibles" << endl ;
                      }else{
                        placeCat3 = placeCat3 - nbPlaces ;
                      }
                    }
                  }
                }
                break ;
      case 2  : liberer() ;
                if(categorySelection == 1){
                  if(placeCat1 + nbPlaces > PLACE_MAX_1){
                    placeCat1 = PLACE_MAX_1 ;
                  }else{
                    placeCat1 = placeCat1 - nbPlaces ;
                  }
                }else{
                  if(categorySelection == 2){
                    if(placeCat2 + nbPlaces > PLACE_MAX_2){
                      placeCat2 = PLACE_MAX_2 ;
                    }else{
                      placeCat2 = placeCat2 - nbPlaces ;
                    }
                  }else{
                    if(categorySelection == 3){
                      if(placeCat3 + nbPlaces > PLACE_MAX_3){
                        placeCat3 = PLACE_MAX_3 ;
                      }else{
                        placeCat3 = placeCat3 - nbPlaces ;
                      }
                    }
                  }
                }
                break ;
      case 3  : afficher() ;
                break ;
      default : cout << "Choix incorrect..." << endl ;
                break ;
    }
  }while(menuSelection != 0) ;

  return 0 ;
}
