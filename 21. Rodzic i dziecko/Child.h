//
// Created by marci on 02.04.2019.
//

#ifndef INC_21_RODZIC_I_DZIECKO_CHILD_H
#define INC_21_RODZIC_I_DZIECKO_CHILD_H
#include <iostream>

#include <string>
using namespace std;
class Parent;

class Child{
public:
    //friend class Parent;
    string name;
    string surname;
    int age;
    string school;

    Child();
    Child(string name_child, string surname_child, int age_child, string school1);
    void print_child();
    void przepiszDoInnejSzkoly_dziecko(string szkola);
};


#endif //INC_21_RODZIC_I_DZIECKO_CHILD_H
