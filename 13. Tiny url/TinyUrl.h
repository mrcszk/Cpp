//
// Created by marci on 24.03.2019.
//

#ifndef INC_13_TINY_URL_TINYURL_H
#define INC_13_TINY_URL_TINYURL_H
#include <iostream>
#include <string>
#include <memory>
using namespace std;

namespace TinyUrl{

    string Encode(string url);

    void print();

    string Decode(string hash);
}
#endif //INC_13_TINY_URL_TINYURL_H
