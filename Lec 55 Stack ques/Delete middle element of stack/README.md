# Delete Middle Element from Stack

## Problem Statement
Given a stack with `N` elements, the task is to delete the **middle element** from the stack without using any additional data structure (like another stack or array). The middle element is defined as the `(N/2)th` element when `N` is **1-based indexed**.

## Example
### Input:
```cpp
stack = [1, 2, 3, 4, 5]
```

### Output:
```cpp
stack = [1, 2, 4, 5]
```

### Explanation:
- The middle element is `3`, which is removed from the stack.

## Constraints:
- `1 <= N <= 10^5`
- The stack contains only integer values.

## Expected Time Complexity:
- **O(N)** (Recursive approach)

## Expected Space Complexity:
- **O(N)** (due to recursion call stack)

## Approach
- Use **recursion** to traverse the stack until the middle element is reached.
- Remove the middle element and reconstruct the stack by backtracking.

## Notes
- The function should modify the stack **in-place**.
- You are not allowed to use extra data structures like arrays or another stack.