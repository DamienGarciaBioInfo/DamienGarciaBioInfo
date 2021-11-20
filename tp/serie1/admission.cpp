//Serie 1 - Exercice 1

#include <iostream>
using namespace std ;

float note1 , note2 , note3 ;
float moyenne ;
bool validation ;
int eliminatoire ;

int main(){
  //Saisies par l'utilisateur
  cout  << "Indiquez les 3 notes obtenues au module : " << endl ;
  cin   >> note1 >> note2 >> note3 ;

  //Calcul de la moyenne
  moyenne = (note1 + note2 +note3) / 3 ;

  //Compteur de notes inférieurs strictement à 7.5
  eliminatoire = 0 ;
  if(note1 < 7.5){
    eliminatoire += 1 ;
  }
  if(note2 < 7.5){
    eliminatoire += 1 ;
  }
  if(note3 < 7.5){
    eliminatoire += 1 ;
  }

  //Vérification de la validation ou non
  if(note1 < 6 || note2 < 6 || note3 < 6){
    validation = false ;
  }else{
    if(eliminatoire >= 2){
      validation = false ;
    }else{
      if(moyenne < 10){
        validation = false ;
      }else{
        validation = true ;
      }
    }
  }

  if(validation == true){
    cout << "L'étudiant est admis au module." << endl ;
  }else{
    cout << "L'étudiant n'est pas admis au module." << endl ;
  }

  return 0 ;
}
