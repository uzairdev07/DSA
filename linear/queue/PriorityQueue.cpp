//
// Created by uzair on 7/20/22.
//

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue(int size) {
    max_size = size;
    list = new int[max_size];
    count = 0;
}

void PriorityQueue::enqueue(int x) {
    if (isFull()) {
        std::cerr << "Cannot remove to an empty Priority Queue!" << std::endl;
        return;
    }
    if (isEmpty())
        list[count] = x;
    int i = shift(x);
    list[i] = x;
    count++;
}

void PriorityQueue::dequeue() {
    if (isEmpty()) {
        std::cerr << "Cannot remove to an empty Priority Queue!" << std::endl;
        return;
    }
    list[0] = 0;
    for (int i = 1; i < count; i++)
        if (list[i - 1] < list[i])
            swap(list[i - 1], list[i]);
    count--;
}

int PriorityQueue::getHigh() const {
    return list[0];
}

int PriorityQueue::getLow() const {
    return list[count - 1];
}

int PriorityQueue::find(int x) const {
    for (int i = 0; i < count; i++)
        if (list[i] == x)
            return i;
}

bool PriorityQueue::isFull() const {
    return count == max_size;
}

bool PriorityQueue::isEmpty() const {
    return count == 0;
}

int PriorityQueue::length() const {
    return count;
}

int PriorityQueue::size() const {
    return max_size;
}

void PriorityQueue::print() const {
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

int PriorityQueue::shift(int x) {
    int i;
    for (i = count - 1; i >= 0; i--) {
        if (list[i] < x)
            list[i + 1] = list[i];
        else
            break;
    }
    return i + 1;
}

void PriorityQueue::swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

PriorityQueue::~PriorityQueue() {
    delete [] list;
}