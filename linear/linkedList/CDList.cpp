//
// Created by Mr. Uzair on 7/30/2022.
//

#include "CDList.h"

CDList::CDList() {
    head = nullptr;
    size = 0;
}

// * Insert

void CDList::insertAtHead(int item) {
    DNode* newNode = new DNode;
    newNode->value = item;
    if (isEmpty()) {
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
    } else {
        head->prev->next = newNode;
        newNode->prev = head->prev;
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    size++;
}

void CDList::insertAtTail(int item) {
    DNode* newNode = new DNode;
    newNode->value = item;
    if (isEmpty()) {
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
    } else {
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        newNode->next = head;
    }
    size++;
}

void CDList::insertAt(int item, int index) {
    if (index < 0 || index > size)
        return;
    DNode* newNode = new DNode;
    newNode->value = item;
    if (index == 0) {
        head->prev->next = newNode;
        newNode->prev = head->prev;
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    else if (isEmpty()) {
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
    }
    else {
        DNode* temp = head;
        int i = 1;
        while (i <= index) {
            temp = temp->next;
            i++;
        }
        newNode->prev = temp->prev;
        newNode->next = temp;
        temp->prev->next = newNode;
        temp->prev = newNode;
    }
    size++;
}

// * Remove
void CDList::remove(int item) {
    int index = indexOf(item);
    if (index < 0)
        return;
    removeAt(index);
}

void CDList::removeAtHead() {
    if (isEmpty())
        return;
    if (head->next == head)
        head = NULL;
    else {
        DNode *temp = head, *firstNode = head;
        while (temp->next != head)
            temp = temp->next;
        head = head->next;
        head->prev = temp;
        temp->next = head;
        delete firstNode;
    }
    size--;
}

void CDList::removeAtTail() {
    if (isEmpty())
        return;
    if (head->next == head)
        head = NULL;
    else {
        DNode *temp = head, *lastNode = head->prev;
        while (temp->next != lastNode)
            temp = temp->next;
        temp->next = head;
        head->prev = temp;
        delete lastNode;
    }
    size--;
}

void CDList::removeAt(int index) {
    if (index >= size || size < 0 || isEmpty())
        return;
    if (index == 0) {
        removeAtHead();
        return;
    }
    if (index == size - 1) {
        removeAtTail();
        return;
    }
    DNode* nodeToDelete = head;
    DNode* temp = head;
    for(int i = 1; i < index; i++)
        temp = temp->next;
    nodeToDelete = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete nodeToDelete;
    size--;
}

// * Replace

void CDList::replace(int item1, const int item2) {
    std::cout << indexOf(item1);
    replaceAt(indexOf(item1), item2);
}

void CDList::replaceHead(const int item) {
    if (isEmpty())
        return;
    head->value = item;
}

void CDList::replaceTail(const int item) {
    if (isEmpty())
        return;
    head->prev->value = item;
}

void CDList::replaceAt(int index, const int item) {
    if (index < 0 || index >= size || isEmpty())
        return;
    if (index == 0) {
        replaceHead(item);
        return;
    }
    if (index == size - 1) {
        replaceTail(item);
        return;
    }
    DNode *temp = head;
    for (int i = 0; i < index; i++)
        temp = temp->next;
    temp->value = item;
}

// * Utilities
void CDList::reverse() {
    if (isEmpty())
        return;
    if (head != NULL) {
        DNode *prevNode = head,
              *currNode = head->next,
              *tempNode = head;
        prevNode->next = prevNode;
        prevNode->prev = prevNode;
        while (currNode != head) {
            tempNode = currNode->next;
            currNode->next = prevNode;
            prevNode->prev = currNode;
            head->next = currNode;
            prevNode = currNode;
            currNode = tempNode;
        }
        head = prevNode;
    }
}

int CDList::indexOf(int item) const {
    if (isEmpty())
        return -1;
    DNode* temp = head;
    int index = 0;
    while (temp->next != head) {
        if (temp->value == item)
            return index;
        temp = temp->next;
        index++;
    }
    if (temp->value == item)
        return index;
    return -1;
}

bool CDList::isEmpty() const {
    return size == 0;
}

int CDList::length() const {
    return size;
}

void CDList::print() const {
    std::cout << "{";
    DNode* temp = head;
    if (temp == nullptr) {
        std::cout << "}" << std::endl;
        return;
    } else {
        while (temp->next != head) {
            std::cout << temp->value;
            temp = temp->next;
            if (temp->next != nullptr)
                std::cout << ", ";
        }
    }
    std::cout << temp->value;
    std::cout << "}" << std::endl;
}
