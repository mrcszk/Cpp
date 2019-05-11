//
// Created by marci on 09.05.2019.
//

//
// Created by marci on 09.05.2019.
//

#include "../Food.cpp"

class sausages: public Food {
public:
public:
    sausages(){
        this->price = 20;
        this->percent = 0;
        this->volume = 1;
    };
    string getFood() override {
        return "sausages";
    }

    ~sausages() override = default;

};//
// Created by marci on 09.05.2019.
//

