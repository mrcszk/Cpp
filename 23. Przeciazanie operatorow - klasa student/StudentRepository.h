//
// Created by marci on 08.04.2019.
//

#ifndef INC_23_PRZECIAZANIE_OPERATOROW_KLASA_STUDENT_STUDENTREPOSITORY_H
#define INC_23_PRZECIAZANIE_OPERATOROW_KLASA_STUDENT_STUDENTREPOSITORY_H
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
class StudentRepository {
    public:
        vector<Student> repo;
        StudentRepository();

        void add(Student newS);
        bool operator==(StudentRepository &tmp);
        Student operator[](string id);

};

std::istream& operator>>(std::istream &is, StudentRepository& point);
std::ostream& operator<<(std::ostream &out,  StudentRepository& point);

#endif //INC_23_PRZECIAZANIE_OPERATOROW_KLASA_STUDENT_STUDENTREPOSITORY_H
