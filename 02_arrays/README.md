# 02 — Arrays

Fixed-size collections and the algorithms built on them. Goal: declare,
fill, traverse, search, and sort arrays — and learn why index math
(`sizeof(arr) / sizeof(arr[0])`) matters before moving to pointers.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_arrays_iteration.cpp` | Classic `for` vs range-based loops, char arrays, null termination, pointer-based traversal preview |
| 02 | `02_arrays_user_input.cpp` | Filling arrays with a loop, multi-word input via `std::getline`, `std::fill` |
| 03 | `03_multidimensional_arrays.cpp` | 2D arrays (matrices), computing dimensions with `sizeof`, nested loops |
| 04 | `04_array_sum_with_functions.cpp` | Passing arrays to functions, sizing them via `sizeof`, formatted output |
| 05 | `05_linear_search.cpp` | Linear search returning a match index or `-1` |
| 06 | `06_bubble_sort.cpp` | Bubble sort: nested loops, compare-and-swap with a temp variable |

## Prerequisites

Complete [`01_basics`](../01_basics) first — arrays lean on variables,
loops, and the function primer (`12_function_basics.cpp`), which files
04–06 use heavily.
