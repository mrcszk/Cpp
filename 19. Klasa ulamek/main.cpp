#include <iostream>
#include "Ulamek.h"
using  namespace std;
int main() {
    Ulamek ulamek1;
    ulamek1.PobieranieLicznika();
    ulamek1.PobieranieMianownika();
    cout << "Twoj ulamek " << ulamek1.Tworzenie1() << " " ;
    ulamek1.Tworzenie2() ;
    return 0;
}