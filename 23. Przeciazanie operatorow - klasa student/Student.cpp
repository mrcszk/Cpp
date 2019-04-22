//
// Created by marci on 08.04.2019.
//

#include "Student.h"
Student::Student(){
    this->first_name = "";
    this->program = "";
    this->last_name = "";
}
Student::Student(string id, string first_name, string last_name, string program, StudyYear year):id(id),
first_name(first_name), last_name(last_name),program(program), year(year){
}
bool Student::operator==(Student tmp) {
    return tmp.id == id && tmp.first_name == first_name && tmp.last_name == last_name && tmp.program == program &&
               tmp.year == year;
}
istream& operator>>(istream & input, Student& p){
    cout << "Id:";
    input >> p.id;
    cout << "Imie:";
    input >> p.first_name;
    cout << endl << "Nazwisko:";
    input >> p.last_name;
    cout << endl << "Kierunek:";
    input >> p.program;
    cout << endl << "Rok:";
    input >> p.year;
    return input;
}
ostream& operator<<(ostream &out,const Student& p){
    out << "Student {id: "
        <<  p.id
        << ", first_name: "
        <<  p.first_name
        <<  ", last_name: "
        <<  p.last_name
        <<  ", program: "
        << p.program
        << ", year: "
        << p.year
        << "}";
    return out;
}