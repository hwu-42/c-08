#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {
private:
    unsigned int N;
    std::vector<int> numbers;

public:
    // Constructor
    Span(unsigned int n);

    // Add a number to the Span
    void addNumber(int n);

    // Get the shortest span
    int shortestSpan() const;

    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    // Get the longest span
    int longestSpan() const;

    int size() const {
        return numbers.size();
    }

    // Custom exceptions
    class FullSpanException : public std::exception {
    public:
        const char* what() const throw();
    };

    class NoSpanException : public std::exception {
    public:
        const char* what() const throw();
    };
};

#endif // SPAN_HPP
