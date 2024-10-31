#include <iostream>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL, "Turkish");
int x = 10;
if(x==10) {
cout << "x degeri 10'dur.";
} 
else 
{
cout << "x degeri 10 degildir.";
}
}