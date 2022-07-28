//
// Created by uzair on 7/16/22.
//

#include <iostream>
#include "linear/linkedList/DList.h"

using namespace std;

int main() {
    DList list;
    list.insertFirst(5);
    list.insert(10);
    list.insertFirst(2);
    list.insert(15);
    list.print();
    cout << "List[2]: " << list.get(2) << endl;
    list.removeAt(2);
    list.remove(15);
    list.print();
    cout << "Reverse: " << endl;
//    list.reverse();
    list.print();
    return 0;
}