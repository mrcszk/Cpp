//
// Created by marci on 19.04.2019.
//

#ifndef INC_27_METODY_WYPELNIENIA_TABLICY_FILLINGVECTOR_H
#define INC_27_METODY_WYPELNIENIA_TABLICY_FILLINGVECTOR_H
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class FillingVector {
public:
    vector<int> vec;

    FillingVector(int howMany);

    void UniformFill(int value);
    void IncrementalFill(int start, int step = 1);
    void SquaredFill(int a = 1, int b = 0);
    void RandomFill(int from, int to);



};
std::ostream& operator<<(std::ostream &out,  FillingVector& tmp);

#endif //INC_27_METODY_WYPELNIENIA_TABLICY_FILLINGVECTOR_H
