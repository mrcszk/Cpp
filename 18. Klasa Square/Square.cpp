#include <memory>
#include <vector>
#include <iostream>
#include <sstream>
#include "Square.h"

Square::Square(double x, double y, double d){
    point1.Point::SetX(x);
    point1.Point::SetY(y+d);
    point2.Point::SetX(x+d);
    point2.Point::SetY(y+d);
    point3.Point::SetX(x+d);
    point3.Point::SetY(y);
    point4.Point::SetX(x);
    point4.Point::SetY(y);


}
double Square::Circumference() {
    double L;
    L = 4*point1.Distance(point2);
    return L;
}

double Square::Area() {
    double P;
    P = point2.Distance(point3)*point1.Distance(point2);
    return P;
}