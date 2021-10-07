 // Task To print Datatypes and their size 
#include<iostream>

using namespace std ;

int main() 
{
   // Printing Value of Datatypes and their Value , size of variable and Size of Datatype Respectively
   cout<< "Character "<< endl ;
    char a = 'A' ;
  cout<< a << endl ;
  cout<< sizeof(a) << endl ;
  cout<< sizeof(char) << endl ;
  cout<< "Integer "<< endl ;
  int  b = 7867;
  cout<< b << endl ;
  cout<< sizeof(b) << endl ;
  cout<< sizeof(int) << endl ;
  cout<< "Float"<< endl ;
  float c = 7864.985 ;
  cout<< c << endl ;
  cout<< sizeof(c) << endl ;
  cout<< sizeof(float) << endl ;
  cout<< "Short"<< endl ;
    short d = 2002 ;
  cout<< d << endl ;
  cout<< sizeof(d) << endl ;
  cout<< sizeof(short) << endl ;
  cout<< "Long"<< endl ;
  long  e = 826522 ;
  cout<< e << endl ;
  cout<< sizeof(e) << endl ;
  cout<< sizeof(long) << endl ;
  cout<< "Long double"<< endl ;
  long double f = 8226522 ;
  cout<< f << endl ;
  cout<< sizeof(f) << endl ;
  cout<< sizeof(long double) << endl ;
  cout<< "Bool"<< endl ;
   bool h = true ;
  cout<< h << endl ; 
  cout<< sizeof(h) << endl ;
  cout<< sizeof(bool) << endl ;
  cout<< "Wide Char"<< endl ;
  wchar_t w  = L'A';
  cout<< w << endl ;
  cout<< sizeof(w) << endl ;
  cout<< sizeof(wchar_t) << endl ;
  return 0 ;
}
