//Algorithme Conversion_Temperature - Version boucle pour

#include <iostream>

using namespace std ;

int main(){

  float fahrenheit , celsius ;

  cout  << "Liste des équivalences des température °F et °C (de 0 à 500 °F) :"
        << endl ;
  for(fahrenheit = 0 ; fahrenheit <= 500 ; fahrenheit = fahrenheit + 10){
    celsius = 5 * (fahrenheit - 32) / 9 ;
    cout << fahrenheit << "°F = " << celsius << "°C" << endl ;
  }

  return 0 ;
}
