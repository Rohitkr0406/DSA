#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class NStack
{
    int n, s, *arr, *top, *next, freespot;

public:
    NStack(int N, int S)//N = number of stacks, S = size of array
    {
        //initializing the variables
        n = N;
        s = S;
        arr = new int[s];   
        next = new int[s];// to store the next index of the array
        top = new int[n];// to store the top index of each stack

        freespot = 0;
        
        for(int i = 0; i < n; i++) {
            top[i] = -1;
        }
    
        // Destructor to free allocated memory
        ~NStack()
        {
            delete[] arr;
            delete[] top;
            delete[] next;
        }

        for(int i = 0; i < s; i++) {
            next[i] = i + 1;
        }
        next[s-1] = -1;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise (e.g., when the stack is full and no free spot is available).
    bool push(int x, int m)
    {
        if(freespot == -1){
            return false;
        }

        int index = freespot;

        arr[index] = x;

        freespot = next[index];

        next[index] = top[m-1];

        top[m-1] = index;

        return true;
    }

    // Pops the top element from the Mth stack. If the stack is empty, it returns -1. Otherwise, it returns the popped element.
    int pop(int m)
    {
        if(m < 1 || m > n) {
            return -1;
        }

        if(top[m-1] == -1){
            return -1;
        }

        int index = top[m-1];

        top[m-1] = next[index];

        next[index] = freespot;

        freespot = index;

        return arr[index];
    }
};

// Driver code
int main() {
    int n = 3, s = 10;
    NStack ns(n, s);
    
    ns.push(1, 1);
    ns.push(2, 1);
    ns.push(3, 2);
    ns.push(4, 3);
    
    std::cout << "Popped from stack 1: " << ns.pop(1) << std::endl; // Should return 2
    std::cout << "Popped from stack 2: " << ns.pop(2) << std::endl; // Should return 3
    std::cout << "Popped from stack 3: " << ns.pop(3) << std::endl; // Should return 4
    
    return 0;
}