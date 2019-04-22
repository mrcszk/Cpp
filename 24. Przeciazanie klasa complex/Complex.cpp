//
// Created by marci on 09.04.2019.
//

#include "Complex.h"
Complex::Complex() = default;
Complex::Complex(double real, double img){
    this->real = real;
    this->img = img;
}
Complex Complex::operator+(Complex p){
 real = real + p.real;
 img = img + p.img;
 Complex tmp(real,img);
 return tmp;
}
Complex Complex::operator-(Complex p){
    real = real - p.real;
    img = img - p.img;
    Complex tmp(real,img);
    return tmp;
}
Complex Complex::operator*(Complex p){
    real = real*p.real - img*p.img;
    img = real*p.img + img*p.real;
    Complex tmp(real,img);
    return tmp;
}
Complex Complex::operator/(Complex p){
    real = (real*p.real + img*p.img) / (p.real*p.real +p.img*p.img);
    img = (real*p.img - img*p.real)/ (p.real*p.real +p.img*p.img);
    Complex tmp(real,img);
    return tmp;
}
istream& operator>>(istream &in, Complex&tmp){
    char a;
    in >> tmp.real;
    in >> a;
    in >> tmp.img;
    return in;


}
ostream& operator<<(ostream &out, Complex&tmp){
    if (tmp.img >=0)
        return out << tmp.real <<"+"<< tmp.img <<"i" << endl;
    else
        return out << tmp.real << tmp.img <<"i" << endl;
}
