#include <iostream>
#include "Square.h"
int main() {
    Square square(0,0,4);
    cout << "Obwod: " << square.Circumference() << endl;
    cout << "Pole: " << square.Area() << endl;
    return 0;
}