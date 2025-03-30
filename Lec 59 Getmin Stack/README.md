# [Design a Stack that Supports GetMin in O(1) Time and O(1) Extra Space](https://www.naukri.com/code360/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465)

## Problem Statement
Design a stack that supports the following operations in **O(1) time complexity** and **O(1) extra space**:

- `push(x)`: Inserts an element `x` into the stack.
- `pop()`: Removes and returns the top element of the stack.
- `top()`: Returns the top element of the stack without removing it.
- `getMin()`: Returns the minimum element in the stack.

## Constraints
- The stack should use **O(1) extra space**.
- All operations should be performed in **O(1) time complexity**.
- The stack stores integer values.

## Example
### **Input:**
```cpp
push(10);
push(20);
push(5);
getMin(); // Returns 5
pop();
getMin(); // Returns 10
```
### **Output:**
```
5
10
```

## Approach
The problem can be efficiently solved by maintaining an optimized way to track the minimum value in the stack. Various techniques such as using a **modified push operation** or **storing the difference between values** can be used to ensure constant space and time complexity.

---

