//
// Created by uzair on 7/16/22.
//

#include <iostream>
#include <linear/queue/Queue.h>

using namespace std;

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.print();
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;
    q.enqueue(40);
    q.enqueue(50);
    q.print();
    cout << "Dequeue: " << q.dequeue() << endl;
    q.print();
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    cout << "Length: " << q.length() << endl;
    cout << "Max Size: " << q.size() << endl;
    cout << "Full: " << q.isFull() << endl;
    cout << "Empty: " << q.isEmpty() << endl;
    q.dequeue();
    q.dequeue();
    cout << "Empty: " << q.isEmpty() << endl;
    return 0;
}