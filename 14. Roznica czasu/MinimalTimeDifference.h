#ifndef INC_14_ROZNICA_CZASU_MINIMALTIMEDIFFERENCE_H
#define INC_14_ROZNICA_CZASU_MINIMALTIMEDIFFERENCE_H
#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <sstream>
#include <regex>
#include <cmath>
#include <string>
#include <regex>
#include <iostream>
#include <cstdlib>

using namespace std;

namespace minimaltimedifference
{
    unsigned int ToMinutes(string time_HH_MM);
    unsigned int MinimalTimeDifference(vector<string> times);
}

#endif //INC_14_ROZNICA_CZASU_MINIMALTIMEDIFFERENCE_H
