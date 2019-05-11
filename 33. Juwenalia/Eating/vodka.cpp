//
// Created by marci on 09.05.2019.
//

//
// Created by marci on 09.05.2019.
//

#include "../Food.cpp"

class vodka: public Food {
public:
public:
    vodka(){
        this->price = 40;
        this->percent = 40;
        this->volume = 1;
    };
    string getFood() override {
        return "vodka";
    }

    ~vodka() override = default;

};