#include <iostream>

using namespace std;

int main(){
int x;
cout<<"Bir sayi giriniz: ";
cin>>x;
//eger || olursa birisinin dogru olmasi yeterli
if(x%5==0 && x%7==0 || x%70==0){
cout<< x << " Sayisi 5 ve 7'ye kalansiz BOLUNUR... ";
}
else{
cout<< x << " Sayisi 5 ve 7'ye kalansiz BOLUNMEZ...";
}
}