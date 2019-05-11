//
// Created by marci on 09.05.2019.
//
#include "../Food.cpp"

class water: public Food {
public:
public:
    water(){
        this->price = 1;
        this->percent = 0;
        this->volume = 1.5;
    };
    string getFood() override {
        return "water";
    }

    ~water() override = default;

};