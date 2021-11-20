#include <iostream>
using namespace std ;

int main(){
  float nb ;
  float tab1[20] = {0} ;
  float tab2[20] = {0} ;

  //Saisies
  cout  << "Entrez 20 réels" << endl ;
  for(int i = 0 ; i <= 19 ; i++){
    cout  << "Valeur " << i + 1 << " = " ;
    cin   >> nb ;
    tab1[i] = nb ;
  }

  //Stockage des valeurs positives de tab1 dans tab2
  for(int i = 0 ; i <= 19 ; i++){
    if(tab1[i] > 0){
      tab2[i] = tab1[i] ;
    }else{
      tab2[i] = 0 ;
    }
  }

  //Affichage des valeurs > 0 de tab2
  for(int i = 0 ; i <= 19 ; i++){
    if(tab2[i] > 0){
      cout << tab2[i] << "  " ;
    }
  }

  cout << endl ;

  return 0 ;
}
