//
// Created by uzair on 7/17/22.
//

#ifndef DSA_ARRAY_H
#define DSA_ARRAY_H


#include <iostream>
#include <assert.h>

class Array {
public:
    friend std::ostream &operator<<(std::ostream &os, const Array &array);
public:
    Array(int size);
    virtual ~Array();
    // * Insert Methods
    void insert(const int& x);
    void insertAt(int index, const int& x);
    void insertBegin(const int& x);
    void insertEnd(const int& x);
    // * Remove Methods
    void remove(const int& x);
    void removeAt(int index);
    void removeBegin();
    void removeEnd();
    // * Get Methods
    int get() const;
    int getAt(int index) const;
    // * Modify Methods
    void replace(const int& x1, const int& x2);
    void replaceAt(int index, const int& x);
    // * Utilities
    bool contains(const int x) const;
    int indexOf(const int& x) const;
    void clear();
    void print() const;
    bool isFull() const;
    bool isEmpty() const;
    int size() const;
    int maxSize() const;
    // * Operators
    bool operator==(const Array &rhs) const;
    bool operator!=(const Array &rhs) const;
    bool operator<(const Array &rhs) const;
    bool operator>(const Array &rhs) const;
    bool operator<=(const Array &rhs) const;
    bool operator>=(const Array &rhs) const;

private:
    int* list;
    int max_size;
    int length;
};


#endif //DSA_ARRAY_H
