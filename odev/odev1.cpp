#include<iostream>

using namespace std;
int main(){
    int kisakenar, uzunkenar,alan;
    cout << "Dikdortgenin alanini bulmak icin kenar uzunluklarini giriniz." << endl;
    cout << "Lutfen uzun kenari giriniz" << endl;
    cin >> uzunkenar;
    cout << "Lutfen kisa kenari giriniz" << endl;
    cin >> kisakenar;
    alan = kisakenar*uzunkenar;
    cout << "Dikdortgenin alani : " << alan << endl;
    return 0;
}