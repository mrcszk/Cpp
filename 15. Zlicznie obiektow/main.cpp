#include "CCounter.h"
using namespace std;
using std::unique_ptr;
using std::cout;
using std::endl;

int main() {
    unique_ptr<ccounter::Counter> counter = ccounter::Init();

    Inc("a", &counter);
    Inc("b", &counter);
    Inc("a", &counter);
    SetCountsTo("c", 13, &counter);
    for (const auto & count : counter->values) {
        cout << count.first << "|" << ccounter::Counts(counter , count.first) << endl;
    }

    return 0;
}