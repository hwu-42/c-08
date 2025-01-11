// Description: Templated MutantStack class implementation.
#include "MutantStack.hpp"

// Constructor
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

// Copy constructor
template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {}

// Assignment operator
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) {
    if (this != &other) {
        this->c = other.c;  // Assign the container
    }
    return *this;
}

// Destructor
template <typename T>
MutantStack<T>::~MutantStack() {}

// Begin iterator
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();  // Access the container's iterator
}

// Const begin iterator
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
    return this->c.begin();  // Access the container's const iterator
}

// End iterator
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();  // Access the container's iterator
}

// Const end iterator
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
    return this->c.end();  // Access the container's const iterator
}

