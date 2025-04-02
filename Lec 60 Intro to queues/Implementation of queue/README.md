# [Queue Using Array or Singly Linked List](https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908)

## Problem Statement
Implement a **Queue** data structure using either an **array** or a **singly linked list**. The queue should support the following operations:

- **`enqueue(int data)`** → Insert an element at the rear of the queue.
- **`dequeue()`** → Remove and return the front element of the queue. If the queue is empty, return `-1`.
- **`isEmpty()`** → Check if the queue is empty.
- **`front()`** → Return the front element of the queue without removing it. If the queue is empty, return `-1`.

## Constraints
- Use an **array** or a **singly linked list** to implement the queue.
- The queue should operate in **FIFO (First In, First Out) order**.
- Handle edge cases such as an empty queue.

## Expected Time Complexity
- Each operation should run in **O(1)** time complexity.

## Example Usage
```cpp
Queue q;
q.enqueue(5);
q.enqueue(10);
cout << q.front();  // Output: 5
q.dequeue();
cout << q.front();  // Output: 10
```

## Notes
- Ensure proper handling of an **empty queue** in `dequeue()` and `front()` functions.
- If using an **array-based implementation**, take care of resizing or handling overflow.
- If using a **linked list**, ensure proper memory allocation and deallocation.

