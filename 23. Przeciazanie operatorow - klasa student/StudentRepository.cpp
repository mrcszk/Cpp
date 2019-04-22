//
// Created by marci on 08.04.2019.
//

#include "StudentRepository.h"
bool StudentRepository::operator==(StudentRepository &tmp) {
    for (auto &m: repo) {
        for (auto &n : tmp.repo) {
            if (!(m == n)) return false;
            break;
        }
    }
    return true;
}
StudentRepository::StudentRepository() = default;
void StudentRepository::add(Student newS) {
    repo.push_back(newS);
}
Student StudentRepository::operator[](string id){
    for(auto &n : repo) {
        if(id == n.id) return n;

    }
}
std::ostream &operator<<(std::ostream &output, StudentRepository &studentRepository){
    output << "[";
    bool first = true;
    for(auto &n : studentRepository.repo) {
        if(!first) output << ", ";
        output << n;
        first = false;
    }
    output << "]";
        return output;
    }