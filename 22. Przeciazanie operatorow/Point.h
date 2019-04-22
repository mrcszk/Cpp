//
// Created by marci on 09.04.2019.
//

#ifndef INC_22_PRZECIAZANIE_OPERATOROW_POINT_H
#define INC_22_PRZECIAZANIE_OPERATOROW_POINT_H

#include <iostream>
#include <ostream>
#include <string>
class Point {
public:

  //  ...
    void SetX(double x);
    void SetY(double y);
    std::string GetX();
    std::string GetY();
    //opcjonalna definicja pozwalająca na uzyskanie
    //dostępu do prywatnych pól z wewnątrz definicji
    //funkcji zadeklarowanej poniżej
    friend std::istream& operator>>(std::istream &, Point&);
    friend std::ostream& operator<<(std::ostream &, Point&);

//    ...

private:
    double x_, y_;
};

//właściwa deklaracja, przeciążająca
//operator >> dla strumienia wejściowego
//i klasy punkt
std::istream& operator>>(std::istream &is, Point& point);
std::ostream& operator<<(std::ostream &out,Point& point);
#endif