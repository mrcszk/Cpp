//
// Created by marci on 02.04.2019.
//

#include "Parent.h"
#include "Child.h"
using namespace std;
void Parent::przepiszDoInnejSzkoly(string szkola){
    kid.school = szkola;
}
Child Parent::przepiszDoInnejSzkoly2(string szkola, Child tmp){
    tmp.school = szkola;
    return tmp;
}
Parent::Parent () = default;
Parent ::Parent(string name_parent, string surname_parent, int age_parent, string name_child, string surname_child,
        int age_child, string school):name(name_parent), surname(surname_parent),age(age_parent){
    kid.name = name_child;
    kid.surname = surname_child;
    kid.age = age_child;
    kid.school = school;
}
void Parent::print_parent(){
    cout << "Imie: "<< name << endl;
    cout << "Nazwisko: " << surname << endl;
    cout << "Wiek: "<< age << endl;
    cout << "Imie dziecka: "<< kid.name << endl;
    cout << "Nazwisko dziecka: " << kid.surname << endl;
    cout << "Wiek dziecka: "<< kid.age << endl;
    cout << "Szkola dziecka: " << kid.school << endl;
}