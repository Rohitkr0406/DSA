# [The Celebrity Problem](https://www.geeksforgeeks.org/problems/the-celebrity-problem/1)

![Difficulty: Medium](https://camo.githubusercontent.com/176ec7c488abb3e7a96dcbd9e6be47ba062d84e8a79dbdc3497d1aed1439811a/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f446966666963756c74792d4d656469756d2d6f72616e6765)

## Problem Statement
Given a `N x N` matrix **M** representing a party scenario where **M[i][j] = 1** means person `i` knows person `j`, and **M[i][j] = 0** means person `i` does not know person `j`. A **celebrity** is defined as someone who:

1. **Is known by everyone** (except themselves).
2. **Does not know anyone** at the party.

Your task is to determine if there is a celebrity present. If there is, return their index; otherwise, return `-1`.

## Constraints
- `1 <= N <= 100`
- `M[i][i] = 0` (A person cannot know themselves)
- **There can be at most one celebrity** in the party.

## Example
### **Input:**
```
N = 3
M = [[0, 1, 0],
     [0, 0, 0],
     [0, 1, 0]]
```
### **Output:**
```
1
```
### **Explanation:**
- Person `1` is known by persons `0` and `2`.
- Person `1` does not know anyone else.
- Therefore, **Person 1 is the celebrity**.

## Approach
You can solve this problem efficiently using a **stack-based** or **two-pointer approach**, reducing the brute-force `O(N^2)` complexity to `O(N)`. The goal is to efficiently identify the potential celebrity and verify them based on the given conditions.

---

