# 🌳 Boundary Traversal of Binary Tree - GeeksforGeeks

🔗 [Problem Link](https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1)

---

## 📝 Problem Statement

Given a binary tree, your task is to return a list of nodes representing its boundary traversal in an anti-clockwise direction, starting from the root.

The boundary includes:

1. **Left Boundary**: Nodes on the path from the root to the left-most leaf node (excluding leaf nodes).
2. **Leaf Nodes**: All leaf nodes from left to right.
3. **Right Boundary**: Nodes on the path from the right-most leaf node to the root (excluding leaf nodes), traversed in reverse order.

---

## 📥 Input

* A single line containing a space-separated string representing the binary tree in level order.
* 'N' represents a null child.

---

## 📤 Output

* A list of integers representing the node values in boundary traversal order.

---

## 📌 Constraints

* Number of nodes: 1 ≤ N ≤ 10^5
* Node values: 1 ≤ Node Value ≤ 10^5

---

## ✅ Example

### Input:

```
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
        / \
       8   9
```

### Output:

```
1 2 4 8 9 6 7 3
```

**Explanation:**

* **Left Boundary**: 2 → 4
* **Leaf Nodes**: 8, 9, 6, 7
* **Right Boundary**: 3 (in reverse)

Combined: 1 (root) → Left Boundary → Leaf Nodes → Right Boundary (reversed)

---

## 🧠 Approach Overview

1. **Left Boundary Traversal**:

   * Start from the root's left child.
   * Traverse down the left edge, preferring left children over right.
   * Exclude leaf nodes to avoid duplication.

2. **Leaf Nodes Traversal**:

   * Perform an in-order traversal.
   * Collect all leaf nodes (nodes with no children).

3. **Right Boundary Traversal**:

   * Start from the root's right child.
   * Traverse down the right edge, preferring right children over left.
   * Exclude leaf nodes.
   * Collect nodes in a stack to reverse the order before appending.

---

## ⏱️ Time & Space Complexity

* **Time Complexity**: O(N)

  * Each node is visited once.

* **Space Complexity**: O(H)

  * H is the height of the tree, due to recursive stack space.

---

## 🍿 Tags

* Binary Tree 🌲
* Tree Traversal 🔄
* Boundary Traversal 🧽
* Recursion 🔁
* Interview Question 💼

---

## 💡 Extra Tips

* Ensure that leaf nodes are not included in both left and right boundaries.
* Using separate functions for left boundary, leaves, and right boundary can make the code cleaner and more maintainable.
* Be cautious with skewed trees; ensure that the traversal doesn't miss any nodes.

---

## 🧪 Test Cases

### Test Case 1:

**Input:**

```
1 2 3 4 5 6 7 N N 8 9 N N N N
```

**Output:**

```
1 2 4 8 9 6 7 3
```

### Test Case 2:

**Input:**

```
1 2 N 4 9 6 5 N 3 N N N N 7 8
```

**Output:**

```
1 2 4 6 5 7 8
```

---
