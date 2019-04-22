//
// Created by marci on 19.04.2019.
//

#include "FillingVector.h"
FillingVector::FillingVector(int howMany) {
    for(int i=0;i<howMany;i++){
        vec.push_back(0);
    }
}
void FillingVector::UniformFill(int value = 1){
    for(auto &n : vec) {
        n = value;
    }
}

void FillingVector::IncrementalFill(int start, int step){
    int value = start;
    for(auto &n : vec) {
        n = value;
        value += step;
    }
}
void FillingVector::RandomFill(int from, int to) {
    srand(time(NULL));
    for (auto &n : vec) {
        n = (std::rand() % (to - from)) + from;
    }
}


void FillingVector::SquaredFill(int a, int b){
    int i=1;
    for(auto &n : vec) {
        n = a*i*i + b;
        i++;
    }
}

std::ostream &operator<<(std::ostream &output, FillingVector &tmp){
    bool first = true;
    for(auto &n : tmp.vec) {
        if(!first) output << ", ";
        output << n;
        first = false;
    }
    output << endl;
    return output;
}