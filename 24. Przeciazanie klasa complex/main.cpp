#include <iostream>
#include "Complex.h"
int main() {
Complex a,b(2,2),c(3,3);

    a = b + c;
    cout << a;
    a = b - c;
    cout << a;
    a = b * c;
    cout << a;
    a = b / c;
    cout << a;
    cin >> a;
    cout << a;


    return 0;
}