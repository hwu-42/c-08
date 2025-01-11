#include <iostream>
#include "../include/MutantStack.hpp"

int main() {
    // Create a MutantStack instance of integers
    MutantStack<int> mstack;

    // Push elements onto the stack
    mstack.push(10);
    mstack.push(20);
    mstack.push(30);
    mstack.push(40);
    mstack.push(50);

    // Iterate over the stack elements using iterators
    std::cout << "Stack elements (using iterator): ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Pop one element
    mstack.pop();
    std::cout << "After pop, stack elements (using iterator): ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
