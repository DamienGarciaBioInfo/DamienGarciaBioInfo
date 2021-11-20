//Algorithme Factorielles

#include <iostream>

using namespace std ;

double n , i , result , increment ;

int main(){
  result = 1 ;
  increment = 1 ;

  cout  << "Entrez un nombre n pour obtenir le résultat de 1/n! --> " ;
  cin   >> n ;

  if(n == 0){
    result = 1 ;
  }else{
    if(n == 1){
      result = 2 ;
    }else{
      if(n >= 2){
        for (i = 1 ; i <= n ; i++){
          increment = increment * i ;
          result = result +(1 / increment) ;
        }
      }
    }
  }

  cout << "1/" << n << "! = " << result << endl ;
}
