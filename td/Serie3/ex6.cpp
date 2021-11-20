//Algorithme Capital

#include <iostream>

using namespace std ;

float capital , taux ;
int n , i ;

int main(){
  cout  << "Entrez la valeur du Capital : " ;
  cin   >> capital ;
  cout  << "Entrez la valeur du taux annuel : " ;
  cin   >> taux ;
  cout  << "A combien d'année souhaitez-vous obtenir le prévisionnel ? " ;
  cin   >> n ;

  if(n == 0){
    cout << "Capital = " << capital << endl ;
  }else{
    for(i = 1 ; i <= n ; i++){
      capital = capital * (taux + 1) ;
    }
  }
  cout  << "Votre capital aura une valeur de " << capital
        << " dans " << n << " année(s)" << endl ;

  return 0 ;
}
