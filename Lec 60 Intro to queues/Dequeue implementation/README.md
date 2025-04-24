# [Deque (Double-Ended Queue)](https://www.naukri.com/code360/problems/deque_1170059)

## **Introduction**

A **Deque (Double-Ended Queue)** is a linear data structure that allows insertion and deletion from **both front and rear** ends. Unlike a normal queue (FIFO structure), deque provides more flexibility by enabling operations at both ends.

## **Operations Supported**

1. **Push Front(X)** – Inserts an element `X` at the front.
2. **Push Rear(X)** – Inserts an element `X` at the rear.
3. **Pop Front()** – Removes and returns the front element. Returns `-1` if empty.
4. **Pop Rear()** – Removes and returns the rear element. Returns `-1` if empty.
5. **Get Front()** – Retrieves the front element without removing it.
6. **Get Rear()** – Retrieves the rear element without removing it.
7. **Is Empty()** – Checks if the deque is empty.
8. **Is Full()** – Checks if the deque is full.

## **Constraints**

- The maximum size of the deque is predefined.
- Insertions and deletions must follow the constraints of a deque.

## **Example Workflow**

```plaintext
Push Front(10)
Push Rear(20)
Push Front(5)
Get Front() → 5
Pop Front() → 5
Pop Rear() → 20
Is Empty() → false
```

## **Applications of Deque**

- Implementing **Sliding Window Maximum** problems.
- **Palindrome checking** (by comparing elements from both ends).
- Used in **job scheduling** where elements can be added/removed from either side.


