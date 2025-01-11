#include <iostream>
#include <vector>
#include "../include/easyFind.hpp"

int main() {
    try {
        int arr[] = {10, 20, 30, 40, 50}; 
        std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(int));

        int valueToFind = 40;
        std::vector<int>::const_iterator result = easyFind(numbers, valueToFind);
        std::vector<int>::const_iterator constBegin = numbers.begin();
        std::cout << "Found value " << *result << " at position: "
                  << std::distance(constBegin, result) << std::endl;

        valueToFind = 100;
        result = easyFind(numbers, valueToFind); // This will throw
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
