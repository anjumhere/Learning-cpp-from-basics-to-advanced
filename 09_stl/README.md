# 09 — STL

The Standard Template Library: containers that manage their own memory.
Goal: replace fixed-size arrays with `vector` and learn when a `list`
beats it.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_vector_basics.cpp` | Why vectors replace raw arrays; `push_back`/`pop_back`; `size()` vs `capacity()` and capacity doubling (`at()`, `[]`, `front()`, `back()` included) |
| 02 | `02_list_container.cpp` | Doubly-linked lists: `push_front`/`push_back`, iterators, `advance`, O(1) insertion at known positions |

## Prerequisites

Complete [`02_arrays`](../02_arrays) (vectors are the dynamic answer to
arrays) and ideally [`03_pointers_and_memory`](../03_pointers_and_memory)
(capacity growth is easier to picture once you know about the heap).
