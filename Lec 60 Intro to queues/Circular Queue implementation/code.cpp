#include <iostream>
using namespace std;

class CircularQueue{
    public:
        int *arr, front, rear, size;
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
         if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
            //cout << "Queue is Full";
            return false;
        }
        else if(front == -1) //first element to push
        {
			front = rear = 0;
            
        }
        else if(rear == size-1 && front != 0) {
            rear = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
        
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
         if(front == -1){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }
};

// Driver code
int main(){
    CircularQueue q(5);
    cout << q.enqueue(1) << endl; // 1
    cout << q.enqueue(2) << endl; // 1
    cout << q.enqueue(3) << endl; // 1
    cout << q.enqueue(4) << endl; // 1
    cout << q.enqueue(5) << endl; // 1
    cout << q.enqueue(6) << endl; // 0 (false)
    cout << q.dequeue() << endl; // 1
    cout << q.dequeue() << endl; // 2
    cout << q.dequeue() << endl; // 3
    cout << q.dequeue() << endl; // 4
    cout << q.dequeue() << endl; // 5
    cout << q.dequeue() << endl; // -1 (queue is empty)
    return 0;
}