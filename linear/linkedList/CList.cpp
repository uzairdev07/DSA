//
// Created by uzair on 7/26/22.
//

#include "CList.h"

// * Insert

void CList::insertAtHead(const int item) {
    Node* newNode = new Node;
    newNode->value = item;
    if (head == nullptr) {
        newNode->next = newNode;
        head = newNode;
        size++;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
    size++;
}

void CList::insertAtTail(const int item) {
    if (head == nullptr) {
        insertAtHead(item);
        return;
    }
    Node* newNode = new Node;
    newNode->value = item;
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    size++;
}

// * Remove

void CList::removeAtHead() {
    Node* temp = head;
    if (head == nullptr)
        return;
    while (temp->next != head)
        temp = temp->next;
    Node* dNode = head;
    temp->next = head->next;
    head = head->next;
    delete dNode;
    size--;
}

void CList::removeAtTail() {
    if (head->next == nullptr) {
        removeAtHead();
        return;
    }
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    Node* dNode = head;
    temp->next = head->next;
    head = head->next;
    delete dNode;
    size--;
}

// * Get
int CList::getHead() const {
    Node* temp = head;
    if (temp != nullptr)
        return head->value;
    return -1;
}

int CList::getTail() const {
    Node* temp = head;
    if (temp == nullptr)
        return -1;
    while (temp->next != head)
        temp = temp->next;
    return temp->value;
}

// * Utilities
void CList::print() const {
    Node* temp = head;
    std::cout << "{";
    if (temp == nullptr)
        goto end;
    do {
        std::cout << temp->value;
        temp = temp->next;
        if (temp != head)
            std::cout << ", ";
    } while (temp != head);
    end:
    std::cout << "}" << std::endl;
}

bool CList::isEmpty() {
    return size == 0;
}

int CList::length() const {
    return size;
}
