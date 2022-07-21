//
// Created by uzair on 7/16/22.
//

#include <iostream>
#include <linear/queue/PriorityQueue.h>

using namespace std;

int main() {
    PriorityQueue pq;
    pq.enqueue(10);
    pq.enqueue(2);
    pq.enqueue(5);
    pq.enqueue(1);
    pq.enqueue(8);
    pq.print();
    pq.dequeue();
    pq.print();
    pq.enqueue(9);
    pq.print();
    pq.dequeue();
    pq.print();
    cout << "High: " << pq.getHigh() << endl;
    cout << "Low: " << pq.getLow() << endl;
    cout << "Length: " << pq.length() << endl;
    cout << "Max Size: " << pq.size() << endl;
    return 0;
}