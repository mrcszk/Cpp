//
// Created by marci on 07.05.2019.
//

#ifndef INC_33_JUWENALIA_BEER_H
#define INC_33_JUWENALIA_BEER_H
#include "../Food.cpp"

class beer: public Food {
public:
public:
    beer(){
        this->price = 3.5;
        this->percent = 5;
        this->volume = 0.5;
    };
    string getFood() override {
        return "beer";
    }

    ~beer() override = default;

};
#endif //INC_33_JUWENALIA_BEER_H
