//
// Created by uzair on 7/20/22.
//

#ifndef DSA_PRIORITYQUEUE_H
#define DSA_PRIORITYQUEUE_H

#include <iostream>

#define SIZE 20

class PriorityQueue {
public:
    PriorityQueue(int size = SIZE);

    // * Insert
    void enqueue(int x);
    // * Remove
    void dequeue();
    // * Get
    int getLow() const;
    int getHigh() const;
    // * Find
    int find(int x) const;
    // * Utilities
    bool isFull() const;
    bool isEmpty() const;
    int length() const;
    int size() const;
    void print() const;
    ~PriorityQueue();

private:
    int* list;
    int count, max_size;  // * h (High), l (Low)
    int shift(int x);
    void swap(int&, int&);
};

#endif //DSA_PRIORITYQUEUE_H
