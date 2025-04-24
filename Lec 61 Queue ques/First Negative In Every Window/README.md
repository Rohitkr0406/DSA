# [First negative integer in every window of size k - GeeksforGeeks](https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1)

## Problem Statement

Given an array `A[]` of size `N` and a positive integer `K`, find the first negative integer for each and every window(contiguous subarray) of size `K`.

If a window does not contain a negative integer, then print `0` for that window.

### Example 1:
**Input:**
```
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
```

**Output:**
```
-8 0 -6 -6
```

### Example 2:
**Input:**
```
N = 8
A[] = {12, -1, -7, 8, -15, 30, 16, 28}
K = 3
```

**Output:**
```
-1 -1 -7 -15 -15 0
```

## Constraints

- `1 <= N <= 10^5`
- `-10^5 <= A[i] <= 10^5`
- `1 <= K <= N`

## Expected Time Complexity
- **O(N)**

## Expected Auxiliary Space
- **O(K)**
