## [Redundant Brackets](https://www.naukri.com/code360/problems/redundant-brackets_975473)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-orange)

---

### Problem Statement
Given a **mathematical expression** in the form of a string **`s`**, your task is to determine **whether it contains any redundant brackets**.

A set of brackets is considered **redundant** if it does not contribute to the overall **evaluation** of the expression. In other words, an operator must be present between a pair of brackets for them to be **useful**.

---

### Example 1
**Input:**
```
s = "(a + (b / c))"
```
**Output:**
```
false
```
**Explanation:**
- The brackets around `(b / c)` are necessary, so they are **not redundant**.

---

### Example 2
**Input:**
```
s = "((a + b))"
```
**Output:**
```
true
```
**Explanation:**
- The outermost brackets are **redundant**, as removing them does not affect the expression.

---

### Constraints
- `1 <= |s| <= 10^4`
- `s` consists of **lowercase English letters**, **operators** (`+`, `-`, `*`, `/`), and **parentheses** (`(`, `)`).

---

### Notes
- The expression will always be **valid**.
- The goal is to **detect unnecessary brackets** that do not change the meaning of the expression.

---