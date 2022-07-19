//
// Created by uzair on 7/16/22.
//

#include "linear/Stack.h"

using namespace std;

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();
    s.pop();
    s.print();
    cout << s.peek();
    return 0;
}