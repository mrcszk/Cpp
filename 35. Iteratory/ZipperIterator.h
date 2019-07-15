//
// Created by marci on 14.05.2019.
//

#ifndef INC_35_ITERATORY_ZIPPERITERATOR_H
#define INC_35_ITERATORY_ZIPPERITERATOR_H

#include "IterableIterator.h"
#include <vector>
#include <iostream>
#include <string>


using  namespace std;
class ZipperIterator: public IterableIterator {
public:
    ZipperIterator() = default;
    explicit ZipperIterator(std::vector<int>::const_iterator left_begin,
                            std::vector<std::string>::const_iterator right_begin,
                            std::vector<int>::const_iterator left_end,
                            std::vector<std::string>::const_iterator right_end);

    std::pair<int, std::string> Dereference() override;
    IterableIterator &Next() override;
    bool NotEquals(const IterableIterator &other) override;

};


#endif //INC_35_ITERATORY_ZIPPERITERATOR_H
