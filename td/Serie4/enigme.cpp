//Exercice 5

#include <iostream>
using namespace std ;

bool est_pair(unsigned long long int nb){
  if(nb % 2 == 0){
    return true ;
  }else{
    return false ;
  }
}

unsigned long long int moitie(unsigned long long int nb){
  return(nb / 2) ;
}

unsigned long long int un_plus_triple(unsigned long long int nb){
  return(nb * 3 + 1) ;
}

unsigned long long int saisie_entier_positif (unsigned long long int nb){
  do {
    cout  << "Entrez un nombre positif --> " ;
    cin   >> nb ;
  } while(nb < 0);
  return(nb) ;
}
int main(){
  unsigned long long int nb = saisie_entier_positif(nb) ;
  do {
    if(est_pair(nb) == true){
      nb = moitie(nb) ;
    }else{
      nb = un_plus_triple(nb) ;
    }
    cout << nb << endl ;
  } while(nb != 1);

  return 0 ;
}
