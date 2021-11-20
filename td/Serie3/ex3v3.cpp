//Algorithme Conversion_Temperature - Version boucle répéter

#include <iostream>

using namespace std ;

int main(){

  float fahrenheit , celsius ;

  fahrenheit = 0 ;
  celsius = 0 ;

  cout  << "Liste des équivalences des température °F et °C (de 0 à 500 °F) :"
        << endl ;

  do{
    celsius = 5 * (fahrenheit - 32) / 9 ;
    cout << fahrenheit << "°F = " << celsius << "°C" << endl ;
    fahrenheit = fahrenheit + 10 ;
  }while(fahrenheit <= 500) ;

  return 0 ;
}
