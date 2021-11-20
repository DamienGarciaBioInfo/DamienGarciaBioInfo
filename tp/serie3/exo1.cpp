#include <iostream>
#include <math.h>
using namespace std ;

//Variables globales
float tab[5] = {0} ;
int i = 0 ;

//Fonctions :
float moyenne(float tab[]) ;
float devStandard(float tab[]) ;

//Fonction qui fait la moyenne des nombres du tableau
float moyenne(float tab[]){
  int somme = 0 ;

  for(i = 0 ; i <= 5 ; i++){
    somme += tab[i] ;
  }
  return(somme / 5) ;
}

//Fonction qui fait l'écart type des valeurs dans le tableau
float devStandard(float tab[]){
  int num = 0 ;
  int u = moyenne(tab) ;

  for(i = 0 ; i <= 5 ; i++){
    num += (tab[i] - u) * (tab[i] - u) ;
  }

  return(sqrtf(num / 5)) ;
}


//Fonction principale
int main(){
  cout << "Entrez 5 nombres réels" << endl ;
  for(i = 0 ; i <= 4 ; i++){
    cin >> tab[i] ;
  }

  cout << "Moyenne = " << moyenne(tab) << endl ;

  cout << "Déviation standard = " << devStandard(tab) << endl ;

  return 0 ;
}
