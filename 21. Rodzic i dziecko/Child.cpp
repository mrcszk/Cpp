//
// Created by marci on 02.04.2019.
//

#include "Child.h"
Child::Child() = default;
Child::Child(string name1, string surname1, int age1, string school1) {
    name = name1;
    surname = surname1;
    age = age1;
    school = school1;
}

void Child::print_child(){
    cout << "Imie: "<< name << endl;
    cout << "Nazwisko: " << surname << endl;
    cout << "Wiek: "<< age << endl;
    cout << "Szkola: "<< school << endl;

}
void Child::przepiszDoInnejSzkoly_dziecko(string szkola){
    school = szkola;
}