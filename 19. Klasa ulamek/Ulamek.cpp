//
// Created by marci on 26.03.2019.
//
#include <iostream>
#include "Ulamek.h"
using namespace std;
void Ulamek::PobieranieLicznika() {
    cout << "Podaj licznik: ";
    cin >> licznik;
}


void Ulamek::PobieranieMianownika()  {
    cout << "Podaj mianownik: ";
    do{
    cin >>mianownik;
    if (mianownik == 0) cout << "Mianownik nie może się rownac 0!";
    }while(mianownik==0);
}
double Ulamek::Tworzenie1() {
    return licznik/mianownik;
}
void Ulamek::Tworzenie2() {
     cout << licznik << "/" << mianownik;
}