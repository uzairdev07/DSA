//
// Created by uzair on 7/20/22.
//

#include "Queue.h"

Queue::Queue(int size) {
    max_size = size;
    list = new int[size];
    count = 0;
    f = b = -1;
}

void Queue::enqueue(int x) {
    if (f == -1 && b == -1) {
        f = b = 0;
        list[b] = x;
    } else {
        b++;
        list[b] = x;
    }
    count++;
}

int Queue::dequeue() {
    if (isEmpty()) {
        std::cerr << "Queue is empty right now!" << std::endl;
        return -1;
    }
    int temp = list[f];
    list[f] = 0;
    for (int i = 1; i < count; i++) {
        swap(list[i - 1], list[i]);
    }
    b--;
    count--;
    return temp;
}

int Queue::front() const {
    if (isEmpty()) {
        std::cerr << "Queue is empty right now!" << std::endl;
        return -1;
    }
    return list[f];
}

int Queue::back() const {
    if (isEmpty()) {
        std::cerr << "Queue is empty right now!" << std::endl;
        return -1;
    }
    return list[b];
}

bool Queue::isEmpty() const {
    return count == 0;
}

bool Queue::isFull() const {
    return count == max_size;
}

int Queue::length() const {
    return count;
}

int Queue::size() const {
    return max_size;
}

void Queue::print() const {
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

void Queue::swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

Queue::~Queue() {
    delete [] list;
}