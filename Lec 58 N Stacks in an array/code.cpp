#include <bits/stdc++.h> 
class NStack
{
    int n, s, *arr, *top, *next, freespot;

public:
    NStack(int N, int S)
    {
        //initializing the variables
        n = N;
        s = S;
        arr = new int[s];   
        next = new int[s];   
        top = new int[n];

        freespot = 0;
        
        for(int i=0; i<n; i++){
            top[i] =-1;
        }

        for(int i=0; i<s; i++){
            next[i] = i + 1;
        }
        next[s-1] = -1;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
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

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
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