## [Minimum Cost to Make String Valid](https://www.naukri.com/code360/problems/minimum-cost-to-make-string-valid_1115770)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange)

---

### Problem Statement

You are given a string `s` consisting of only opening `{` and closing `}` curly brackets. Your task is to determine the **minimum cost** required to make the string **valid**. A string is valid if every opening bracket `{` has a corresponding closing bracket `}` in the correct order.

In one operation, you can:
- Convert `{` to `}` or vice versa. Each operation has a cost of **1**.

Return the **minimum cost** required to make the given string valid.

---

### Example 1:
#### Input:
```
s = "{{{{}}"
```
#### Output:
```
3
```
#### Explanation:
- The given string has **4** opening brackets `{` and **1** closing bracket `}`.
- To balance the brackets, the minimum number of operations required is **3**.

---

### Example 2:
#### Input:
```
s = "{}{}"
```
#### Output:
```
0
```
#### Explanation:
- The given string is already valid, so no operations are needed.

---

### Constraints:
- `1 <= s.length <= 10^5`
- `s` consists of only `{` and `}` characters.

---

