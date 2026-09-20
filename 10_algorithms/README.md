# 10 — Algorithms

Your first taste of the C++ `<algorithm>` header. Goal: replace hand-rolled
sorting (like the bubble sort in `02_arrays`) with the standard library's
`std::sort`, and learn what "a range" means when you pass either raw
pointers or iterators to an algorithm.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_sorting.cpp` | `std::sort` on a plain C-style array and a `std::vector`; ascending vs descending with `std::greater<>()`; pointers vs iterators as the same two-pointer range |

## Prerequisites

Complete [`09_stl`](../09_stl) — `std::vector` and iterators are required
to make sense of the second half. [`02_arrays`](../02_arrays) helps you
appreciate what `sort` replaces.

## Compile & run

```bash
g++ -std=c++17 10_algorithms/01_sorting.cpp -o sorting
./sorting
```