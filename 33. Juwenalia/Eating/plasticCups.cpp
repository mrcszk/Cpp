//
// Created by marci on 09.05.2019.
//

//
// Created by marci on 09.05.2019.
//

#include "../Food.cpp"

class plasticCups: public Food {
public:
public:
    plasticCups(){
        this->price = 2;
        this->percent = 0;
        this->volume = 0.1;
    };
    string getFood() override {
        return "plasticCups";
    }

    ~plasticCups() override = default;

};//
// Created by marci on 09.05.2019.
//

