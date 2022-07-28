//
// Created by Mr. Uzair on 7/27/2022.
//

#include "DList.h"

void DList::insert(int item) {
    DNode* newNode = new DNode;
    newNode->value = item;
    if (head == nullptr)
        head = newNode;
    else {
        DNode *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    size++;
}

void DList::insertFirst(int item) {
    DNode* newNode = new DNode;
    newNode->value = item;
    if (head == nullptr)
        head = newNode;
    else {
        DNode *temp = head;
        newNode->next = temp;
        temp->prev = newNode;
        head = newNode;
    }
    size++;
}

void DList::removeAt(int index) {
    if (index < 0 || index >= size)
        return;
    DNode* temp = head;
    for (int i = 0; i < index; i++)
        temp = temp->next;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    size--;
    delete temp;
}

void DList::remove(int item) {
    int index = indexOf(item);
    if (index < 0)
        return;
    removeAt(indexOf(item));
}

int DList::indexOf(int item) const {
    if (head == nullptr)
        return -1;
    DNode* temp = head;
    int i = 0;
    while (temp->next != nullptr) {
        if (temp->value == item)
            return i;
        temp = temp->next;
        i++;
    }
    return -1;
}

int DList::get(int index) const {
    return getNode(index)->value;
}

DNode* DList::getNode(int index) const {
    if (index < 0 || index >= size)
        return nullptr;
    DNode* temp = head;
    for (int i = 0; i < index; i++)
        temp = temp->next;
    return temp;
}

void DList::reverse() {
    int i = 0, j = size - 1;
    for (;i < j; i++, j--)
        std::swap(getNode(i)->value, getNode(j)->value);
}

void DList::print() const {
    std::cout << "{";
    DNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->value;
        temp = temp->next;
        if (temp != nullptr)
            std::cout << ", ";
    }
    std::cout << "}" << std::endl;
}