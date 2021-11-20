//Algorithme Forfaits_SMS

#include <iostream>

using namespace std ;

int nbSMS ;
double forfaitA , forfaitB, forfaitC ;

int main(){
  cout  << "Combien envoyez-vous de SMS par mois ? " ;
  cin   >> nbSMS ;

  forfaitA = 20 ;
  forfaitB = 0.15 * nbSMS ;
  forfaitC = 12 + 0.05 * nbSMS ;

  if(forfaitA < forfaitB && forfaitA < forfaitC){
    cout << "Le forfait A est le plus intéressant" << endl ;
    cout << "Vous devrez payer " << forfaitA << "€" << endl ;
  }else{
    if(forfaitB < forfaitC){
      cout << "Le forfait B est le plus intéressant" << endl ;
      cout << "Vous devrez payer " << forfaitB << "€" << endl ;
    }else{
      cout << "Le forfait C est le plus intéressant" << endl ;
      cout << "Vous devrez payer " << forfaitC << "€" << endl ;
    }
  }
}
