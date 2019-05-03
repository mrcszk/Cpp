//
// Created by marci on 27.04.2019.
//

#include "Pesel.h"
PESEL::PESEL() = default;
PESEL::PESEL(string pesel){
this->pesel = pesel;
validatePESEL(pesel);
}
void PESEL::validatePESEL(string pesel){
    if(pesel.length()!=11) throw wrongPeselLength();
    else{
        for(char x: pesel){
            if(x<48||x>57) throw wrongPeselNumbers();
        }
    }
    const int wages[] = {9, 7, 3, 1, 9, 7, 3, 1, 9, 7};
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += wages[i] * (pesel[i] - 48);
    }

    if ((sum % 10) != (pesel[10] - 48)) {
        throw wrongPeselSum();
    }
}