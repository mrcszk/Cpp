#include <iostream>
#include "Student.h"
using namespace std;
int main() {
    try{
        Student student("Marcin","Kowalski%", 20, "informatka");
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
    return 0;
}