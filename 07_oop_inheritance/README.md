# 07 — OOP Inheritance

Building classes from other classes. Goal: derive specialized classes
from general ones, and trace exactly when base and derived constructors
and destructors run.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_single_inheritance.cpp` | `class Student : public Person`, base initialization via member initializer list, constructor/destructor call order |
| 02 | `02_multilevel_inheritance.cpp` | A 3-level chain (`Person` → `Student` → `StudentDetails`), tracing ctor/dtor order up the chain |
| 03 | `03_multiple_inheritance.cpp` | One child, two parents — combining properties of `ParentOne` and `ParentTwo` |
| 04 | `04_inheritance_practice_recap.cpp` | Self-check exercise: parameterized base constructors via `this`, destructor order |

## Prerequisites

Complete [`06_oop_fundamentals`](../06_oop_fundamentals) first —
especially constructors and access modifiers.

### Reference: inheritance access modifiers

How base-class member access maps into a derived class:

| Base \ Derived    | Private Mode  | Protected Mode | Public Mode   |
| :---------------- | :------------ | :------------- | :------------ |
| **Private**       | Not Inherited | Not Inherited  | Not Inherited |
| **Protected**     | Private       | Protected      | Protected     |
| **Public**        | Private       | Protected      | Public        |
