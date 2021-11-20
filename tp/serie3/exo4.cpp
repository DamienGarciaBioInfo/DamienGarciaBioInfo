#include <iostream>
//#include <string>
using namespace std ;

int main(){
  struct date{
    int day ;
    int month ;
    int year ;
  };
  date birthday ;

  struct student{
    string surname ;
    string name ;
    date birthday ;
  };
  student s ;

  birthday = {26 , 2 , 1999} ;

  s = {"Garcia" , "Damien" , birthday} ;

  cout << s.birthday.month << endl ;

  return 0 ;
}
