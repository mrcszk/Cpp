//
// Created by marci on 16.05.2019.
//

#ifndef INC_35_ITERATORY_ITERABLEITERATORWRAPPER_H
#define INC_35_ITERATORY_ITERABLEITERATORWRAPPER_H

#include "ZipperIterator.h"

class IterableIteratorWrapper: public ZipperIterator {
    explicit IterableIteratorWrapper(std::unique_ptr<IterableIterator> iterator);
    bool operator!=(const IterableIteratorWrapper &other);
    std::pair<int, std::string> operator*();
    IterableIteratorWrapper &operator++();

};


#endif //INC_35_ITERATORY_ITERABLEITERATORWRAPPER_H
