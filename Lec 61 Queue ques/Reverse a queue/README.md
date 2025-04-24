# [Queue Reversal - GeeksforGeeks](https://www.geeksforgeeks.org/problems/queue-reversal/1)

## **Problem Statement**
Given a queue of integers, the task is to reverse the queue using recursion.

## **Approach**
To reverse a queue using recursion:
1. **Base Case:** If the queue is empty, return.
2. **Recursive Step:**
   - Remove the front element.
   - Recursively call the function on the remaining queue.
   - Push the removed element back into the queue.

## **Algorithm**
1. If the queue is empty, return.
2. Store the front element and remove it.
3. Recursively call the function on the remaining queue.
4. Push the stored element back.

## **Example**
### **Input:**
```
Queue: [1, 2, 3, 4, 5]
```
### **Output:**
```
Queue: [5, 4, 3, 2, 1]
```

## **Constraints**
- 1 ≤ Queue size ≤ 10⁵
- -10⁶ ≤ Queue elements ≤ 10⁶

## **Complexity Analysis**
- **Time Complexity:** O(N) (Each element is processed once)
- **Space Complexity:** O(N) (Recursive stack space)

## **Applications**
- Used in **Reversing data streams**.
- Helps in **Backtracking problems**.
- Essential for **queue manipulation in system scheduling**.

