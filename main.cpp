//
// Created by uzair on 7/16/22.
//

#include <iostream>
#include "linear/linkedList/CDList.h"

using namespace std;

int main() {
    CDList list;
    list.insertAtHead(-1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    list.replaceAt(2, 8);
    list.print();
    list.reverse();
    cout << "Reverse: ";
    list.print();
    list.insertAtHead(2);
    list.print();
    list.removeAt(2);
    list.print();
    list.insertAt(7, 0);
    list.print();
    list.removeAtTail();
    list.remove(7);
    list.print();
    list.removeAtHead();
    list.print();
    list.replaceTail(8);
    list.print();
    list.replaceTail(10);
    list.print();
    cout << "Length: " << list.length() << endl;
    list.reverse();
    cout << "Reverse: ";
    list.print();
    return 0;
}