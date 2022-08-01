//
// Created by Mr. Uzair on 7/30/2022.
//

// * Circular Doubly Linked List

#ifndef DSA_CDLIST_H
#define DSA_CDLIST_H

#include <iostream>
#include "DNode.h"

class CDList {
public:
    CDList();
    // * Insert
    void insertAtHead(int item);
    void insertAtTail(int item);
    void insertAt(int item, int index);
    // * Remove
    void remove(int item);
    void removeAtHead();
    void removeAtTail();
    void removeAt(int index);
    // * Replace
    void replace(int item1, const int item2);
    void replaceHead(const int item);
    void replaceTail(const int item);
    void replaceAt(int index, const int item);
    // * Utilities
    void reverse();
    int indexOf(int item) const;
    bool isEmpty() const;
    int length() const;
    void print() const;
private:
    DNode* head;
    int size;
};


#endif //DSA_CDLIST_H
