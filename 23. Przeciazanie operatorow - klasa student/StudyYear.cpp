//
// Created by marci on 08.04.2019.
//

#include "StudyYear.h"
StudyYear::StudyYear() = default;
StudyYear::StudyYear(int year):year(year){}
void StudyYear::operator++(int) {
    year +=1;
}
void StudyYear::operator--(int) {
    year -=1;
}
bool StudyYear::operator==(StudyYear tmp) {
    return tmp.year == year;
}
bool StudyYear::operator< (StudyYear tmp){
    return year < tmp.year;
}
StudyYear::operator int()
{
    return year;
}
istream& operator>>(istream & input, StudyYear& p){
    input >> p.year;
    return input;
}
ostream& operator<<(ostream &out, const StudyYear& p){
    return out << p.year;
}