//
// Created by marci on 16.04.2019.
//

#ifndef INC_25_KOLO_I_KULA_KULA_H
#define INC_25_KOLO_I_KULA_KULA_H
#include "Kolo.h"
#include <iostream>

class Kula : public Kolo{
public:
    double z;
    Kula(double x, double y, double z, double r) : Kolo (x,y,r){
        this->z = z;
    }
    double pole(){return 4* r*r* 3.1415;}
};


#endif //INC_25_KOLO_I_KULA_KULA_H
