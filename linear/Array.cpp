//
// Created by uzair on 7/16/22.
//

#include "Array.h"

Array::Array(int size) {
    if (size < 0) {
        std::cerr << "The array size must be positive creating an array of size 10." << std::endl;
        max_size = 10;
    } else
        max_size = size;
    length = 0;
    list = new int[max_size];
    assert(list != NULL);
}

// * Insert Methods
void Array::insert(const int &x) {
    insertEnd(x);
}

void Array::insertAt(int index, const int &x) {
    if (isFull()) {
        std::cerr << "Cannot insert in a full Array!" << std::endl;
        return;
    }
    if (index < 0 || index >= max_size) {
        std::cerr << "Index out of bounds." << std::endl;
        return;
    }
    length++;
    for (int i = length; i > index; i--) {
        list[i] = list[i - 1];
    }
    list[index] = x;
}

void Array::insertBegin(const int &x) {
    if (isFull()) {
        std::cerr << "Cannot insert in a full Array!" << std::endl;
        return;
    }
    length++;
    for (int i = length; i > 0; i--)
        list[i] = list[i - 1];
    list[0] = x;
}

void Array::insertEnd(const int &x) {
    if (isFull()) {
        std::cerr << "Cannot insert in a full Array!" << std::endl;
        return;
    }
    list[length] = x;
    length++;
}

// * Remove Methods
void Array::remove(const int &x) {
    if (isEmpty()) {
        std::cerr << "Cannot remove " << x << " from an empty Array!" << std::endl;
        return;
    }
    int index = indexOf(x);
    for (int i = index; i < length; i++)
        list[i] = list[i + 1];
    length--;
}

void Array::removeAt(int index) {
    if (isEmpty()) {
        std::cerr << "Cannot remove from an empty Array!" << std::endl;
        return;
    }
    for (int i = index; i < length; i++)
        list[i] = list[i + 1];
    length--;
}

void Array::removeBegin() {
    if (isEmpty()) {
        std::cerr << "Cannot remove from an empty Array!" << std::endl;
        return;
    }
    for (int i = 0; i < length; i++)
        list[i] = list[i + 1];
    length--;
}

void Array::removeEnd() {
    if (isEmpty()) {
        std::cerr << "Cannot remove from an empty Array!" << std::endl;
        return;
    }
    length--;
}

// * Get Methods
int Array::get() const {
    if (!isEmpty())
        return list[length - 1];
    return -1;
}

int Array::getAt(int index) const {
    if (!isEmpty())
        return list[index];
    return -1;
}

// * Modify Methods
void Array::replace(const int &x1, const int &x2) {
    if (isEmpty())
        return;
    int index = indexOf(x1);
    list[index] = x2;
}

void Array::replaceAt(int index, const int &x) {
    if (isEmpty())
        return;
    list[index] = x;
}

// * Utilities

bool Array::contains(const int x) const {
    for (int i = 0; i < length; i++)
        if (list[i] == x)
            return true;
    return false;
}

int Array::indexOf(const int &x) const {
    if (isEmpty()) {
        std::cerr << "Cannot get index of " << x << " from an empty Array!" << std::endl;
        return -1;
    }
    for (int i = 0; i < length; i++)
        if (list[i] == x)
            return i;
}

void Array::clear() {
    length = 0;
}

void Array::print() const {
    std::cout << "[";
    int i = 0;
    while (i < length) {
        std::cout << list[i];
        i++;
        if (i != length)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

bool Array::isFull() const {
    return (length >= max_size);
}

bool Array::isEmpty() const {
    return (length == 0);
}

int Array::size() const {
    return length;
}

int Array::maxSize() const {
    return max_size;
}

bool Array::operator==(const Array &rhs) const {
    return list == rhs.list &&
           max_size == rhs.max_size &&
           length == rhs.length;
}

bool Array::operator!=(const Array &rhs) const {
    return !(rhs == *this);
}

bool Array::operator<(const Array &rhs) const {
    if (list < rhs.list)
        return true;
    if (rhs.list < list)
        return false;
    if (max_size < rhs.max_size)
        return true;
    if (rhs.max_size < max_size)
        return false;
    return length < rhs.length;
}

bool Array::operator>(const Array &rhs) const {
    return rhs < *this;
}

bool Array::operator<=(const Array &rhs) const {
    return !(rhs < *this);
}

bool Array::operator>=(const Array &rhs) const {
    return !(*this < rhs);
}

std::ostream &operator<<(std::ostream &os, const Array &array) {
    os << "[";
    int i = 0;
    while (i < array.length) {
        os << array.list[i];
        i++;
        if (i != array.length)
            os << ", ";
    }
    os << "]" << std::endl;
    return os;
}

Array::~Array() {
    delete [] list;
}
