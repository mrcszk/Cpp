//
// Created by marci on 27.04.2019.
//

#include "Student.h"
Student::Student(string name, string surname, int age, string studies):name(name),surname(surname),age(age),studies(studies){checkValid();}
void Student::checkValid() {
    if(!(this->name[0]>=65 && this->name[0]<=90)) throw InvalidNameSurname();
    for(int i=1;i<this->name.length();i++){
        if(!(this->name[i]>=97 && this->name[i]<=122)) {
            if(this->name[i]>=65 && this->name[i]<=90) throw InvalidNameSurname();
            else{
                throw InvalidNameCharacters();
            }
        }
    }
    if(!(this->surname[0]>=65 && this->surname[0]<=90)) throw InvalidNameSurname();
    for(int i=1;i<this->surname.length();i++){
        if(this->surname[i]>=65 && this->surname[i]<=90)throw InvalidNameSurname();
    }

    if(!(this->age>=10 && this->age<=100))throw InvalidAge();

    if(!(this->studies=="informatyka" ||  this->studies=="ekonomia" || this->studies=="matematyka" ||
        this->studies=="fizyka" || this->studies=="filozofia"))
            throw InvalidProgram();
}

