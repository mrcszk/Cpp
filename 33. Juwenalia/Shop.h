//
// Created by marci on 11.05.2019.
//

#ifndef INC_33_JUWENALIA_SHOP_H
#define INC_33_JUWENALIA_SHOP_H

#include <iostream>
#include <random>

#include "Backpack.h"
#include "Student.h"
#include "Food.cpp"
#include "Eating/beer.cpp"
#include "Eating/cookies.cpp"
#include "Eating/crisps.cpp"
#include "Eating/orangeJuice.cpp"
#include "Eating/pepsi.cpp"
#include "Eating/plasticCups.cpp"
#include "Eating/sausages.cpp"
#include "Eating/vodka.cpp"
#include "Eating/water.cpp"
#include "Eating/wine.cpp"
using  namespace std;
class Shop {
public:
    vector<reference_wrapper<Food>> shop();
};


#endif //INC_33_JUWENALIA_SHOP_H
