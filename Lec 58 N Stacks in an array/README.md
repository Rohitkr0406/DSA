# [N Stacks in an Array](https://www.naukri.com/code360/problems/n-stacks-in-an-array_1164271)

![Difficulty: Hard](https://files.codingninjas.in/codestudio/problems/n-stacks-in-an-array-1164271.png)

## Problem Statement
You are given an array of size `S` and `N` number of stacks. Your task is to implement the following operations efficiently:

1. **push(X, M):** Pushes the integer `X` into the `M`-th stack.
2. **pop(M):** Pops the top element from the `M`-th stack and returns it.

If the stack is full, `push` operation should not insert the element. If the stack is empty, `pop` operation should return `-1`.

## Constraints
- `1 <= N <= 100`
- `1 <= S <= 10^6`
- `1 <= X <= 10^9`
- The operations must be efficient in both time and space.

## Example
### **Input:**
```
N = 3, S = 6
push(10, 1)
push(20, 1)
push(30, 2)
pop(1)
pop(2)
pop(3)
```
### **Output:**
```
20
30
-1
```
### **Explanation:**
- `push(10, 1)`, `push(20, 1)`: Stack 1 now contains [10, 20].
- `push(30, 2)`: Stack 2 now contains [30].
- `pop(1)`: Removes 20 from Stack 1.
- `pop(2)`: Removes 30 from Stack 2.
- `pop(3)`: Stack 3 is empty, so it returns `-1`.

<img src="https://files.codingninjas.in/10101-sample-1-7923.PNG" alt="Sample Input and Output" width="600"/>

## Approach
The problem requires an efficient way to manage multiple stacks within a single array. The solution must optimize space utilization and ensure constant time insertion and deletion.

---

### **Note:**
This README does not include the solution. Try solving the problem yourself! 🚀