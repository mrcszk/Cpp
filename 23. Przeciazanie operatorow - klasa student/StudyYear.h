//
// Created by marci on 08.04.2019.
//

#ifndef INC_23_PRZECIAZANIE_OPERATOROW_KLASA_STUDENT_STUDYYEAR_H
#define INC_23_PRZECIAZANIE_OPERATOROW_KLASA_STUDENT_STUDYYEAR_H

#include <string>
#include <iostream>
using namespace std;
class StudyYear {
    int year;
public:
    friend class Student;
    StudyYear();
    StudyYear(int year);
    void operator++(int);
    void operator--(int);
    bool operator== (StudyYear tmp);
    bool operator< (StudyYear tmp);
    operator int();
    friend std::istream& operator>>(std::istream &is, StudyYear& point);
    friend std::ostream& operator<<(std::ostream &out, const StudyYear& point);
};

std::istream& operator>>(std::istream &is, StudyYear& point);
std::ostream& operator<<(std::ostream &out, const StudyYear& point);
#endif //INC_23_PRZECIAZANIE_OPERATOROW_KLASA_STUDENT_STUDYYEAR_H
