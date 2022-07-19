//
// Created by uzair on 7/19/22.
//

#include "Stack.h"

Stack::Stack() {
    count = 0;
    list = new int[count];
}

void Stack::push(int x) {
    list[count++] = x;
}

int Stack::pop() {
    if (!isEmpty())
        return list[--count];
}

int Stack::peek() const {
    if (!isEmpty())
        return list[count - 1];
}

bool Stack::isEmpty() const {
    return count == 0;
}

void Stack::print() const {
    std::cout << "[";
    int i = 0;
    while (i < count) {
        std::cout << list[i];
        i++;
        if (i != count)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

Stack::~Stack() {
    delete [] list;
}