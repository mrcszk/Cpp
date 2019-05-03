//
// Created by marci on 02.05.2019.
//

#ifndef INC_32_WYSWIETLANIE_NAPISOW_EXCEPTION_H
#define INC_32_WYSWIETLANIE_NAPISOW_EXCEPTION_H


#include <string>

using std::string;

class Exception {
protected:
    string message_;
public:
    Exception(string message);
    string message() const;
};



#endif //INC_32_WYSWIETLANIE_NAPISOW_EXCEPTION_H
