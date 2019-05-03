//
// Created by marci on 27.04.2019.
//

#ifndef INC_31_STUDENT_STUDENT_H
#define INC_31_STUDENT_STUDENT_H

#include <iostream>
#include <string>
using namespace std;
class InvalidNameSurname{};
class InvalidNameCharacters{};
class InvalidAge{};
class InvalidProgram{};
class Student {
    string name;
    string surname;
    int age;
    string studies;
    void checkValid();
public:
    Student(string name, string surname, int age, string studies);
};


#endif //INC_31_STUDENT_STUDENT_H
