# NQueue Implementation (Multiple Queues in a Single Array)

This project involves implementing **N Queues** in a **single array** efficiently. The structure makes use of auxiliary arrays and a freespot pointer to manage multiple queues dynamically.

---

## Problem Statement

You are given `N` queues and a total size of `S` for the shared array. Implement a class `NQueue` with the following operations:

### 1. Constructor: `NQueue(int N, int S)`

- Initialize the data structures needed to manage N queues inside a single array of size S.

### 2. Enqueue Operation: `bool enqueue(int x, int m)`

- Insert an element `x` into the `m`-th queue.
- Return `true` if the operation is successful.
- Return `false` if there is no available free space in the array.

### 3. Dequeue Operation: `int dequeue(int m)`

- Remove the front element from the `m`-th queue.
- Return the dequeued element.
- Return `-1` if the `m`-th queue is empty.

---

## Questions to Consider

- How would you manage multiple queues dynamically within a single array without allocating fixed space to each queue?
- How would you track which array indexes are free or occupied?
- How would you link elements belonging to the same queue?
- What happens to the freed spots when you dequeue an element?
- How would you update the `front` and `rear` pointers for each queue after an enqueue or dequeue operation?
- How would you check if the array is completely full or if a particular queue is empty?
- How does the `next` array help in efficiently managing multiple queues?

---

> **Note:** No predefined data structures like STL queues are allowed. Implement everything manually using arrays and pointers.

---

## Additional Challenge

- Implement a destructor to free all dynamically allocated memory.
- Handle invalid queue numbers gracefully.

---
