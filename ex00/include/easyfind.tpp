#include "easyfind.hpp"


const char* NotFoundException::what() const throw() {
        return "Value not found in the container";
    }

template <typename T>
typename T::const_iterator easyfind(const T& container, int value) {
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw NotFoundException();
    }
    return it;
}