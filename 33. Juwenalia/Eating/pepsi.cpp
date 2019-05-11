//
// Created by marci on 09.05.2019.
//

#include "../Food.cpp"

class pepsi: public Food {
public:
public:
    pepsi(){
        this->price = 5;
        this->percent = 0;
        this->volume = 2;
    };
    string getFood() override {
        return "pepsi";
    }

    ~pepsi() override = default;

};