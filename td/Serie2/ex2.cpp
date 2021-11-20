//Algorithme ex2v2

#include <iostream>

using namespace std ;

int jour , age , etudiant ;

int main(){

  cout  << "Quel jour sommes nous ?" << endl
        << "Lundi     --> 1" << endl
        << "Mardi     --> 2" << endl
        << "Mercredi  --> 3" << endl
        << "Jeudi     --> 4" << endl
        << "Vendredi  --> 5" << endl
        << "Samedi    --> 6" << endl
        << "Dimanche  --> 7" << endl
        << "Réponse = " ;
  cin   >> jour ;

  cout  << "Quel age avez-vous ?" << endl
        << "Réponse = " ;
  cin   >> age ;

  cout  << "Etes-vous étudiant ?" << endl
        << "Oui --> 1" << endl
        << "Non --> 2" << endl
        << "Réponse = " ;
  cin   >> etudiant ;

  if(jour == 3 || etudiant == 1 || ((age < 18 || age < 65) && (jour != 6 && jour != 7))) {
    cout << "Vous bénéficiez du tarif réduit de 4.50€ !" << endl ;
  }else{
    cout << "Vous devez payer le plein tarif de 7.00€ !" << endl ;
  }

  return 0 ;
}
