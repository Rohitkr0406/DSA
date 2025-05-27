# Check for Balanced Tree

**Problem Link:** [Check for Balanced Tree on GeeksforGeeks](https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1)

**Difficulty:** Easy

## Problem Statement

Given a binary tree, determine if it is **height-balanced**.

A binary tree is considered **height-balanced** if for every node in the tree, the absolute difference in the heights of its left and right subtrees is at most 1.

## Examples

**Example 1:**

Input:1/   10    39/5Output: True**Explanation:** The height difference between the left and right subtrees at all nodes is at most 1. Hence, the tree is balanced.
_(Note: The GFG visual for this example might differ slightly, but the core idea is a balanced tree. The example `root[] = [10, 20, 30, 40, 60]` from GFG also results in `true`.)_

**Example 2:**

Input:10/20/30Output: False**Explanation:** The height difference between the left and right subtrees at node 10 is 2 (left subtree height 2, right subtree height 0), which exceeds 1. Hence, the tree is not balanced.
_(Corresponds to GFG example like `root[] = [1, 2, N, N, 3]` which gives `false` or `root[] = [1, 2, 3, 4, N, N, N, 5]` which also gives `false`.)_


**Example from GFG:**

**Input:**
root[] = [1,2,3,4,N,N,N,5]Diagram:1/ 2   3/4/5**Output:** `false`
**Explanation:** The height difference between the left and right subtrees at node 2 is 2 (left subtree height 2, right subtree height 0), which exceeds 1. Hence, the tree is not balanced.

## Your Task

You don't need to read input or print anything. Your task is to complete the function `isBalanced()` which takes the `root` of the binary tree as its input and returns `true` if the tree is balanced, and `false` otherwise.

## Constraints

* `0 <= number of nodes <= 5000`
* `-10^4 <= Node->data <= 10^4`

## Expected Time Complexity
* O(N), where N is the number of nodes in the tree.

## Expected Auxiliary Space
* O(H), where H is the height of the tree.
