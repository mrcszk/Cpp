#include <iostream>
#include "FillingVector.h"
int main() {
    FillingVector a(15);
    cout << a;
    a.UniformFill(4);
    cout << a;
    a.IncrementalFill(3,6);
    cout << a;
    a.SquaredFill(3,2);
    cout << a;
    a.RandomFill(3,100);
    cout << a;
    return 0;
}