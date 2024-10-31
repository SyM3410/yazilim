#include <iostream>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL, "Turkish");
int x;
cout<<"Lutfen bir sayi giriniz X=";
cin>>x;
if(x>0) {
cout << "X degeri pozitiftir.";
} 
else {
cout << "X degeri negatiftir";
}
}