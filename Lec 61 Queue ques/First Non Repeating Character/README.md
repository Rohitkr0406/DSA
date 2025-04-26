# [First non-repeating character in a stream - GeeksforGeeks](https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1)

## Problem Statement

Given an input stream of `A` of `n` characters consisting only of lowercase characters. The task is to find the first non-repeating character, each time a character is inserted to the stream. If no non-repeating character is found, add `#` to the answer.

### Example 1:
**Input:**
```
A = "aabc"
```

**Output:**
```
a#bb
```

**Explanation:**
- After reading 1st character, the first non-repeating character is `a`.
- After reading 2nd character, there are two `a`s, so no non-repeating character: `#`.
- After reading 3rd character, the first non-repeating character is `b`.
- After reading 4th character, the first non-repeating character is still `b`.

### Example 2:
**Input:**
```
A = "zz"
```

**Output:**
```
z#
```

## Constraints

- `1 <= n <= 10^5`
- `A[i]` is a lowercase letter

## Expected Time Complexity
- **O(n)**

## Expected Auxiliary Space
- **O(1)**
