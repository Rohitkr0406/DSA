# Diameter of a Binary Tree

**Problem Link:** [Diameter of a Binary Tree on GeeksforGeeks](https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1)

**Difficulty:** Medium

## Problem Statement

Given a binary tree, you need to compute the length of the **diameter** of the tree. The diameter of a binary tree is the length of the **longest path** between any two nodes in a tree. This path may or may not pass through the root.

**Note:** The length of a path between two nodes is represented by the number of edges between them.

## Examples

**Example 1:**

Input:1/  2    3Output: 2**Explanation:** The longest path is from node 2 to node 3 (2 -> 1 -> 3), which has 2 edges.

**Example 2:**

Input:10/   20     30/   40    60Output: 3**Explanation:** The longest path is from node 40 to node 30 (40 -> 20 -> 10 -> 30) or 60 to 30 (60 -> 20 -> 10 -> 30), which has 3 edges.

**Another GFG Example:**
Input:root[] = [5, 8, 6, 3, 7, 9]Diagram:5/ 8   6/ \ /3  7 9Output: 4**Explanation:** The longest path has 4 edges (e.g., node 3 -> node 8 -> node 5 -> node 6 -> node 9).

## Your Task

You don't need to read input or print anything. Your task is to complete the function `diameter()` which takes the `root` of the binary tree as its input and returns an integer representing the diameter of the tree.

## Constraints

* `1 ≤ Number of nodes ≤ 10^5`
* `0 ≤ Node->data ≤ 10^5`

## Expected Time Complexity
* O(N), where N is the number of nodes in the tree.

## Expected Auxiliary Space
* O(H), where H is the height of the tree. (This is for the recursion stack. If we consider the space used to store the tree itself, it would be O(N)).
