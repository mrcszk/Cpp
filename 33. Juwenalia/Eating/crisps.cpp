//
// Created by marci on 09.05.2019.
//

#include "../Food.cpp"

class crisps: public Food {
public:
public:
    crisps(){
        this->price = 4;
        this->percent = 0;
        this->volume = 0.5;
    };
    string getFood() override {
        return "crisps";
    }

    ~crisps() override = default;

};