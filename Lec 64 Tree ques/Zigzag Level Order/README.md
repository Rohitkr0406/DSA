# 🌲 ZigZag Tree Traversal - GeeksforGeeks

[🔗 Problem Link](https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1)

## 📜 Problem Statement

Given a Binary Tree, your task is to return the zigzag level order traversal of its nodes’ values.
(Also known as Spiral Order traversal).

In zigzag traversal:

* The first level is traversed from **left to right**
* The second level from **right to left**
* The third from **left to right**, and so on…

Basically: alternate the direction with each level 🔀

---

## 🧠 Input

* A single line containing a space-separated string representing the binary tree in **level order**.
* 'N' represents a null child.

---

## 📄 Output

* A vector (or list) of integers representing the node values in zigzag level order.

---

## ✅ Example

### Input:

```
        1
      /   \
     2     3
    / \   / \
   4   5 6   7
```

### Output:

```
1 3 2 4 5 6 7
```

---

## 🛠️ Approach

1. **Breadth-First Search (BFS)** using a Queue.
2. Use a \*\*flag \*\***`leftToRight`** to toggle direction on each level.
3. For each level:

   * Create a temp vector `ans` of size = number of nodes at current level.
   * Place node values at correct indices:

     * If `leftToRight` → index = i
     * Else → index = size - i - 1
   * Push left and right children to the queue.
4. Flip `leftToRight` after each level.
5. Append `ans` to final result vector.

---

## ⏱️ Time & Space Complexity

* **Time Complexity:** `O(N)`
  Every node is visited once.

* **Space Complexity:** `O(N)`
  Queue + level vector store nodes level by level.

---

## 📚 Tags

* Binary Tree 🌳
* BFS / Level Order
* Stack/Queue 🧺
* Zigzag / Spiral Traversal
* Interview Favorite 🧠

---

## 💡 Extra Tips

* Perfect question to master **alternate level logic**.
* You can also solve this using **two stacks**, but the queue+direction toggle method is cleaner.

---

## 🧪 Test It

Input:

```
         1
       /   \
      2     3
     / \   / \
    4   5 6   7
   /           \
  8             9 	
```

Output:

```
1 3 2 4 5 6 7 9 8
```

---
