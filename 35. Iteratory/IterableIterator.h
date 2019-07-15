//
// Created by marci on 14.05.2019.
//

#ifndef INC_35_ITERATORY_ITERABLEITERATOR_H
#define INC_35_ITERATORY_ITERABLEITERATOR_H

#include <iostream>
#include <string>
#include <vector>


class IterableIterator {
public:
    std::vector<int>::const_iterator left_begin;
    std::vector<std::string>::const_iterator right_begin;
    std::vector<int>::const_iterator left_end;
    std::vector<std::string>::const_iterator right_end;
    //IterableIterator() = 0;
    virtual std::pair<int, std::string> Dereference() = 0;
    virtual IterableIterator &Next() = 0;
    virtual bool NotEquals(const IterableIterator &other) = 0;
    ~IterableIterator() = default;

};


#endif //INC_35_ITERATORY_ITERABLEITERATOR_H
