# Height of Binary Tree

**Problem Link:** [Height of Binary Tree on GeeksforGeeks](https://www.geeksforgeeks.org/problems/height-of-binary-tree/1)

**Difficulty:** Easy

## Problem Statement

Given a binary tree, find its **height**.

The height of a tree is defined as the number of **edges** on the longest path from the **root node** to a **leaf node**. A leaf node is a node that does not have any children. If the tree is empty (root is NULL), the height is considered -1. If the tree has only one node (root is a leaf), the height is 0.

## Examples

**Example 1:**

Input:1/   10    39/5Output: 2**Explanation:** The longest path from the root (node 1) is 1 -> 10 -> 5. This path has 2 edges.
_(Corresponds to GFG example `root[] = [12, 8, 18, 5, 11]` which outputs `2`)_

**Example 2:**

Input:21/3Output: 2**Explanation:** The longest path from the root (node 2) is 2 -> 1 -> 3. This path has 2 edges.
_(Note: The GFG problem defines height in terms of edges. Some definitions count nodes, which would yield a height of 3 for this example. GFG's definition means a single node tree has height 0.)_

**Another GFG Example:**
Input:root[] = [1, 2, 3, 4, N, N, 5, N, N, 6, 7]Diagram:1/ 2   3/     4       5/ 6   7Output: 3**Explanation:** The longest path from the root (node 1) to a leaf node (e.g., node 6 or 7) has 3 edges (e.g., 1 -> 2 -> 4 -> 6).

## Your Task

You don't need to read input or print anything. Your task is to complete the function `height()` which takes the `root` of the binary tree as its input and returns an integer representing the height of the tree.

## Constraints

* `1 <= Number of nodes <= 10^5`
* `0 <= Node->data <= 10^5`

## Expected Time Complexity
* O(N), where N is the number of nodes in the tree.

## Expected Auxiliary Space
* O(N) in the worst case (skewed tree due to recursion stack), O(H) in general where H is the height of the tree.
