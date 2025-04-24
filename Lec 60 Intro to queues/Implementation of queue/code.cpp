#include <iostream>
using namespace std;

class Queue {
    int *arr, infront, rear, size;
public:
    Queue() {
        size = 1000;
        arr = new int[size];
        infront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return infront == rear;
    }

    void enqueue(int data) {
        if(rear == size)
            return;

        arr[rear++] = data;
    }

    int dequeue() {
        if(isEmpty())
            return -1;

        int ans = arr[infront++];

        if(isEmpty())
            infront = rear = 0;

        return ans;
    }

    int front() {
        if(isEmpty())
            return -1;

        return arr[infront];
    }
};


// Driver code
int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.front() << endl; // 1
    cout << q.dequeue() << endl; // 1
    cout << q.front() << endl; // 2
    cout << q.isEmpty() << endl; // 0 (false)
    cout << q.dequeue() << endl; // 2
    cout << q.dequeue() << endl; // 3
    cout << q.isEmpty() << endl; // 1 (true)
    return 0;
}