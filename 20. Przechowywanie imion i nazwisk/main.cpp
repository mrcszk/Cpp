#include <iostream>
#include "Name.h"
using  namespace model;
int main() {
    Name jeden("Marcin,Mateusz,,Sawczuk");
    Name dwa("Adam,Lukasz,,Sbwczuk");
    cout << jeden.ToFullInitials() << endl;
    cout << jeden.FirstName() << endl;
    cout << jeden.SecondName() << endl;
    cout << jeden.ThirdName() << endl;
    cout << jeden.Surname() << endl;
    cout << jeden.ToFirstNamesInitials() << endl;
    cout << jeden.ToSurnameNames() << endl;
    cout << jeden.ToNamesSurname() << endl;
    cout << jeden.IsBeforeBySurname(dwa) << endl;
    cout << jeden.IsBeforeByFirstName(dwa) << endl;
    return 0;
}