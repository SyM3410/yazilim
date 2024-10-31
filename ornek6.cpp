#include <iostream>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL, "Turkish");
int x;
cout<<"Lutfen bir sayi giriniz X=";
cin>>x;
if(x>0) {
cout << "x degeri pozitiftir.";
} 
else if(x<0) {
cout << "x degeri negatiftir";
}
else {
cout << "x degeri Sifira esittir"; } 
}