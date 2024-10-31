#include <iostream>

using namespace std;

int main() {
int n;
cout << "Lutfen bir sayi giriniz: ";
cin >> n;
if ( n % 2 == 0){
cout << n << " SAYISI CIFTIR";
}
else{
cout << n << " SAYISI TEKDIR";
}
return 0;
}