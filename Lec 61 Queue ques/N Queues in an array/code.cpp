#include<iostream>
using namespace std;

class NQueue
{
    int n, s, *arr, *front, *rear, *next, freespot;

    public:
        NQueue(int N, int S)//N = number of queues, S = size of array
        {
            //initializing the variables
            n = N;
            s = S;
            arr = new int[s];   
            next = new int[s];// to store the next index of the array
            front = new int[n];// to store the front index of each queue
            rear = new int[n];// to store the rear index of each queue

            freespot = 0;
            
            for(int i = 0; i < n; i++) {
                front[i] = -1;
                rear[i] = -1;
            }
        
            // Destructor to free allocated memory
            ~NQueue()
            {
                delete[] arr;
                delete[] front;
                delete[] rear;
                delete[] next;
            }

            for(int i = 0; i < s; i++) {
                next[i] = i + 1;
            }
            next[s-1] = -1;
        }

        // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise (e.g., when the queue is full and no free spot is available).
        bool enqueue(int x, int m)
        {
            if(freespot == -1){
                return false;
            }

            int index = freespot;

            arr[index] = x;

            freespot = next[index];

            if(front[m-1] == -1) {
                front[m-1] = index;
            } else {
                next[rear[m-1]] = index;
            }

            next[index] = -1;
            rear[m-1] = index;

            return true;
        }

        // Dequeues the front element from the Mth queue. If the queue is empty, it returns -1. Otherwise, it returns the dequeued element.
        int dequeue(int m)
        {
            if(m < 1 || m > n) {// Check if m is within valid range
                return -1;
            }

            if(front[m-1] == -1) {// Check if the queue is empty
                return -1;
            }

            int index = front[m-1];
            front[m-1] = next[index];
            next[index] = freespot;
            freespot = index;

            if(front[m-1] == -1) {// If the queue is now empty, set rear to -1
                rear[m-1] = -1;
            }

            return arr[index];// Return the dequeued element
        }
    }