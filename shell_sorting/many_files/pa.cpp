#include "pa.hpp"

#include <iostream>

void aba::print_array(const char* comment, int* arr, int size) {
    std::cout << comment;
    for (int i = 0; i < size; i++) {
        std::cout << ' ' << arr[i];
    }
    std::cout << std::endl;
}