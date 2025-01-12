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


    MutantStack<int> mstack2;
    mstack2.push(5);
    mstack2.push(17);
    std::cout << "first element: " << mstack2.top() << std::endl;
    mstack2.pop();
    std::cout << "after pop() the size is " << mstack2.size() << std::endl;
    mstack2.push(3);
    mstack2.push(5);
    mstack2.push(737);
    //[...]
    mstack2.push(0);
    MutantStack<int>::iterator it = mstack2.begin();
    MutantStack<int>::iterator ite = mstack2.end();
    std::cout << "operate on iterator\n";
    std::cout << *it << std::endl;
    ++it;
    std::cout << *it << std::endl;
    --it;
    std::cout << *it << std::endl;
    std::cout << "traverse the mutantstack and print all of the elements:" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "test initiating a stack with mutantstack:" << std::endl;
    std::stack<int> s(mstack2);
    std::cout << "stack size: " << s.size() << std::endl;
    std::cout << "print all member of s:" << std::endl;
    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    return 0;
}
