//
// Created by marci on 27.04.2019.
//

#ifndef INC_30_PESEL_PESEL_H
#define INC_30_PESEL_PESEL_H

#include <iostream>
#include <string>
using namespace std;
class wrongPeselLength{};
class wrongPeselNumbers{};
class wrongPeselSum{};
class PESEL{
    string pesel;
public:
    PESEL();
    explicit PESEL(string pesel);
    void validatePESEL(string pesel);
};


#endif //INC_30_PESEL_PESEL_H
