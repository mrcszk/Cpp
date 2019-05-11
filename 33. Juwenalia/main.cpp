#include <iostream>
#include "Student.h"
#include "Shop.h"
using namespace std;
int main() {
    Student student('M',70,100);
    Shop market;
    student.bag.food = market.shop();
    student.bag.print();
    return 0;
}