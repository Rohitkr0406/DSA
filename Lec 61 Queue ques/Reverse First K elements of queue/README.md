# [Reverse First K elements of Queue - GeeksforGeeks](https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1)

## Problem Statement

Given an integer `K` and a queue of integers, the task is to reverse the order of the first `K` elements of the queue, leaving the other elements in the same relative order.

Only standard operations of the queue are allowed:
- `enqueue(x)` : Add an item x to rear of queue.
- `dequeue()` : Remove an item from front of queue.
- `size()` : Returns number of elements in queue.
- `front()` : Finds front item.

### Example 1:
**Input:**
```
N = 5, K = 3
Queue = {1, 2, 3, 4, 5}
```

**Output:**
```
3 2 1 4 5
```

### Example 2:
**Input:**
```
N = 4, K = 4
Queue = {4, 3, 2, 1}
```

**Output:**
```
1 2 3 4
```

## Constraints

- `1 <= N <= 10^5`
- `1 <= K <= N`

## Expected Time Complexity
- **O(N)**

## Expected Auxiliary Space
- **O(K)**
