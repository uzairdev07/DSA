//
// Created by uzair on 7/26/22.
//

#ifndef DSA_CLIST_H
#define DSA_CLIST_H

#include "Node.h"
#include <iostream>

class CList {
public:
    // * Insert
    void insertAtHead(const int item);
    void insertAtTail(const int item);
    // * Remove
    void removeAtHead();
    void removeAtTail();
    // * Get
    int getHead() const;
    int getTail() const;
    // * Utilities
    void print() const;
    bool isEmpty();
    int length() const;
private:
    Node* head;
    int size;
};


#endif //DSA_CLIST_H
