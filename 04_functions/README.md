# 04 — Functions

Deeper function topics on top of the primer. Goal: understand scope and
lifetime, think recursively, and meet your first templates.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_user_defined_functions.cpp` | Prototypes vs definitions, parameters, return values in real input/output flows (squares/cubes, string concatenation) |
| 02 | `02_scope_and_lifetime.cpp` | Function-local variables don't retain state between calls; block scope; `do-while` control |
| 03 | `03_recursion_factorial.cpp` | Base cases; iterative vs recursive solutions side by side |
| 04 | `04_function_templates.cpp` | `template <typename T, typename U>`, generic programming, `auto` return type, the ternary operator |

## Prerequisites

Complete [`01_basics`](../01_basics) — file 01 builds directly on its
function primer (`12_function_basics.cpp`). Pair with
[`03_pointers_and_memory`](../03_pointers_and_memory) for the full
pass-by-value vs pass-by-reference picture.
