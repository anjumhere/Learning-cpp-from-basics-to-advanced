# C++ — From Basics to Advanced

A self-paced C++ learning path: 56 standalone programs arranged as a
numbered course, taking you from your first `Hello, world!` all the way
to object-oriented design, virtual functions, the STL, and applied
mini-projects. This is a **sequential, book-style path**: read and work
through it file-by-file, folder-by-folder, in order — each file assumes
only what the earlier files already taught.

> ✅ **Build status:** all 56 files compile warning-free with
> `g++ -std=c++17 -Wall` and were smoke-tested by execution.

## How to use this repository

**Uncomment to learn:** every file is broken into labeled `STEP` blocks
— only the first step is active; uncomment one block at a time,
recompile, run, and read the `>>> Observe:` notes to see what changed.
Projects additionally contain `CHALLENGE` blocks for self-guided
extensions. Each file also opens with a short `CONCEPT` block
explaining the idea before any code.

## Contents

| # | Folder | Topic |
|---|--------|-------|
| 01 | [`01_basics`](01_basics) | Program structure, variables & types, operators, branching, loops, strings, function primer |
| 02 | [`02_arrays`](02_arrays) | Array iteration, filling, 2D arrays, passing to functions, linear search, bubble sort |
| 03 | [`03_pointers_and_memory`](03_pointers_and_memory) | Pointers, arrays-as-pointers, arithmetic, references, `new`/`delete`, leak prevention |
| 04 | [`04_functions`](04_functions) | User-defined functions, scope & lifetime, recursion, templates |
| 05 | [`05_structs`](05_structs) | Grouping fields into custom types |
| 06 | [`06_oop_fundamentals`](06_oop_fundamentals) | Classes, access modifiers, encapsulation, constructors, copy/deep-vs-shallow, `static` |
| 07 | [`07_oop_inheritance`](07_oop_inheritance) | Single, multi-level, and multiple inheritance; ctor/dtor order |
| 08 | [`08_oop_polymorphism`](08_oop_polymorphism) | Overloading vs overriding, `virtual` functions, abstract classes |
| 09 | [`09_stl`](09_stl) | `std::vector`: growth, capacity, access, and initialization styles |
| 10 | [`10_projects`](10_projects) | Applied mini-projects: games, banking system, Luhn validator, debugging drills |

Each folder contains its own `README.md` with a per-file guide and its
prerequisites — work through folders in numeric order unless a folder's
README says otherwise.

## Resources Used

### YouTube Channels

- [Bro Code](https://www.youtube.com/@BroCodez)
- [Hitesh Choudhary](https://www.youtube.com/@HiteshCodeLab)
- [Apna College](https://www.youtube.com/@ApnaCollegeOfficial)

### Books

- _C++ Primer_ (5th Edition) — Stanley B. Lippman, Josée Lajoie, Barbara E. Moo
- _Programming: Principles and Practice Using C++_ (3rd Edition) — Bjarne Stroustrup

---

## Getting Started

### Prerequisites

A modern C++ compiler (GCC/g++ or Clang) is required to compile and run these programs.

On Linux (Debian/Ubuntu):

```bash
sudo apt update
sudo apt install build-essential
```

### Compilation & Execution

Use a terminal to compile any source file with `g++`, targeting the C++17 standard:

```bash
# Compile
g++ -std=c++17 <filename>.cpp -o <output_executable_name>

# Run
./<output_executable_name>
```

Example — compiling and running the Rock-Paper-Scissors project:

```bash
g++ -std=c++17 10_projects/01_rock_paper_scissors.cpp -o rps
./rps
```

To verify the whole repository at once:

```bash
find . -name "*.cpp" -not -path "./.git/*" -exec g++ -std=c++17 -fsyntax-only {} \;
```
