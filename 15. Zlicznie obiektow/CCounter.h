//
// Created by marci on 21.03.2019.
//

#ifndef INC_15_ZLICZNIE_OBIEKTOW_CCOUNTER_H
#define INC_15_ZLICZNIE_OBIEKTOW_CCOUNTER_H
#include <string>
#include <memory>
#include <map>
#include <iostream>
namespace ccounter {
    struct Counter {
        std::map<std::string, int> values;
    };

    std::unique_ptr<Counter> Init();

    void Inc(std::string key, std::unique_ptr<Counter> *counter);

    int Counts(const std::unique_ptr<Counter> &counter, std::string key);

    void SetCountsTo(std::string key, int value, std::unique_ptr<Counter> *counter);
}
#endif //INC_15_ZLICZNIE_OBIEKTOW_CCOUNTER_H