//
// Created by uzair on 7/16/22.
//

#include <iostream>
#include "linear/linkedList/List.h"

using namespace std;

int main() {
    List l{};
    cout << "Length: " << l.length() << endl;
    l.insert(10);
    l.insertFirst(5);
    l.insert(20);
    l.insertAt(0, 3);
    l.print();
    cout << "Length: " << l.length() << endl;
    l.replace(5, 7);
    l.replaceFirst(1);
    l.replaceLast(15);
    l.replaceAt(l.length() - 1, 30);
    l.print();
    cout << "Length: " << l.length() << endl;
    l.removeFirst();
    l.removeLast();
    l.removeAt(l.length() - 1);
    l.remove(7);
    cout << "Length: " << l.length() << endl;
    l.print();
    l.insert(10);
    l.insertFirst(5);
    l.insert(20);
    l.insertAt(0, 3);
    int i = 0;
    while (i < l.length())
        cout << l.get(i++) << endl;
    return 0;
}