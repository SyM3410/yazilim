#include<iostream>

using namespace std;

int main(){
    double pi = 3.14;
    int r;
    double alan, cevre;
    cout << "Dairenin alanini ve cevresini bulmak icin yaricap degerini giriniz. Yaricap = r" << endl;
    cin >> r;
    alan = pi*r*r;
    cevre = 2*pi*r;
    cout << "Dairenin alani :" << alan << endl;
    cout << "Dairenin cevresi :" << cevre << endl;
    return 0;
}