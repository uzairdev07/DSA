//
// Created by uzair on 7/16/22.
//

#include "linear/Array.h"

using namespace std;

int main() {
    Array a(10);
    a.insert(10);
    a.insert(20);
    a.insert(30);
    a.insertBegin(5);
    a.insertEnd(40);
    a.insertAt(a.size(), 35);
    a.insertAt(a.size(), 70);
    a.print();
    a.remove(35);
    a.print();
    a.removeBegin();
    a.print();
    a.removeEnd();
    a.print();
    cout << a.get() << endl;
    cout << a.getAt(2) << endl;
    a.removeAt(2);
    a.print();
    a.replace(20, 30);
    a.replaceAt(2, 50);
    if (a.contains(30))
        cout << "True" << endl;
    cout << a;
    return 0;
}