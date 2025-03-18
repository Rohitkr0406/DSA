## [Sort a Stack](https://www.naukri.com/code360/problems/sort-a-stack_985275)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange)

---

### Problem Statement

Given a stack of integers, your task is to sort it in ascending order using recursion. You are not allowed to use any additional data structures like arrays or another stack.

You must modify the given stack in place such that the smallest element is at the top and the largest element is at the bottom.

### Example 1:

#### **Input:**
```
stack = [3, 1, 4, 2]
```

#### **Output:**
```
stack = [1, 2, 3, 4]
```

### Example 2:

#### **Input:**
```
stack = [5, -2, 9, -7, 3]
```

#### **Output:**
```
stack = [-7, -2, 3, 5, 9]
```

### Constraints:
- The stack can contain **negative** numbers.
- You can only use recursion for sorting the stack.
- You **cannot** use any extra data structures.

---

### Expected Time Complexity:
- **O(N²)** in the worst case scenario, where `N` is the number of elements in the stack.
- **O(N)** auxiliary space due to recursive calls.

