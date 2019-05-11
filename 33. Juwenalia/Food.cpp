//
// Created by marci on 07.05.2019.
//

#ifndef INC_33_JUWENALIA_FOOD_H
#define INC_33_JUWENALIA_FOOD_H

#include <string>
#include <iostream>
using namespace std;
class Food {
public:
    double price = 0;
    double percent = 0;
    double volume = 0;
    virtual string getFood() = 0;
    virtual ~Food() = default;
};


#endif //INC_33_JUWENALIA_FOOD_H
