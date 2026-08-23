# 08 — OOP Polymorphism

One interface, many behaviors. Goal: distinguish compile-time
polymorphism (overloading) from run-time polymorphism (overriding),
then control dispatch with `virtual` functions up to full abstract
interfaces.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_compile_time_overloading.cpp` | Constructor and function overloading — same name, different parameter lists, resolved at compile time |
| 02 | `02_runtime_overriding.cpp` | A derived class redefining a base method; which version runs and when |
| 03 | `03_virtual_functions.cpp` | `virtual` dispatch: the child's version is called through a base-class pointer/reference |
| 04 | `04_abstract_classes_pure_virtual.cpp` | Pure virtual (`= 0`) functions make `Shape` non-instantiable, forcing `Circle`/`Square` to implement `draw()` |

## Prerequisites

Complete [`07_oop_inheritance`](../07_oop_inheritance) first —
overriding and virtual dispatch only exist between base and derived
classes. Constructors ([`06_oop_fundamentals`](../06_oop_fundamentals))
are assumed known.
