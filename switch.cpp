#include<iostream>
using namespace std ;


enum Entheday  { Monday=1 , Tuseday=2 , Wednesday=3 , thurseday=4 , Friday=5 , Saturday=6, Sunday=7  };

int main()
{
cout << "Please enter number the day \n " ;

cout << "(1) Monday \n " ;
cout << "(2) Tuseday \n " ;
cout << "(3) Wednesday \n " ;
cout << "(4) Thursday \n " ;
cout << "(5) Friday \n " ;
cout << "(6) Saturday \n " ;
cout << "(7) Sunday \n " ;

cout << "********************" << endl;
cout << "what's Your choice \n " ;

int N_day;
cin>>N_day;
Entheday Numberday;
Numberday=(Entheday) N_day ;


switch (Numberday) {

case Entheday::Monday:
cout << "It's Monday " ;
break;

case Entheday::Tuseday:
cout <<"It's Tusday ";
break;

case Entheday::Wednesday:
cout << "It's Wednesday";
break;

case Entheday::thurseday:
cout << "It's Thurseday";
break;

case Entheday::Friday :
cout << "It's friday ";
break;

case Entheday::Saturday:
cout << "It's saturday ";
break;

case Entheday::Sunday:
cout << "It's sunday ";
break;

default :
cout << " mistake, try again " ;
break; 

}

return 0;


}