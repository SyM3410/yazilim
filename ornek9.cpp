#include <iostream>

using namespace std;

int main(){
float x, y, z, ort;
cout<<"1. Vize notunuzu giriniz: ";
cin>>x;
cout<<"2. Vize notunuzu giriniz: ";
cin>>y;
cout<<"Final notunuzu giriniz: ";
cin>>z;
if(z>=50){
ort = ((x+y)/2*0.4+z*0.6);
if(ort>=0 && ort<50){
cout<<ort<<" ortalama notu ile kaldiniz. Dersi tekrar alacaksiniz.";
}
else if(ort>=50 && ort<=100){
cout<<ort<<" ortalama notu ile gectiniz. TEBRIKLER";
}}
else{
    cout << "Final notunuz 50 den dusuk oldugu icin kaldiniz...";
}

}