//
// Created by marci on 07.05.2019.
//

#ifndef INC_33_JUWENALIA_BACKPACK_H
#define INC_33_JUWENALIA_BACKPACK_H

#include "Food.cpp"
#include "Eating/orangeJuice.cpp"
#include <iostream>
#include <vector>
using  namespace std;
class Backpack {
public:
    vector<reference_wrapper<Food>> food;
    double budget = 70;
    double const maxLevel = 3;
    double currentLevel = 0;
    double weight = 70;
    double water = 0.7;
    Backpack() = default;
    void add(Food *feed);
    void print();
};


#endif //INC_33_JUWENALIA_BACKPACK_H
