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
    Span();
    Span(const Span &other);
    Span &operator=(const Span &other);

    // Destructor
    ~Span();
    
    // Add a number to the Span
    void addNumber(int n);

    // Get the shortest span
    int shortestSpan() const;

    std::vector<int>::iterator begin();

    std::vector<int>::iterator end();

    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    // Get the longest span
    int longestSpan() const;

    int size() const;

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
