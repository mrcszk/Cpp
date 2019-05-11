//
// Created by marci on 11.05.2019.
//

#include "Student.h"
Student::Student(char gender, double weight, double budget){
    bag.weight = weight;
    if (gender == 'M') bag.water = 0.7;
    else bag.water = 0.6;
    bag.budget = budget;
}