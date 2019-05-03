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
Student::Student(string first_name, string last_name, int age, string program):first_name(first_name),
last_name(last_name), age(age),program(program){
    checkValid();
}
bool Student::operator==(Student tmp) {
    return tmp.id == id && tmp.first_name == first_name && tmp.last_name == last_name && tmp.program == program &&
               tmp.year == year;
}
//istream& operator>>(istream & input, Student& p){
//    cout << "Id:";
//    input >> p.id;
//    cout << "Imie:";
//    input >> p.first_name;
//    cout << endl << "Nazwisko:";
//    input >> p.last_name;
//    cout << endl << "Kierunek:";
//    input >> p.program;
//    cout << endl << "Rok:";
//    input >> p.year;
//    return input;
//}
istream& operator>>(istream & input, Student& p){
    cout << "Imie:";
    input >> p.first_name;
    cout << endl << "Nazwisko:";
    input >> p.last_name;
    cout << endl << "Wiek:";
    input >> p.age;
    cout << endl << "Kierunek:";
    input >> p.program;

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

void Student::checkValid() {
    if(!(this->first_name[0]>=65 && this->first_name[0]<=90)) throw InvalidNameSurname();
    for(int i=1;i<this->first_name.length();i++){
        if(!(this->first_name[i]>=97 && this->first_name[i]<=122)) {
            if(this->first_name[i]>=65 && this->first_name[i]<=90) throw InvalidNameSurname();
            else{
                throw InvalidNameCharacters();
            }
        }
    }
    if(!(this->last_name[0]>=65 && this->last_name[0]<=90)) throw InvalidNameSurname();
    for(int i=1;i<this->last_name.length();i++){
        if(this->last_name[i]>=65 && this->last_name[i]<=90)throw InvalidNameSurname();
    }
    if(!(this->age>=10 && this->age<=100))throw InvalidAge();

    if(!(this->program=="informatyka" ||  this->program=="ekonomia" || this->program=="matematyka" ||
         this->program=="fizyka" || this->program=="filozofia"))
        throw InvalidProgram();
}