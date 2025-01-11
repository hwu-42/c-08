#include "../include/Span.hpp"

const char* Span::FullSpanException::what() const throw() {
    return "Span is full, cannot add more numbers";
}


const char* Span::NoSpanException::what() const throw() {
    return "Not enough numbers to calculate a span";
}



Span::Span(unsigned int n) : N(n) {
    numbers.reserve(n);
}

Span::Span() : N(0) {
    numbers.reserve(0);
}

Span::Span(const Span &other) {
    *this = other;
}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        N = other.N;
        numbers = other.numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
    if (numbers.size() >= N) {
        throw FullSpanException();
    }
    numbers.push_back(n);
}

int Span::shortestSpan() const {
    if (numbers.size() < 2) {
        throw NoSpanException();
    }

    // Sort the numbers to easily find the shortest span
    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());

    int shortest = sorted[1] - sorted[0];
    for (size_t i = 1; i < sorted.size() - 1; ++i) {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < shortest) {
            shortest = diff;
        }
    }

    return shortest;
}

int Span::longestSpan() const {
    if (numbers.size() < 2) {
        throw NoSpanException();
    }

    // Find the max and min elements
    int maxElement = *std::max_element(numbers.begin(), numbers.end());
    int minElement = *std::min_element(numbers.begin(), numbers.end());

    return maxElement - minElement;
}

int Span::size() const{
    return numbers.size();
}

std::vector<int>::iterator Span::begin() {
    return numbers.begin();
}

std::vector<int>::iterator Span::end() {
    return numbers.end();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (numbers.size() + std::distance(begin, end) > N) {
        throw FullSpanException();
    }
    numbers.insert(numbers.end(), begin, end);
}
