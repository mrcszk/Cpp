#include <iostream>
#include <vector>
#include "Algorytmy.h"

int main() {
    Algorytmy algorytmy;
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::fill_n(std::back_inserter(v), 3, -1);
        std::cout << algorytmy.Sum(v);
    return 0;
}