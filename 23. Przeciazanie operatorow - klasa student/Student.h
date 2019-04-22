//
// Created by marci on 08.04.2019.
//

#ifndef INC_23_PRZECIAZANIE_OPERATOROW_KLASA_STUDENT_STUDENT_H
#define INC_23_PRZECIAZANIE_OPERATOROW_KLASA_STUDENT_STUDENT_H

#include "StudyYear.h"
#include <string>
#include <iostream>
using namespace std;
class Student {
public:
    string id;
    string first_name;
    string last_name;
    string program;
    StudyYear year;
    friend istream& operator>>(istream &is, Student& p);
    friend std::ostream& operator<<(std::ostream &out,  Student const& p);
    bool operator==(Student tmp);
public:
    Student();
    Student(string, string,string,string,StudyYear);


};

std::istream& operator>>(std::istream &is, Student& p);
std::ostream& operator<<(std::ostream &out,  Student const& p);


#endif //INC_23_PRZECIAZANIE_OPERATOROW_KLASA_STUDENT_STUDENT_H
