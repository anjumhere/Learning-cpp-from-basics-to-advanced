# 09 — STL

The Standard Template Library: containers that manage their own memory.
Goal: replace fixed-size arrays with `vector` and master its core
operations — growth, capacity, element access, the different ways to
initialize one, and traversal with iterators. Then explore the rest of
the STL: linked lists, double-ended queues, pairs, and the adapter
containers (stack and queue) that enforce specific access patterns.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_vector_basics.cpp` | Why vectors replace raw arrays; `push_back`/`pop_back`; `size()` vs `capacity()` and capacity doubling (`at()`, `[]`, `front()`, `back()` included) |
| 02 | `02_more_about_vectors.cpp` | The ways to create a vector: fill constructor, brace-init list, and copy constructor; plus `erase`, `insert`, `clear`, `empty` |
| 03 | `03_vector_iterators.cpp` | Pointer-like iterators over a vector: forward loops with `begin()`/`end()`, backward loops with `rbegin()`/`rend()`, and `auto` for shorter types |
| 04 | `04_list_containers.cpp` | `std::list` as a doubly-linked list: `push_front`/`push_back`, iteration, `size()`, `empty()` — and how it differs from vector |
| 05 | `05_deque_container.cpp` | `std::deque` as a double-ended queue: efficient front and back insertion, random access with `[]`/`at()`, comparison with vector and list |
| 06 | `06_pair_container.cpp` | `std::pair`: storing two values of different types, nested pairs, vectors of pairs, `push_back` vs `emplace_back` |
| 07 | `07_stack.cpp` | `std::stack` adapter: LIFO access pattern, `push`/`pop`/`top`, `empty()`, `swap()` |
| 08 | `08_queue.cpp` | `std::queue` adapter: FIFO access pattern, `push`/`pop`/`front`/`back`, `empty()`, `swap()` |

## Prerequisites

Complete [`02_arrays`](../02_arrays) (vectors are the dynamic answer to
arrays) and ideally [`03_pointers_and_memory`](../03_pointers_and_memory)
(capacity growth is easier to picture once you know about the heap).
