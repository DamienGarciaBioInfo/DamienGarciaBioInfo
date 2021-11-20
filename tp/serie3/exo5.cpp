#include <iostream>
using namespace std ;

//Fonction qui affiche toutes les éléments de la structure non vide.
void afficher(){
  for(int i = 0 ; i <= 9 ; i++){
    cout  << "Nom : " << annuaire[i].surname << "     "
          << "Prénom : " << annuaire[i].name    << "     "
          << "Age : " << annuaire[i].age     << "     "
          << "N° etu : " << annuaire[i].nbstu   << endl ;
  }
}

void rechercher(){

}

void modifier(){

}

int main(){

  //Création de la structure
  struct student{
    string surname ;
    string name ;
    int age ;
    string nbstu ;
  };
  student s ;

  student annuaire[100] = {0} ;

  //Données déjà présentes dans la structure pour exemple
  annuaire[0] = {"a","A",0,"a"} ;
  annuaire[1] = {"b","B",1,"b"} ;
  annuaire[2] = {"c","C",2,"c"} ;
  annuaire[3] = {"d","D",3,"d"} ;
  annuaire[4] = {"e","E",4,"e"} ;
  annuaire[5] = {"f","F",5,"f"} ;
  annuaire[6] = {"g","G",6,"g"} ;
  annuaire[7] = {"h","H",7,"h"} ;
  annuaire[8] = {"i","I",8,"i"} ;
  annuaire[9] = {"j","J",9,"j"} ;



  return 0 ;
}
