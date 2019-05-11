//
// Created by marci on 07.05.2019.
//

#include "Backpack.h"
void Backpack::add(Food *feed){
    if((budget - feed->price)>0 &&  (this->currentLevel += ((feed->volume*feed->percent)/(water * weight)))<maxLevel){
        food.emplace_back(*feed);
        cout << "Added " << feed->getFood() << endl;
        cout << "Level " << this->currentLevel << endl;
    }
    else{
        cout << "That's too much!" << endl;
    }
}
void Backpack::print(){
    cout << endl << "The content of the backpack: " << endl;
    for (Food &x: food){
        cout << x.getFood() << endl;
    }
}