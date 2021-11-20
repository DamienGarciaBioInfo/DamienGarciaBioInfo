//Alrorithme Notes

#include <iostream>

using namespace std ;

double note1 , note2 , note3 , moyenne ;
int compteur ;
bool admission ;

int main()
{
  //Affectation des notes par l'utilisateur
  cout  << "Note numéro 1 ? (/20) = " ;
  cin   >> note1 ;
  cout  << "Note numéro 2 ? (/20) = " ;
  cin   >> note2 ;
  cout  << "Note numéro 3 ? (/20) = " ;
  cin   >> note3 ;

  moyenne = (note1 + note2 + note3) / 3 ;

  //Compteur qui indique le nombre de notes < 7.5
  compteur = 0 ;
  if(note1 < 7.5){
    compteur = compteur + 1 ;
  }
  if(note2 < 7.5){
    compteur = compteur + 1 ;
  }
  if(note3 < 7.5){
    compteur = compteur + 1 ;
  }

  //Vérifie toutes les conditions de validation du module
  if(note1 < 6 || note2 < 6 || note3 < 6){
    admission = false ;
  }else{
    if(moyenne < 10){
      admission = false ;
    }else{
      if(compteur >= 2){
        admission = false ;
      }else{
        admission = true ;
      }
    }
  }

  //Indique à l'utilisateur si l'étudiant valide le module
  if(admission == true){
    cout << "Létudiant valide le module avec la moyenne de : " ;
    cout << moyenne << endl ;
  }else{
    cout << "L'étudiant ne valide pas le module" << endl ;
  }

}
