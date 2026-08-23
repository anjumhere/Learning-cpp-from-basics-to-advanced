# 09 — STL

The Standard Template Library: containers that manage their own memory.
Goal: replace fixed-size arrays with `vector` and master its core
operations — growth, capacity, element access, and the different ways
to initialize one.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_vector_basics.cpp` | Why vectors replace raw arrays; `push_back`/`pop_back`; `size()` vs `capacity()` and capacity doubling (`at()`, `[]`, `front()`, `back()` included) |
| 02 | `02_more_about_vectors.cpp` | The ways to create a vector: fill constructor, brace-init list, and copy constructor |

## Prerequisites

Complete [`02_arrays`](../02_arrays) (vectors are the dynamic answer to
arrays) and ideally [`03_pointers_and_memory`](../03_pointers_and_memory)
(capacity growth is easier to picture once you know about the heap).

> Note: an earlier draft of this folder also covered `std::list`
> (doubly-linked lists). That file was removed by the author; its
> content remains reachable in git history if you want it back.
