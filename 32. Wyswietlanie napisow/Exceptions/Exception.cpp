//
// Created by marci on 02.05.2019.
//
#include "Exception.h"
Exception::Exception(string message) : message_(message) {}

string Exception::message() const {
    return message_;
}