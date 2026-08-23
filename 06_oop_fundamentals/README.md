# 06 — OOP Fundamentals

The core building blocks of object-oriented C++. Goal: model real-world
things as classes, control access to their data, initialize them with
constructors, and copy/destroy them correctly — including heap-managed
members.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_classes_and_objects.cpp` | Classes as blueprints, objects as instances, default-private members |
| 02 | `02_access_modifiers.cpp` | `private`/`public`/`protected`, getters and setters |
| 03 | `03_encapsulation.cpp` | Bundling data + behavior; hiding sensitive members behind a public interface |
| 04 | `04_constructors_and_this.cpp` | Non-parameterized vs parameterized constructors, overloading, the `this` pointer, compiler-generated copies |
| 05 | `05_copy_constructors_deep_vs_shallow.cpp` | Shallow vs deep copies with a heap member; custom destructor with `delete`; shallow-copy double-delete experiment |
| 06 | `06_static_keyword.cpp` | Static locals persisting across calls; static object lifetime until end of `main` |

## Prerequisites

Complete folders [`01_basics`](../01_basics) through
[`05_structs`](../05_structs). Constructors and destructors assume you
have seen dynamic memory ([`03_pointers_and_memory`](../03_pointers_and_memory)).
