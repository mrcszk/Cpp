//
// Created by marci on 14.05.2019.
//

#include "ZipperIterator.h"
ZipperIterator::ZipperIterator( std::vector<int>::const_iterator left_begin_,
                                std::vector<std::string>::const_iterator right_begin_,
                                std::vector<int>::const_iterator left_end_,
                                std::vector<std::string>::const_iterator right_end_){
    left_begin = left_begin_;
    right_begin = right_begin_;
    left_end = left_end_;
    right_end = right_end_;
}
std::pair<int, std::string>  ZipperIterator::Dereference(){
    std::pair<int, std::string> dereference = std::make_pair(* left_begin, *right_begin );
    return dereference;
}

IterableIterator & ZipperIterator:: Next() {
    if(left_begin != left_end ) left_begin++;
    if(right_begin != right_end ) right_begin++;

    return *this;
}

bool ZipperIterator::NotEquals(const IterableIterator &other){
    return (left_begin == other.left_begin && right_begin == other.right_begin);
}
