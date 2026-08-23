# 03 — Pointers & Memory

Addresses, indirection, references, and the heap. Goal: understand what
a pointer actually is, how arrays and pointers relate, how to modify a
caller's variable, and how to allocate/free dynamic memory safely.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_pointer_basics.cpp` | Declaring pointers, address-of (`&`) and dereference (`*`), passing pointers to functions |
| 02 | `02_nullptr_checks.cpp` | `nullptr`, checking before dereferencing |
| 03 | `03_arrays_as_pointers.cpp` | An array name is a constant pointer to its first element |
| 04 | `04_pointer_arithmetic.cpp` | Incrementing/decrementing pointers; steps move by type size, not bytes |
| 05 | `05_pointer_subtract_compare.cpp` | Pointer subtraction and relational comparisons, traversal via arithmetic |
| 06 | `06_pointer_to_pointer.cpp` | Double pointers (`**`) and multi-level dereferencing |
| 07 | `07_pass_by_reference_pointer.cpp` | Modifying the caller's variables through pointer parameters |
| 08 | `08_pass_by_reference_alias.cpp` | The same job with cleaner reference (`&`) syntax |
| 09 | `09_dynamic_memory_new_delete.cpp` | `new`/`delete`, heap allocation, runtime-sized arrays |
| 10 | `10_memory_management_leaks.cpp` | Leak prevention and cleaning up heap-allocated objects |

## Prerequisites

Complete [`01_basics`](../01_basics) and [`02_arrays`](../02_arrays) first —
pointer arithmetic only makes sense once arrays are familiar.
