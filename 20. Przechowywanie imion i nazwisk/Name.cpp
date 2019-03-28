//
// Created by marci on 27.03.2019.
//

#include "Name.h"
using namespace model;

Name::Name(const string &first_names_surname) {
    int i = 0;
    while (first_names_surname[i] != ',') {
        first_name_ += first_names_surname[i];
        i++;
    }
    i++;
    while (first_names_surname[i] != ',') {
        second_name_ += first_names_surname[i];
        i++;
    }
    i++;
    while (first_names_surname[i] != ',') {
        third_name_ += first_names_surname[i];
        i++;
    }
    i++;
    while (first_names_surname[i] != '\0') {
        last_name_ += first_names_surname[i];
        i++;
    }
}
string Name::FirstName() const {
    return first_name_;
}
string Name::SecondName() const {
    return second_name_;
}
string Name::ThirdName() const {
    return third_name_;
}
string Name::Surname() const {
    return last_name_;
}

string Name::ToFullInitials() const {
    string fullInitials;
    fullInitials += first_name_[0];
    fullInitials += '.';
    if(second_name_.length() > 0){
    fullInitials += second_name_[0];
    fullInitials += '.';}
    if(third_name_.length() > 0){
    fullInitials += third_name_[0];
    fullInitials += '.';}
    fullInitials += last_name_[0];
    fullInitials += '.';
    return fullInitials;
}

string Name::ToFirstNamesInitials() const {
    string fullNamesInitials;
    fullNamesInitials += first_name_[0];
    fullNamesInitials += '.';
    if(second_name_.length() > 0){
    fullNamesInitials += second_name_[0];
    fullNamesInitials += '.';}
    if(third_name_.length() > 0){
    fullNamesInitials += third_name_[0];
    fullNamesInitials += '.';}
    fullNamesInitials += last_name_;
    return fullNamesInitials;
}

string Name::ToSurnameNames() const {
    string surnameNames;
    surnameNames += last_name_;
    surnameNames += ' ';
    surnameNames += first_name_;
    surnameNames += ' ';
    if(second_name_.length() > 0){
    surnameNames += second_name_;
    surnameNames += ' ';}
    if(third_name_.length() > 0)
    surnameNames += third_name_;


    return surnameNames;
}
string Name::ToNamesSurname() const {
    string namesSurname;
    namesSurname += first_name_;
    if(second_name_.length() > 0){
    namesSurname += ' ';
    namesSurname += second_name_;}
    if(third_name_.length() > 0){
    namesSurname += ' ';
    namesSurname += third_name_;}
    namesSurname += ' ';
    namesSurname += last_name_;


    return namesSurname;
}
bool Name::IsBeforeBySurname(const model::Name &other) const {
    return last_name_ < other.last_name_ ;
}
bool Name::IsBeforeByFirstName(const model::Name &other) const {
    return first_name_ < other.first_name_ ;
}