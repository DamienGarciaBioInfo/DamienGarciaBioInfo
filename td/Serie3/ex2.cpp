//Algorithme f f(x) = sin(x)-ln(x)

#include <iostream>
#include <math.h>

using namespace std ;

float fTemp ;

int main(){

  float x , f ;
  x = 0.2 ;
  f = 0.0 ;

  while(fTemp <= f){
    f = fTemp ;
    x = x + 0.1 ;
    fTemp = sin(x) - log(x) ;
  }

  cout  << "La valeur de x pour laquelle la courbe augmente est : "
        << x
        << endl ;

  return 0 ;
}
