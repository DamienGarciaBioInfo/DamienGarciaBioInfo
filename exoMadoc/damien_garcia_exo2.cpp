//Algorithme Facture_operateur_téléphonique
//Damien GARCIA - M1BB - Exercice 2

using namespace std ;

string numClient ;
char service ;
int tpsAppel , tpsAppelJour , tpsAppelNuit ;
float tarif ;

int main(){
  //Saisies du numéro de client
  cout  << "Quel est votre numéro de client ?" << endl << "N° client --> " ;
  cin   >> numClient ;

  //Saisie du service du client
  service = ' ' ;
  while(service != 'r' && service != 'R' && service != 'p' && service && 'P'){
    cout  << "Quel service utilisez-vous ?" << endl
          << "Classique --> entrez le caractère r ou R" << endl
          << "Premium   --> entrez le caractère p ou P" << endl
          << "Service   --> " ;
    cin   >> service ;
    if(service != 'r' && service != 'R' && service != 'p' && service && 'P'){
      cout << "Vous n'avez pas entré une valeur correcte pour le choix de votre service." ;
    }
  }

  //Saisie du temps d'appel
  if(service == 'r' || service == 'R'){
    cout  << "Entrez la durée totale des appels téléphoniques en minutes --> " ;
    cin   >> tpsAppel ;
  }else{
    cout  << "Entrez la durée totale des appels téléphoniques entre 6h et 18h en minutes --> " ;
    cin   >> tpsAppelJour ;
    cout  << "Entrez la durée totale des appels téléphoniques entre 18h et 6h en minutes --> " ;
    cin   >> tpsAppelNuit ;
    tpsAppel = tpsAppelJour + tpsAppelNuit ;
  }
  //Il est possible d'utiliser moins de variables.
  //Cette méthode me semble cependant plus lisible dans le cadre de l'exercice.

  //Calcul du tarif
  if(service == 'r' || service == 'R'){
    tarif = 10 ;
    //Calcul du hors forfait
    if(tpsAppel > 50){
      tarif = tarif + (tpsAppel - 50) * 0.20 ;
    }
  }else{
    if(service == 'p' || service == 'P'){
      tarif = 25 ;
      //Calcul du hors forfait
      if(tpsAppelJour > 75){
        tarif = tarif + (tpsAppelJour - 75) * 0.10 ;
      }
      if(tpsAppelNuit > 100){
        tarif = tarif + (tpsAppelNuit - 100) * 0.05 ;
      }
    }
  }

  //Affichage des informations
  cout << endl << "Numéro de client --> " << numClient << endl ;
  if(service == 'r' || service == 'R'){
    cout << "Service classique." << endl ;
  }else{
    cout << "Service premium." << endl ;
  }
  cout << "Vous avez passé " << tpsAppel << " minutes en appel." << endl ;
  cout << "Vous devez payer " << tarif << "€." << endl ;

  return 0 ;
}
