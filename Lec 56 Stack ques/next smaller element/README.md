## [Next Smaller Element](https://www.naukri.com/code360/problems/next-smaller-element_1112581)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

---

### Problem Statement:
Given an array of integers, for each element, find the next smaller element in the right side of the array. If there is no smaller element, return -1 for that position.

---

### Example 1:
**Input:**
```
arr = [2, 1, 4, 3]
```
**Output:**
```
[1, -1, 3, -1]
```

**Explanation:**
- The next smaller element for `2` is `1`.
- The next smaller element for `1` does not exist.
- The next smaller element for `4` is `3`.
- The next smaller element for `3` does not exist.

---

### Example 2:
**Input:**
```
arr = [5, 7, 2, 8, 3]
```
**Output:**
```
[2, 2, -1, 3, -1]
```

**Explanation:**
- The next smaller element for `5` is `2`.
- The next smaller element for `7` is `2`.
- The next smaller element for `2` does not exist.
- The next smaller element for `8` is `3`.
- The next smaller element for `3` does not exist.

---

### Constraints:
- `1 <= N <= 10^5`
- `-10^9 <= arr[i] <= 10^9`

The solution must be efficient in handling large inputs.

---

### Tags:
- Stack
- Monotonic Stack
- Array

