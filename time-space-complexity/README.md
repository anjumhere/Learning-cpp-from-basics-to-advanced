# time-space-complexity

A collection of C++ examples and notes for understanding **time complexity** and **space complexity** — built while working through the fundamentals from scratch, before moving into Striver's A2Z DSA sheet.

## Contents

- `NOTES.md` — Definitions of time complexity and space complexity, step-by-step methods for calculating each, and worked examples with real input/output counts.
- `ts.cpp` — One annotated program that demonstrates `O(1)`, `O(n)`, and `O(n²)` side by side, with multi-line comments explaining _why_ each block has the complexity it does.

## Purpose

This directory exists to build a solid, from-scratch understanding of complexity analysis — not just memorizing labels like `O(n)`, but being able to derive them by counting operations and observing growth patterns as input size changes.

## Status

Currently covers:

- O(1) — constant time
- O(n) — linear time
- O(n²) — quadratic time

Planned additions:

- O(log n) and O(n log n)
- O(2ⁿ) and O(n!)
- Space complexity worked examples
- Best / Average / Worst case comparisons

## Compile & run

```bash
g++ -std=c++17 time-space-complexity/ts.cpp -o ts
./ts
```
