//
// Created by marci on 21.03.2019.
//
# include "CCounter.h"


namespace ccounter {
    using std::string;
    using std::map;
    using std::cout;
    using std::pair;
    using std::endl;
    using std::unique_ptr;
    using std::make_unique;

    unique_ptr<Counter> Init() {
        unique_ptr<Counter> counter = make_unique<Counter>();

        return counter;
    }

    void Inc(string key, unique_ptr<Counter> * counter) {
        pair<map<string, int>::iterator, bool> ret;
        ret = (*counter)->values.insert(pair<string, int>(key, 1));

        if (!ret.second) {
            ret.first->second++;
        }
    }

    int Counts(const unique_ptr<Counter> &counter, string key) {
        map<string, int>::iterator it;

        it = counter->values.find(key);
        return it->second;
    }

    void SetCountsTo(string key, int value, unique_ptr<Counter> *counter) {
        pair<map<string, int>::iterator, bool> ret;
        ret = (*counter)->values.insert(pair<string, int>(key, value));

    }
};