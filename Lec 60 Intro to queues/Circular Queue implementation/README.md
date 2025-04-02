# [Circular Queue](https://www.naukri.com/code360/problems/circular-queue_1170058)

## Problem Statement
Implement a **Circular Queue** with the following operations:
- **Enqueue(X)**: Inserts an element `X` into the queue. Returns `true` if the operation is successful, otherwise returns `false` if the queue is full.
- **Dequeue()**: Removes and returns the front element of the queue. Returns `-1` if the queue is empty.

The queue should follow **FIFO (First In, First Out)** principles and maintain **circular behavior** to efficiently utilize available space.

## Constraints
- The queue has a **fixed size** `N`.
- Operations must be performed in **O(1) time complexity**.
- The queue must wrap around when elements are inserted or removed.

## Example
### **Input:**
```plaintext
CircularQueue cq(5);
cq.enqueue(10);  // Returns true
cq.enqueue(20);  // Returns true
cq.enqueue(30);  // Returns true
cq.dequeue();    // Returns 10
cq.enqueue(40);  // Returns true
cq.enqueue(50);  // Returns true
cq.enqueue(60);  // Returns false (Queue is full)
```

### **Output:**
```plaintext
true true true 10 true true false
```

## Expected Functionality
### **Constructor:**
```cpp
CircularQueue(int n);
```
Initializes the queue with size `n`.

### **Enqueue Operation:**
```cpp
bool enqueue(int value);
```
- Inserts `value` into the queue.
- Returns `true` if insertion is successful.
- Returns `false` if the queue is full.

### **Dequeue Operation:**
```cpp
int dequeue();
```
- Removes and returns the front element.
- Returns `-1` if the queue is empty.

## Notes
- The **front pointer** keeps track of the first element.
- The **rear pointer** keeps track of the last inserted element.
- When `rear` reaches the end, it wraps around to `0` (circular behavior).
- If `front == rear`, the queue is empty.

## Tags
`Queue` `Circular Queue` `Data Structures` `FIFO`
