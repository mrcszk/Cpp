//
// Created by marci on 02.05.2019.
//

#ifndef INC_32_WYSWIETLANIE_NAPISOW_INVALIDSEQUENCEEXCEPTION_H
#define INC_32_WYSWIETLANIE_NAPISOW_INVALIDSEQUENCEEXCEPTION_H

#include "Exception.h"
#include <string>

using std::string;

class InvalidSequenceException : public Exception {
public:
    InvalidSequenceException(string message);
};



#endif //INC_32_WYSWIETLANIE_NAPISOW_INVALIDSEQUENCEEXCEPTION_H
