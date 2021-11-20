#include <iostream>

using namespace std ;

//Algorithme qui détermine si un nombre donné est pair ou impair.

int nombre ;
int reste ;

int main()
{
  cout  << "Entrez un nombre --> ";
  cin   >> nombre ;

  reste = nombre % 2 ;

  if(reste == 0) {
    cout << "Le nombre est pair"    << endl ;
  }else{
    cout << "Le nombre est impair"  << endl ;
  }
}
