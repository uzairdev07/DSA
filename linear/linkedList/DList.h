//
// Created by Mr. Uzair on 7/27/2022.
//

#ifndef DSA_DLIST_H
#define DSA_DLIST_H

#include "DNode.h"
#include <iostream>

class DList {
public:
    void insert(int item);
    void insertFirst(int item);
    void removeAt(int index);
    void remove(int item);
    int get(int index) const;
    void reverse();
    int indexOf(int item) const;
    void print() const;
private:
    DNode* head = nullptr;
    int size = 0;
    DNode* getNode(int index) const;
};


#endif //DSA_DLIST_H
