//
// Created by marci on 09.04.2019.
//

#ifndef INC_24_PRZECIAZANIE_KLASA_COMPLEX_COMPLEX_H
#define INC_24_PRZECIAZANIE_KLASA_COMPLEX_COMPLEX_H

#include <iostream>
using namespace std;
class Complex {
public:
    double real;
    double img;
    Complex();
    Complex(double, double);
    Complex operator+(Complex p);
    Complex operator-(Complex p);
    Complex operator*(Complex p);
    Complex operator/(Complex p);
    friend istream& operator>>(istream &in, Complex&tmp);
    friend ostream& operator<<(ostream &out, Complex&tmp);
};


istream& operator>>(istream &in, Complex&tmp);
ostream& operator<<(ostream &out, Complex&tmp);


#endif //INC_24_PRZECIAZANIE_KLASA_COMPLEX_COMPLEX_H
