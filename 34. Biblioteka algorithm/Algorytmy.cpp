//
// Created by marci on 13.05.2019.
//

#include "Algorytmy.h"
int Algorytmy::Sum(const std::vector<int> &v){
    int sum = 0;
    for (int n : v)
        sum += n;
    return sum;
}
