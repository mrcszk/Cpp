//
// Created by marci on 24.03.2019.
//

#ifndef INC_18_KLASA_SQUARE_SQUARE_H
#define INC_18_KLASA_SQUARE_SQUARE_H
#include "Point.h"
#include <iostream>
using namespace std;
class Square {
public:
    Point point1;
    Point point2;
    Point point3;
    Point point4;

    Square(double x, double y, double d);
    double Circumference();
    double Area();
};
#endif //INC_18_KLASA_SQUARE_SQUARE_H
