#include<iostream>
#include <locale.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Turkish");
  string adi="Ahsen";
  int numara=400 ;
  cout <<"Adınınz: " << adi << "\n";
  cout <<"Numaranız: " << numara;
  }