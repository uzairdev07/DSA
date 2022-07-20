//
// Created by uzair on 7/20/22.
//

#ifndef DSA_QUEUE_H
#define DSA_QUEUE_H

#include <iostream>

#define SIZE 20

class Queue {
public:
    Queue(int size = SIZE);
    void enqueue(int x);
    int dequeue();
    int front() const;
    int back() const;
    bool isEmpty() const;
    bool isFull() const;
    int length() const;
    int size() const;
    void print() const;
    ~Queue();
private:
    int* list;
    int f, b, count, max_size; // * f (Front), b (Back)
    void swap(int &x, int &y);
};


#endif //DSA_QUEUE_H
