//
// Created by marci on 16.04.2019.
//

#include "Kolo.h"
Kolo::Kolo (double x, double y, double r):x(x),y(y),r(r){}

double Kolo::pole() {
    return r*r* 3.1415;
}