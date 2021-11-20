//Algorithme Tri_3_nombres

#include <iostream>

using namespace std ;

int nb1, nb2, nb3 ;
int temp ;
int ordre ;

int main(){

  //Saisie des 3 nombres par l'utilisateur
  cout  << "Entrez 3 nombres entier que vous souhaitez trier :" << endl ;
  cout  << "nb1 = " ;
  cin   >> nb1 ;
  cout  << "nb2 = " ;
  cin   >> nb2 ;
  cout  << "nb3 = " ;
  cin   >> nb3 ;

  //Affectation des nb dans l'ordre croissant
  //Place dans nb1 le nombre le plus petit
  if(nb1 > nb2){
    temp  = nb1 ;
    nb1   = nb2 ;
    nb2   = temp ;
  }else{
    if(nb1 > nb3){
      temp  = nb1 ;
      nb1   = nb3 ;
      nb3   = temp ;
    }
  }
  //Place dans nb3 le nombre le plus grand (entre nb2 et nb3)
  if(nb2 > nb3){
    temp = nb2 ;
    nb2   = nb3 ;
    nb3   = temp ;
  }

  //L'utilisateur choisi si le tri est croissant ou décroissant
  cout  << "Tri dans l'ordre croissant ?  --> [1]" << endl ;
  cout  << "Tri dans l'odre décroissant ? --> [2]" << endl ;
  cout  << "Choix --> " ;
  cin   >> ordre ;

  switch (ordre) {
    case 1  :
      cout << nb1 << " < " << nb2 << " < " << nb3 << endl ;
      break ;
    case 2  :
      cout << nb3 << " > " << nb2 << " > " << nb1 << endl ;
      break ;
    default : cout << "La valeur entrée doit être 1 ou 2 !" ; break ;
  }

}
