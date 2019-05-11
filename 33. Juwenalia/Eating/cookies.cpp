//
// Created by marci on 09.05.2019.
//

#include "../Food.cpp"

class cookies: public Food {
public:
public:
    cookies(){
        this->price = 4;
        this->percent = 0;
        this->volume = 0.3;
    };
    string getFood() override {
        return "cookies";
    }

    ~cookies() override = default;

};