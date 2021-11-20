#include <iostream>

using namespace std ;

int main(){
  int i = 0 ;
  int tab[10] = {0} ;
  int valMax , ind_valMax ;
  int valMin , ind_valMin ;
  int acc_pairs , acc_impairs ;

  //Affectation des valeurs du tableau
  cout  << "Entrez 10 entiers" << endl ;
  for(i = 0 ; i <= 9 ; i++){
    cin >> tab[i] ;
  }

  //Affichage du plus grand élément ainsi que son indice
  //Affichage du plus petit élément ainsi que son indice
  valMax = tab[1] ;
  valMin = tab[1] ;

  for(i = 0 ; i <= 9 ; i++){
    if(tab[i] > valMax){
      valMax = tab[i] ;
      ind_valMax = i ;
    }
    if(tab[i] < valMin){
      valMin = tab[i] ;
      ind_valMin = i ;
    }
  }
  cout  << "Valeur maximum " << valMax << " à l'indice " << ind_valMax << endl ;
  cout  << "Valeur minimum " << valMin << " à l'indice " << ind_valMin << endl ;

  //Affichage du cumul des entiers pairs
  //Affichage du cumul des entiers impairs
  acc_pairs = 0 ;
  acc_impairs = 0 ;
  for(i = 0 ; i <= 9 ; i++){
    if(tab[i] % 2 == 0){
      acc_pairs += tab[i] ;
    }else{
      acc_impairs += tab[i] ;
    }
  }
  cout << "Cumul des entiers pairs = " << acc_pairs << endl ;
  cout << "Cumul des entiers imparis = " << acc_impairs << endl ;

  return 0 ;
}
