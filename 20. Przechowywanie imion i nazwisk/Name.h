//
// Created by marci on 27.03.2019.
//

#ifndef INC_20_PRZECHOWYWANIE_IMION_I_NAZWISK_NAME_H
#define INC_20_PRZECHOWYWANIE_IMION_I_NAZWISK_NAME_H
#include <iostream>
#include <string>
//#include <experimental/optional>
using namespace std;
namespace model {

    using ::std::string;
    using ::std::stringstream;

    class Name {
    public:

        explicit Name(const string &first_names_surname);

        string FirstName() const;
        string SecondName() const;
        string ThirdName() const;
        string Surname() const;
        string ToFullInitials() const;
        string ToFirstNamesInitials() const;
        string ToSurnameNames() const;
        string ToNamesSurname() const;
        bool IsBeforeBySurname(const Name &other) const;
        bool IsBeforeByFirstName(const Name &other) const;

    private:
        string first_name_;
        string second_name_;
        string third_name_;
        string last_name_;
    };
}
#endif //INC_20_PRZECHOWYWANIE_IMION_I_NAZWISK_NAME_H
