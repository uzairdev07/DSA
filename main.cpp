//
// Created by uzair on 7/16/22.
//

#include <iostream>
#include "linear/linkedList/CList.h"

using namespace std;

int main() {
    CList list;
    cout << "Get Last Element: " << list.getTail() << endl;
    list.insertAtTail(10);
    cout << "Get First Element: " << list.getHead() << endl;
    list.insertAtHead(20);
    list.insertAtTail(70);
    list.insertAtHead(30);
    list.insertAtTail(50);
    cout << "Get First Element: " << list.getHead() << endl;
    cout << "Get Last Element: " << list.getTail() << endl;
    cout << "Length: " << list.length() << endl;
    list.print();
    return 0;
}