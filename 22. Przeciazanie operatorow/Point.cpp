//
// Created by marci on 09.04.2019.
//


#include "Point.h"
#include <iomanip>
#include <iostream>

using ::std::istream;
using ::std::ws;

//Helper functions:
void CheckNextChar(char c, istream* is) {
    int next_char = is->peek();
    if (next_char != c) {
        throw std::runtime_error("invalid character");
    }
    is->ignore();
}

void IgnoreWhitespace(istream* is) {
    (*is) >> ws;
}

double ReadNumber(istream* is) {
    double d;
    (*is) >> d;
    return d;
}
void Point::SetX(double x){
    x_ = x;
}
void Point::SetY(double y){
    y_ = y;
}
std::string Point::GetX(){
    return std::to_string(x_);
}
std::string Point::GetY() {
    return std::to_string(y_);
}


// Właściwa definicja, obydwa argumenty funkcji nie
//są zadeklarowane jako const, bo obydwa są modyfikowane
//wewnątrz funkcji (STL nie używa naszej konwencji z przekazywaniem
//przez wskaźnik)
istream& operator>>(istream & input, Point& p){
    CheckNextChar('(', &input);
    p.SetX(ReadNumber(&input));
    CheckNextChar(',', &input);
    IgnoreWhitespace(&input);
    p.SetY(ReadNumber(&input));
    CheckNextChar(')', &input);
    return input;      // Umożliwia cin >> a >> b >> c;
}
std::ostream& operator<<(std::ostream &out,Point& p){
    std::string output ;
    output += "(";
    output += p.GetX();
    output += ",";
    output += p.GetY();
    output += ")";
    return out << output;
}