//
// Created by marci on 07.05.2019.
//

#ifndef INC_33_JUWENALIA_ORANGEJUICE_H
#define INC_33_JUWENALIA_ORANGEJUICE_H

#include "../Food.cpp"

class orangeJuice: public Food {
public:
    orangeJuice(){
        this->price = 3;
        this->percent = 0;
        this->volume = 1.5;
    };

    string getFood() override {
        return "orange juice";
    }

    ~orangeJuice() override = default;


};

#endif //INC_33_JUWENALIA_ORANGEJUICE_H
