//
// Created by marci on 09.05.2019.
//

#include "../Food.cpp"

class wine: public Food {
public:
public:
    wine(){
        this->price = 20;
        this->percent = 13;
        this->volume = 1.5;
    };
    string getFood() override {
        return "wine";
    }

    ~wine() override = default;

};