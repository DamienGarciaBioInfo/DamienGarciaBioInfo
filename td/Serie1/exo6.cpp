#include <iostream>

using namespace std ;

//Programme qui  détermine l'aire et le perimetre d'un rectangle.
//Conversion les valeurs de mètre à centimètre.

double longueur  = 0 ;
double largeur   = 0 ;
double aire      = 0 ;
double perimetre = 0 ;

int main()
{
  cout  << "Longueur du rectangle en mètre = " ;
  cin   >> longueur ;
  cout  << "Largeur du rectangle en mètre = " ;
  cin   >> largeur ;

  aire      = longueur * largeur * 10000 ;
  perimetre = (longueur + largeur) * 2 * 100 ;

  cout << "Aire = "      << aire       << " cm²"  << endl ;
  cout << "Périmètre = " << perimetre  << " cm"   << endl ;

  return 0 ;
}
