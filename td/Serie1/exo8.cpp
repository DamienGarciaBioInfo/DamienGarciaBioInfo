#include <iostream>

using namespace std ;

//Algorithme qui détermine si la valeur de pH d'une eau est acide/neutre/basique

double pH ;

int main()
{
  cout  << "Indiquez la valeur de pH de la solution --> " ;
  cin   >> pH ;

  if(pH < 0 || pH > 14){
    cout << "Le pH indiqué doit être comprit entre 0 et 14 !" << endl ;
  }else{
    if(pH < 7 && pH >= 0){
      cout << "pH acide" << endl ;
    }else{
      if(pH == 7){
        cout << "pH neutre" << endl ;
      }else{
        cout << "pH basique" << endl ;
      }
    }
  }
}
