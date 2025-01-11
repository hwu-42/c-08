#pragma once
#include <algorithm>
#include <iterator>
#include <exception>
#include <string>

class NotFoundException : public std::exception {
public:
    virtual const char* what() const throw();
};

template <typename T>
typename T::const_iterator easyFind(const T& container, int value);

#include "easyFind.tpp"
