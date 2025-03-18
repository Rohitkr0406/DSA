## [Two Stacks](https://www.naukri.com/code360/problems/two-stacks_983634)

<img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' />

---

### Problem Statement
You are given an integer array of size `s`, and you need to implement two stacks using this single array. The operations allowed are:

- **Push**: Insert an element into one of the two stacks.
- **Pop**: Remove and return the top element from one of the stacks.

Each stack should operate independently while sharing the same array.

---

### Example 1:

#### **Input:**
```cpp
TwoStack ts(5);
ts.push1(10);
ts.push2(20);
ts.push1(30);
ts.push2(40);
ts.push1(50);
ts.pop1();
ts.pop2();
```

#### **Output:**
```
50
40
```

#### **Explanation:**
- `push1(10)`, `push1(30)`, `push1(50)` push elements into stack 1.
- `push2(20)`, `push2(40)` push elements into stack 2.
- `pop1()` returns 50 (top of stack 1).
- `pop2()` returns 40 (top of stack 2).

---

### Example 2:

#### **Input:**
```cpp
TwoStack ts(3);
ts.push1(5);
ts.push2(10);
ts.push2(15);
ts.push1(20);
ts.pop1();
ts.pop2();
```

#### **Output:**
```
-1
15
```

#### **Explanation:**
- `push1(5)` and `push2(10), push2(15)` successfully push elements.
- `push1(20)` fails due to lack of space.
- `pop1()` returns `-1` (stack underflow for stack 1 after failed push).
- `pop2()` returns `15`.

---

### Constraints:
- `1 ≤ s ≤ 10^3` (Size of the shared array)
- `-10^9 ≤ num ≤ 10^9` (Value range for stack elements)
- Each operation (`push1`, `push2`, `pop1`, `pop2`) must run in **O(1)** time complexity.

---

### Approach:
1. **Use Two Pointers:**
   - Maintain `top1` for stack 1, starting from index `-1`.
   - Maintain `top2` for stack 2, starting from index `size`.
   - These pointers move towards each other as elements are pushed.
   
2. **Overflow Condition:**
   - If `top2 - top1 <= 1`, no space remains for further push operations.
   
3. **Pop Operation:**
   - If `top1 < 0`, stack 1 underflows.
   - If `top2 >= size`, stack 2 underflows.

This ensures that both stacks grow towards each other while sharing the array efficiently.

---

### Follow-Up:
- Can you implement the same logic using **dynamic resizing** for more flexibility?

