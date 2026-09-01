# Time & Space Complexity — Notes

This file contains notes on **Time Complexity** and **Space Complexity** — definitions, how to calculate them, and worked C++ examples. It will grow as more complexity classes and examples are covered.

---

## What is Time Complexity?

Time complexity measures **how the number of operations a piece of code performs grows as the input size (n) grows** — not the actual time in seconds (which depends on the machine running it).

We express this growth using **Big O notation**, written as `O(...)`. Big O describes the _growth pattern_, not the exact operation count.

**Key idea:** if input size doubles, does the work stay the same, double, or grow much faster? That relationship is what Big O captures.

### Why not measure in seconds?

The same code runs at different speeds on different machines (fast laptop vs. old laptop). Seconds are unreliable. Counting operations — and how that count _scales_ with input — is machine-independent and reliable.

### Why do we usually report the Worst Case?

Code can behave differently depending on the input (e.g. found immediately vs. never found). We report the **worst case** because it's a guaranteed upper bound — "this will never be slower than X" — regardless of how unlucky the input is. Best case and average case exist too, but worst case is the standard default unless stated otherwise.

### Rules for calculating Big O

1. **Drop constants.** `2n`, `3n`, or `n/2` are all still `O(n)` — the constant multiplier doesn't change the growth pattern.
2. **Drop lower-order terms.** `n² + n` becomes `O(n²)` — as n grows large, the `n²` term dominates and the `n` term becomes negligible in comparison.
3. **Only the fastest-growing term survives** in the final Big O expression.

---

## What is Space Complexity?

Space complexity measures **how much extra memory a piece of code needs, as a function of input size (n)** — separate from the input itself.

Just like time complexity, it's expressed in Big O notation, and follows the same idea: how does memory usage grow as n grows?

**Important rule: never count the input itself as extra space.** We only count _additional_ memory the algorithm allocates (extra variables, arrays, data structures created during execution) — not the space the input already occupies.

### Method for finding Space Complexity

1. Identify what extra variables/structures the code creates (not the input).
2. Check if that extra memory is fixed (doesn't grow with n) or grows with n.
3. Fixed extra memory → O(1) space.
4. Memory that grows with n (e.g. a new array of size n) → O(n) space.

---

## Method for Finding Time Complexity (step-by-step)

1. Identify all loops/recursive calls in the code.
2. For each loop, determine how many times it runs, in terms of `n`.
3. For nested loops, multiply the iteration counts together.
4. Add up the total operations across the whole code block.
5. Drop constants and lower-order terms.
6. What remains is the Big O time complexity.

---

## Examples

### O(1) — Constant Time

```cpp
cout << "This line always runs once, no matter the value of n\n";
```

**Explanation:** This runs exactly once regardless of what `n` is. Whether n = 3 or n = 3,000,000, the operation count never changes — it doesn't depend on `n` at all.

| n         | Operations |
| --------- | ---------- |
| 3         | 1          |
| 10        | 1          |
| 1,000,000 | 1          |

**Time Complexity: O(1)**

---

### O(n) — Linear Time

```cpp
for (int i = 0; i < n; i++) {
  cout << "hi";
}
```

**Explanation:** The loop runs from `i = 0` to `i = n-1`, so it executes exactly `n` times. Each iteration does a fixed amount of work (one print), so total work grows in direct 1-to-1 proportion with `n`.

| n   | Operations |
| --- | ---------- |
| 3   | 3          |
| 10  | 10         |
| 100 | 100        |

**Time Complexity: O(n)**

---

### O(n²) — Quadratic Time

```cpp
for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    cout << "hi";
  }
}
```

**Explanation:** The outer loop runs `n` times. For **every single** outer iteration, the inner loop ALSO runs `n` times (not a shrinking/growing count — always the full `n`). Total operations = `n × n = n²`.

| n   | Operations |
| --- | ---------- |
| 3   | 9          |
| 5   | 25         |
| 10  | 100        |

**Time Complexity: O(n²)**

---

## Complexity Growth Comparison (so far)

| Code shape                     | n=2 | n=4 | n=8 | Big O |
| ------------------------------ | --- | --- | --- | ----- |
| Single line, no loop           | 1   | 1   | 1   | O(1)  |
| Single loop                    | 2   | 4   | 8   | O(n)  |
| Nested loop (loop inside loop) | 4   | 16  | 64  | O(n²) |

---

## To be added later

- O(log n) — logarithmic time (e.g. binary search)
- O(n log n) — combining linear and logarithmic growth
- O(2ⁿ) and O(n!) — exponential and factorial time
- Space complexity worked examples
- Best / Average / Worst case comparisons with real code
