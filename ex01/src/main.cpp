#include <iostream>
#include <cstdlib>
#include "Span.hpp"
#include <ctime>    // For time()

int main() {
    Span sp(10);
    try {
        // Test case with 5 numbers and a max size of 10

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Adding more numbers to test the limit
        sp.addNumber(21);
        sp.addNumber(18);
        sp.addNumber(98);
        sp.addNumber(2);
        sp.addNumber(199);
        sp.addNumber(111);
        
        // Exception test: Adding more than N numbers
        // sp.addNumber(100); // Uncomment to test FullSpanException
    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

    try {
        // Testing NoSpanException
        Span emptySpan(2);
        std::cout << "Shortest Span: " << emptySpan.shortestSpan() << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "Performance test with 10,000 numbers" << std::endl;
    srand(time(NULL));
    Span sp2(10000);
    Span sp3(10000);
    for (int i = 0; i < 9999; i++) {
        if (i % 2 == 0) {
            sp2.addNumber(rand() % 100000);
        }
        else {
            sp3.addNumber(rand() % 100000);
        }
    }
    std::cout << "size sp2: " << sp2.size() << std::endl;
    std::cout << "size sp3: " << sp3.size() << std::endl;

    std::cout << "Shortest Span (10,000 numbers): " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest Span (10,000 numbers): " << sp2.longestSpan() << std::endl;
    std::cout << "Shortest Span (10,000 numbers): " << sp3.shortestSpan() << std::endl;
    std::cout << "Longest Span (10,000 numbers): " << sp3.longestSpan() << std::endl;

    std::cout << "test addNumber(iterator)" << std::endl;
    Span sp4(100);
    sp4.addNumber(sp4.numbers.begin(), sp4.numbers.end()); //working on
    std::cout << "Shortest Span (10,000 numbers): " << sp4.shortestSpan() << std::endl;
    std::cout << "Longest Span (10,000 numbers): " << sp4.longestSpan() << std::endl;
    return 0;
}
