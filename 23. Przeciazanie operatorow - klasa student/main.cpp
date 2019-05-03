#include <iostream>
#include "StudyYear.h"
#include "Student.h"
#include "StudentRepository.h"

int main() {
    StudyYear a(3),g(4);
    Student b;
    StudentRepository c;
//    cout << a << endl;
//    a++;
//    cout << a << endl;
//    c.add(b);
//    c.add(e);
//    d.add(b);
//    d.add(e);
//    int x;
//    a++;
//    x = (int)a;
//    cout << x << endl;
//    cout <<c << endl;
//    cout <<c["Aa"]<< endl;
//    if(a<g) cout << "A";
//    else cout << "B";

//    try{
//        Student student("Marcin","Kowalski%", 20, "informatka");
//        cout << "Student poprawny." << endl;
//    }catch(InvalidNameSurname){
//        cout << "Zle zapisano imie lub nazwisko" << endl;
//    }catch(InvalidNameCharacters){
//        cout << "W imieniu podano zle znaki." << endl;
//    }catch(InvalidAge){
//        cout << "Podano zly wiek." << endl;
//    }
//    catch(InvalidProgram){
//        cout << "Podano zly kierunek." << endl;
//    }catch(...){
//        cout << "Inny blad" << endl;
//    }
//    try{
//        Student student("Marcin%","Kowalski%", 20, "informatyka");
//        cout << "Student poprawny." << endl;
//    }catch(InvalidNameSurname){
//        cout << "Zle zapisano imie lub nazwisko" << endl;
//    }catch(InvalidNameCharacters){
//        cout << "W imieniu podano zle znaki." << endl;
//    }catch(InvalidAge){
//        cout << "Podano zly wiek." << endl;
//    }
//    catch(InvalidProgram){
//        cout << "Podano zly kierunek." << endl;
//    }catch(...){
//        cout << "Inny blad" << endl;
//    }
//    try{
//        Student student("Marcin","KowAlski%", 20, "informatyka");
//        cout << "Student poprawny." << endl;
//    }catch(InvalidNameSurname){
//        cout << "Zle zapisano imie lub nazwisko" << endl;
//    }catch(InvalidNameCharacters){
//        cout << "W imieniu podano zle znaki." << endl;
//    }catch(InvalidAge){
//        cout << "Podano zly wiek." << endl;
//    }
//    catch(InvalidProgram){
//        cout << "Podano zly kierunek." << endl;
//    }catch(...){
//        cout << "Inny blad" << endl;
//    }
//    try{
//        Student student("Marcin","Kowalski%", 120, "informatyka");
//        cout << "Student poprawny." << endl;
//    }catch(InvalidNameSurname){
//        cout << "Zle zapisano imie lub nazwisko" << endl;
//    }catch(InvalidNameCharacters){
//        cout << "W imieniu podano zle znaki." << endl;
//    }catch(InvalidAge){
//        cout << "Podano zly wiek." << endl;
//    }
//    catch(InvalidProgram){
//        cout << "Podano zly kierunek." << endl;
//    }catch(...){
//        cout << "Inny blad" << endl;
//    }
    int i=1;
    while(i<=2) {
        try{
            cin >> b;
            b.checkValid();
            c.add(b);
            i++;
            cout << "Student poprawny." << endl;
    }catch(InvalidNameSurname){
        cout << "Zle zapisano imie lub nazwisko" << endl;
    }catch(InvalidNameCharacters){
        cout << "W imieniu podano zle znaki." << endl;
    }catch(InvalidAge){
        cout << "Podano zly wiek." << endl;
    }
    catch(InvalidProgram){
        cout << "Podano zly kierunek." << endl;
    }catch(...){
        cout << "Inny blad" << endl;
    }
    }
    cout << c;
    return 0;
}