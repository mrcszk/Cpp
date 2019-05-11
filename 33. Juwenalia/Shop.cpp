//
// Created by marci on 11.05.2019.
//

#include "Shop.h"
vector<reference_wrapper<Food>> Shop:: shop(){
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 10);
    Backpack bag;
    auto *beerF = new beer;
    auto *cookiesF = new cookies;
    auto *crispsF = new crisps;
    auto *orangeJuiceF = new orangeJuice;
    auto *pepsiF = new pepsi;
    auto *plasticCupsF = new plasticCups;
    auto *sausagesF = new sausages;
    auto *vodkaF = new vodka;
    auto *waterF = new water;
    auto *wineF = new wine;
    for (int i=0;i<20;i++) {
        int random =dist(mt);
        switch (random){
            case (1):
                bag.add(beerF);
                break;
            case(2):
                bag.add(cookiesF);
                break;
            case(3):
                bag.add(crispsF);
                break;
            case(4):
                bag.add(orangeJuiceF);
                break;
            case(5):
                bag.add(pepsiF);
                break;
            case(6):
                bag.add(plasticCupsF);
                break;
            case(7):
                bag.add(sausagesF);
                break;
            case(8):
                bag.add(vodkaF);
                break;
            case(9):
                bag.add(waterF);
                break;
            case(10):
                bag.add(wineF);
                break;
            default:
                break;
        }

    }
    return bag.food;
}