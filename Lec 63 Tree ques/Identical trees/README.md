```markdown
# Determine if Two Trees are Identical

## Problem Statement

Given the roots of two binary trees, `r1` and `r2`, your task is to check if they are **identical** or not.

Two binary trees are considered identical if they meet the following conditions:
1.  They are **structurally identical** (i.e., they have the same shape or arrangement of nodes).
2.  The **corresponding nodes** in both trees have the same data values.

## Examples

### Example 1:

**Input:**
Tree 1:
```
  1
 / \
2   3
```
Tree 2:
```
  1
 / \
2   3
```
**Output:** `true`
**Explanation:** Both trees have the same structure, and the data at corresponding nodes is also the same.

### Example 2:

**Input:**
Tree 1:
```
  1
 / \
2   3
```
Tree 2:
```
  1
 / \
3   2
```
**Output:** `false`
**Explanation:** Although the trees have the same nodes, their structure is different (the values of the left and right children of the root are swapped).

### Example 3 (from GFG):

**Input:**
Tree 1 (`r1`):
```
1
 \
  2
```
Tree 2 (`r2`):
```
  1
 /
2
```
**Output:** `false`
**Explanation:** Although both trees have the same node values (1 and 2), they are arranged differently, making the trees non-identical.

---

## Your Task

You don't need to read input or print anything. Your task is to complete the function `isIdentical()` which takes two roots, `r1` and `r2`, as parameters and returns `true` if the trees are identical, and `false` otherwise.

---

## Constraints

* `0 <= Number of nodes <= 100` (Considering the most restrictive common constraint from similar problems, including empty trees)
* `1 <= Data of a node <= 1000`

---

## Expected Time Complexity

* `O(N)`, where `N` is the number of nodes in the smaller tree (or `min(N1, N2)` where `N1` and `N2` are the number of nodes in tree1 and tree2 respectively). This is because we traverse both trees simultaneously, stopping as soon as a difference is found or both trees are fully traversed.

---

## Expected Auxiliary Space

* `O(H)`, where `H` is the height of the smaller tree (or `min(H1, H2)`). This space is used for the recursion call stack. In the worst case (e.g., a skewed tree), the height `H` can be equal to the number of nodes `N`, leading to `O(N)` auxiliary space.
```