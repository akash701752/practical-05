 // Task To print Datatypes and their size 

#include<iostream>
#include<string>
using namespace std ;
void char_func()
{
  char a = 'A' ;
  cout<< a << endl ;
  cout<< sizeof(a) << endl ;
  cout<< sizeof(char) << endl ;
}
void int_fnc()
{
  int  a = 786 ;
  cout<< a << endl ;
  cout<< sizeof(a) << endl ;
  cout<< sizeof(int) << endl ;
}
void float_fnc()
{
  float a = 7864.985 ;
  cout<< a << endl ;
  cout<< sizeof(a) << endl ;
  cout<< sizeof(float) << endl ;
}
void short_func()
{
  short a = 2002 ;
  cout<< a << endl ;
  cout<< sizeof(a) << endl ;
  cout<< sizeof(short) << endl ;
}
void long_func()
{
  long  a = 826522 ;
  cout<< a << endl ;
  cout<< sizeof(a) << endl ;
  cout<< sizeof(long) << endl ;
}
void longdouble_func()
{
  long double a = 826522 ;
  cout<< a << endl ;
  cout<< sizeof(a) << endl ;
  cout<< sizeof(long double) << endl ;
}
void widechar_func()
{
  wchar_t  a = L '0' ;
  cout<< a << endl ;
  cout<< sizeof(a) << endl ;
  cout<< sizeof(wchar_t) << endl ;
}

int main() //Task 
{
  char_func();
  char_func();
  char_func();
  char_func();
  
  return 0 ;
}
