//Série 1 - Exercice 1

#include <iostream>
using namespace std ;

int main(){
  char op ;
  float n1 , n2 , n3 , n4 ;
  float result ;

  cout  << "Opération souhaitée (+,-,*,/) --> " ;
  cin   >> op ;
  cout  << "Donner 4 nombres : " << endl ;
  cin   >> n1 >> n2 >> n3 >> n4 ;

  switch(op){
    case '+' : result = n1 + n2 + n3 + n4 ; break ;
    case '-' : result = n1 - n2 - n3 - n4 ; break ;
    case '*' : result = n1 * n2 * n3 * n4 ; break ;
    case '/' : result = n1 / n2 / n3 / n4 ; break ;
    default  : cout << "Opérateur ou valeurs non valides..." << endl ;
  }

  cout  << "Resultat = " << result << endl ;

  return 0;
}
