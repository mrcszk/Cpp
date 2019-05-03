//
// Created by marci on 02.05.2019.
//

#ifndef INC_32_WYSWIETLANIE_NAPISOW_NOFILEEXCEPTION_H
#define INC_32_WYSWIETLANIE_NAPISOW_NOFILEEXCEPTION_H

#include "Exception.h"
#include <string>

using std::string;

class NoFileException : public Exception {
public:
    NoFileException(string message);
};


#endif //INC_32_WYSWIETLANIE_NAPISOW_NOFILEEXCEPTION_H
