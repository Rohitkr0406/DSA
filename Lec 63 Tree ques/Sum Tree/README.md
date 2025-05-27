# 🌳 Sum Tree - GeeksforGeeks

## 🧩 Problem Statement

A **Sum Tree** is a special kind of binary tree where the value of every non-leaf node is equal to the **sum of the values of its left and right subtrees**.

- An empty tree is considered a Sum Tree.
- A leaf node is also considered a Sum Tree.

Your task is to **check whether a given binary tree is a Sum Tree or not**.

---

## 📥 Input

- You are given the root of a binary tree.

---

## 📤 Output

- Return `true` if the binary tree is a **Sum Tree**, otherwise return `false`.

---

## 🧠 Constraints

- `1 ≤ Number of nodes ≤ 10^4`
- `0 ≤ Data of a node ≤ 10^5`

---

## 🛠️ Example

### Input:

    26
   /  \
 10    3
/  \     \
4  6     3


### Output:
True

### Explanation:
The given binary tree is a Sum Tree because:
- The left subtree has a sum of `10 + 4 + 6 = 20`.
- The right subtree has a sum of `3 + 3 = 6`.
- The root node's value `26` is equal to the sum of its left and right subtrees (`20 + 6 = 26`).

### Input:

	10
   /  \
 20    30

### Output:
False

### Explanation:
The given binary tree is not a Sum Tree because:
- The left subtree has a sum of `20`.
- The right subtree has a sum of `30`.
- The root node's value `10` is not equal to the sum of its left and right subtrees (`20 + 30 = 50`).

