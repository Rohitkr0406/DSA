#include <bits/stdc++.h> 
class Deque
{
public:
    // Initialize your data structure.
    int * arr, front, rear, size;

    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;

    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if(isFull()){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
        }
        else{
            front --;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        
        if(isFull()){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(front == -1){//to check queue is empty
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

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(rear == -1){//to check queue is empty
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(rear == 0) {
            rear = size - 1; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }

        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty()){
            return -1;
        }

        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front == 0 && rear == size -1) || ((rear + 1)%size == front)){
            return true;
        }
        else{
            return false;
        }
    }
};

// Driver code
int main() {
    Deque dq(5);
    cout << dq.pushFront(1) << endl; // 1
    cout << dq.pushFront(2) << endl; // 1
    cout << dq.pushRear(3) << endl; // 1
    cout << dq.pushRear(4) << endl; // 1
    cout << dq.pushRear(5) << endl; // 1
    cout << dq.pushRear(6) << endl; // 0 (false)
    cout << dq.popFront() << endl; // 2
    cout << dq.popRear() << endl; // 5
    cout << dq.getFront() << endl; // 1
    cout << dq.getRear() << endl; // 4
    cout << dq.isEmpty() << endl; // 0 (false)
    cout << dq.isFull() << endl; // 0 (false)
    return 0;
}