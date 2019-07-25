#include <iostream>

bool print(int value) {
    if (value == 40)
        return false;
    std::cout << value << '\n';
    return true;
}
