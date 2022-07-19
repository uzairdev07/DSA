//
// Created by uzair on 7/19/22.
//

#ifndef DSA_STACK_H
#define DSA_STACK_H

#include <iostream>

class Stack {
public:
    Stack();
    void push(int x);
    int pop();
    int peek() const;
    bool isEmpty() const;
    void print() const;
    ~Stack();
private:
    int* list;
    int count;
};


#endif //DSA_STACK_H
