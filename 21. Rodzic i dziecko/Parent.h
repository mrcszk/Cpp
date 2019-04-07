//
// Created by marci on 02.04.2019.
//

#ifndef INC_21_RODZIC_I_DZIECKO_PARENT_H
#define INC_21_RODZIC_I_DZIECKO_PARENT_H
#include <iostream>
#include "Child.h"
using namespace std;

class Parent {
public:
    string name;
    string surname;
    int age;
    Child kid;
    Parent();
    Parent ::Parent(string name_parent, string surname_parent, int age_parent, string name_child, string surname_child,
                    int age_child, string school);
    void przepiszDoInnejSzkoly(string szkola);
    Child przepiszDoInnejSzkoly2(string szkola, Child tmp);
    void print_parent();
};

#endif //INC_21_RODZIC_I_DZIECKO_PARENT_H
