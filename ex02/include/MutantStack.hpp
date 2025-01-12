#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    // Constructor and Destructor
    MutantStack();
    virtual ~MutantStack();

    MutantStack(const MutantStack<T>& other);
    MutantStack<T>& operator=(const MutantStack<T>& other);

    // Iterator types
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    
    // Methods to access the stack as iterable
    iterator begin();
    const_iterator begin() const;
    iterator end();
    const_iterator end() const;
};

#include "MutantStack.tpp"
