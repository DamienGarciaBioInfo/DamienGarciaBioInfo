//Algorithme ph - Damien GARCIA - M1BB

#include <iostream>
using namespace std ;

//Variables globales
int i , nb ;
float ph ;
float tab_ph[100] ;
float tab_ph_norm[100] ;
float accumulateur = 0 ;
float moyenne = 0 ;

//Fonction principale
int main(){
  cout  << "Entrez jusqu'à 100 valeurs de pH entre 0 et 14." << endl
        << "Si vous entrez une autre valeur, la saisie s'arrête." << endl ;

  //Boucle qui permet de stocker les saisies de pH dans le tableau
  //La saisie s'arrête si une valeur entrée n'est pas dans l'intervale [0;14]
  for(i = 0 ; i <= 99 ; i++){
    cout  << "Entrez la valeur de pH numéro " << i + 1 << " --> " ;
    cin   >> tab_ph[i] ;
    if(tab_ph[i] < 0 || tab_ph[i] > 14){
      nb = i ; //stock le nombre de valeur utiles du tableau
      i = 99 ; //permet de forcer l'arrêt de la boucle
    }
  }

  //Calcul et affichage de la moyenne
  for(i = 0 ; i <= nb ; i++){
    if(tab_ph[i] >= 0 && tab_ph[i] <= 14){
      accumulateur += tab_ph[i] ;
    }else{
      i = 99 ;
    }
  }
  moyenne = accumulateur / (nb) ;

  cout << "Moyenne = " << moyenne << endl ;

  //Calcul et affichage du tableau tab_ph_norm[]
  for(i = 0 ; i <= nb ; i++){
    tab_ph_norm[i] = tab_ph[i] / moyenne ;
  }

  for(i = 0 ; i <= nb - 1 ; i++){
    if(ph >= 0 && ph <= 14){
      cout << "Valeur normalisée " << i + 1 << " --> " << tab_ph_norm[i] << endl ;
    }
  }

  return 0 ;
}
