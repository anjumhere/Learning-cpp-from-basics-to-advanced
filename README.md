# C++ Practice Repository

A collection of practice programs, interactive games, utility scripts, and foundational exercises built while learning C++. This repository covers core language concepts — control flow, looping, string manipulation, math utilities, procedural functions, array operations, pointers, dynamic memory, object-oriented programming, recursion, sorting, searching, reference management, and the Standard Template Library.

## 📚 Resources I Used

### YouTube Channels

- [Bro Code](https://www.youtube.com/@BroCodez)
- [Hitesh Choudhary](https://www.youtube.com/@HiteshCodeLab)
- [Apna College](https://www.youtube.com/@ApnaCollegeOfficial)

### Books

- _C++ Primer_ (5th Edition) — Stanley B. Lippman, Josée Lajoie, Barbara E. Moo
- _Programming: Principles and Practice Using C++_ (3rd Edition) — Bjarne Stroustrup

## Repository Index

### 🎮 Interactive Games

| Program File                   | Description                                                                                                                                                                                            | Core C++ Concepts Covered                                                                                                               |
| :----------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------- |
| **`number_guessing_game.cpp`** | A guess-the-number game. The computer selects a random number between 1 and 100; the player guesses, with attempt tracking and dynamic "Too high" / "Too low" feedback.                                | Loop control (`do-while`), game-state tracking, conditionals, pseudo-random generation (`srandom`, `rand`)                              |
| **`quiz_game.cpp`**            | A terminal-based multiple-choice trivia game. Prompts the user with questions, lists choices from a 2D options array, converts guesses to uppercase for comparison, tracks score, and reports results. | String arrays, 2D arrays, input validation with `toupper` from `<cctype>`, nested array sizing via `sizeof`, score accumulation         |
| **`rock_paper_scissors.cpp`**  | An interactive Rock-Paper-Scissors game against a randomized computer opponent. Runs continuously until either player reaches 5 points, with input validation.                                         | Functions (prototypes/implementations), loops (`while`), conditionals (`if-else`, `switch`), random number generation (`srand`, `time`) |

### 🛠️ Calculators & Practical Utilities

| Program File                          | Description                                                                                                                                                                            | Core C++ Concepts Covered                                                                                                                               |
| :------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **`banking_system.cpp`**              | A command-line banking application simulator. Presents a menu to show balance, deposit money, withdraw money (with checks to prevent overdrafts or invalid negative values), and exit. | Menu selection with `switch-case`, `do-while` loop control, custom functions, interactive standard I/O (`cin`/`cout`), state tracking, overdraft checks |
| **`console_calculator.cpp`**          | A command-line arithmetic calculator supporting addition, subtraction, multiplication, and division, with operator validation, division-by-zero handling, and high-precision output.   | Precision formatting (`std::fixed`, `std::setprecision`), loops (`while`), conditional routing (`switch`), infinity detection (`std::isinf`)            |
| **`hypotenuse_calculator.cpp`**       | Computes the hypotenuse of a right triangle using the Pythagorean theorem ($c = \sqrt{a^2 + b^2}$) with double-precision floats.                                                       | Math libraries (`pow`, `std::sqrt`), terminal input, output precision formatting                                                                        |
| **`triangle_hypotenuse.cpp`**         | A companion program to `hypotenuse_calculator.cpp`, demonstrating a right-triangle hypotenuse solver using floating-point computations.                                                | Floating-point variables, mathematical computations (`pow`, `std::sqrt`), standard console streaming                                                    |
| **`ration_distributor.cpp`**          | A stock-management simulator modeling ration distribution. Maintains a starting stock of 100 items and decrements it as families claim items, preventing over-allocation.              | Constant values (`const`), loop termination conditions, basic state validation                                                                          |
| **`temperature_converter.cpp`**       | Converts temperatures case-insensitively between Celsius and Fahrenheit based on user-selected mode.                                                                                   | Interactive I/O, arithmetic conversion formulas, case-insensitive character matching                                                                    |
| **`credit_card_validator.cpp`**       | Validates a credit card number using the Luhn Algorithm — doubles every second digit from the right, adjusts values over 9, and checks whether the total is divisible by 10.           | Modulo-based positional logic, algorithm implementation, array traversal                                                                                |
| **`credit_card_validator_draft.cpp`** | An earlier, incomplete attempt at the Luhn validator above — kept as a reference for comparing against the working version.                                                            | Same concepts as `credit_card_validator.cpp`, useful for spotting the logic bugs that were later fixed                                                  |

### 📚 Language Basics & Concept Demos

| Program File                       | Description                                                                                                                                                                                            | Core C++ Concepts Covered                                                                                                                                             |
| :--------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **`basics_math_functions.cpp`**    | Playground exercises exploring built-in mathematical functions from `<cmath>`. Includes commented examples of rounding, square roots, absolute values, limits, and loop behaviors.                     | Mathematical manipulation (`std::max`, `std::min`, `pow`, `sqrt`, `abs`, `round`, `ceil`, `floor`), custom mathematical parameters                                    |
| **`basics_strings_and_loops.cpp`** | Demonstrates string utility methods, input validation, the `continue` statement, and a nested loop exercise printing custom character grids based on user-supplied dimensions.                         | String manipulation (`std::getline`, `.length()`, `.empty()`, `.append()`, `.at()`, `.insert()`, `.find()`, `.erase()`), loop bypass (`continue`), nested `for` loops |
| **`basics_random_numbers.cpp`**    | Demonstrates random seeding and a prize-selection game mapping pseudo-random numbers to outcomes.                                                                                                      | Seeding random number generation (`srand`, `time`), switch-case structures                                                                                            |
| **`basics_function_scope.cpp`**    | Explores function scopes, local variable declarations, and `do-while` loop control. Demonstrates how a local variable inside a function does not retain state between calls unless designed otherwise. | Function-level variable scope, increment operators (`++life`), `do-while` loops, basic arithmetic                                                                     |
| **`user_defined_functions.cpp`**   | Demonstrates how to write custom functions in C++, including calculating squares/cubes and concatenating strings using separate prototype declarations and definitions.                                | Function declarations (prototypes), function parameters, return-value scopes, string manipulation                                                                     |
| **`function_templates.cpp`**       | Demonstrates a function template that works across multiple types, returning whichever of two differently-typed arguments is larger.                                                                   | Templates (`template <typename T, typename U>`), generic programming, `auto` return type                                                                              |
| **`recursion_factorial.cpp`**      | Computes a factorial using both an iterative loop and a recursive function, plus a simple recursive "walk" example, to compare the two approaches side by side.                                        | Recursion, base cases, iterative vs. recursive problem-solving                                                                                                        |

### 📊 Arrays, Sorting & Searching

| Program File                      | Description                                                                                                                                                                                         | Core C++ Concepts Covered                                                                                                                             |
| :-------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------------------------- |
| **`arrays_iteration.cpp`**        | Comprehensive demonstration of array iteration. Illustrates indexing with classic `for` loops, range-based `for` loops, char arrays, null-termination, and pointer-based array traversal.           | Arrays, range-based loops, char arrays, null termination (`\0`), pointer arithmetic (`cp++`), dereference operator (`*cp`), break conditions          |
| **`array_sum_calculator.cpp`**    | Computes the sum total of double-precision price values stored in an array by passing the array and its computed size to a processing function.                                                     | Passing arrays to functions, calculating array size with `sizeof(arr) / sizeof(arr[0])`, stream output formatting (`std::fixed`, `std::setprecision`) |
| **`array_bubble_sort.cpp`**       | Sorts an array of integers using the Bubble Sort algorithm. Implements comparison-based element swapping and traverses the collection using nested loops.                                           | Bubble sort, nested `for` loops, array boundaries, swapping variables with a temporary variable, range-based output iteration                         |
| **`array_fill.cpp`**              | Demonstrates techniques for initializing arrays. Features standard loop-based index assignment using `std::getline()`, and comments on the C++ standard library `std::fill()` for range population. | Array initialization, capturing multi-word terminal inputs with `std::getline(cin, var)`, standard library concepts (`std::fill`)                     |
| **`multidimensional_arrays.cpp`** | Explores multi-dimensional arrays (2D arrays/matrices). Computes total rows and columns dynamically and uses nested loops to print the integer grid.                                                | 2D arrays, dynamic column/row sizing with `sizeof`, nested loops                                                                                      |
| **`linear_search.cpp`**           | Implements the Linear Search algorithm on an array of integers. Prompts the user for a search number, passes the array to a helper function, and returns the match index or -1 if not found.        | Linear search algorithm, passing arrays to functions, conditional output branching, array traversal                                                   |

### 🏛️ Object-Oriented Programming

| Program File                      | Description                                                                                                                                                                                                                                           | Core C++ Concepts Covered                                                                                                                                                     |
| :-------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **`oop_classes_and_objects.cpp`** | Introduces the fundamentals of OOP — grouping data and the functions that act on it into a single class, and instantiating that class as an object.                                                                                                   | Classes, objects, member variables, member functions                                                                                                                          |
| **`oop_access_modifiers.cpp`**    | Extends the `Teacher` class with `private` and `public` access modifiers, plus getter/setter methods for controlling access to private data.                                                                                                          | Access modifiers (`private`, `public`, `protected`), getters and setters, dot-operator member access                                                                          |
| **`oop_encapsulation.cpp`**       | Demonstrates encapsulation — bundling a class's properties and behavior together, and hiding sensitive data (like a student code) behind private access.                                                                                              | Encapsulation, private data members, class design                                                                                                                             |
| **`oop_constructors.cpp`**        | Covers constructors in depth: non-parameterized and parameterized constructors, constructor overloading, and the `this` pointer for resolving naming conflicts between parameters and members.                                                        | Constructors, constructor overloading, the `this` pointer, member initialization                                                                                              |
| **`oop_copy_constructors.cpp`**   | Explains shallow vs. deep copy constructors with a heap-allocated member, including a custom destructor that frees dynamic memory.                                                                                                                 | Shallow copy, deep copy, copy constructor, `new`/`delete`, destructor (`~`), heap-allocated members                                                                          |
| **`oop_inheritance.cpp`**         | Single-level inheritance: a `Student` class derives from `Person`, demonstrating base-class initialization and base→derived constructor / derived→base destructor order.                                                                            | Inheritance (`class Derived : public Base`), base-class initialization via the member initializer list, constructor order (base → derived), destructor order (derived → base) |
| **`oop_inheritance_02.cpp`**      | Multi-level inheritance chain: `Person` → `Student` → `StudentDetails`, tracing constructors and destructors through a 3-level hierarchy.                                                                                                           | Multi-level inheritance, 3-class chain, `getInfo()` member function, destructor order                                                                                         |
| **`oop_inheritance_03.cpp`**      | Multiple inheritance: a `ChildClass` inherits from two parent classes (`ParentOne` and `ParentTwo`), combining their properties.                                                                                                                    | Multiple inheritance, dual parent initialization, `showInfo()`                                                                                                                |
| **`oop_polymorphism.cpp`**        | Compile-time polymorphism via constructor overloading and function overloading — multiple functions/constructors with the same name but different parameter lists.                                                                                   | Compile-time polymorphism, constructor overloading, function overloading                                                                                                       |
| **`oop_polymorphism_02.cpp`**     | Run-time polymorphism via function overriding — the child class redefines a parent class method, replacing it when called on a child object.                                                                                                        | Function overriding, run-time polymorphism, `public` inheritance                                                                                                              |

#### Inheritance Access Modifiers

How a base class's member access levels map into a derived class, depending on the inheritance mode used:

| Base Class \ Derived Class | Private Mode  | Protected Mode | Public Mode   |
| :------------------------- | :------------ | :------------- | :------------ |
| **Private**                | Not Inherited | Not Inherited  | Not Inherited |
| **Protected**              | Private       | Protected      | Protected     |
| **Public**                 | Private       | Protected      | Public        |

### 🔗 Pointers, References & Memory Management

| Program File                             | Description                                                                                                                                                                         | Core C++ Concepts Covered                                                                     |
| :--------------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------- |
| **`pointers_basics.cpp`**                | Introduces pointers — declaring a pointer, using the address-of (`&`) and dereference (`*`) operators, passing a pointer to a function, and storing an array in a pointer variable. | Pointer declaration, address-of operator, dereference operator, passing pointers to functions |
| **`pointers_to_pointers.cpp`**           | Explores pointers to pointers (double pointers) — following an address through two levels of indirection and predicting output for chained dereferences.                            | Double pointers (`**`), multi-level dereferencing, pointer-to-pointer relationships           |
| **`pointer_arithmetic.cpp`**             | Demonstrates incrementing and decrementing pointers, and how pointer arithmetic on arrays moves by the size of the underlying type rather than by a single byte.                    | Pointer increment/decrement, pointer-array relationship, memory address stepping              |
| **`pointer_arithmetic_comparisons.cpp`** | Covers subtracting pointers from each other and comparing pointers with relational operators, plus an array-traversal exercise using pointer arithmetic.                            | Pointer subtraction, relational operators on pointers, array traversal via pointers           |
| **`array_pointers.cpp`**                 | Shows that an array name is itself a pointer to its first element, and that this pointer is a constant that can't be reassigned.                                                    | Arrays as pointers, constant pointers                                                         |
| **`pass_by_reference_pointer.cpp`**      | Demonstrates pass-by-reference using a pointer parameter, allowing a function to modify the caller's original variable.                                                             | Pass-by-reference via pointers, pointer parameters                                            |
| **`pass_by_reference_alias.cpp`**        | Demonstrates pass-by-reference using C++ reference syntax (`&`) instead of pointers — a cleaner alias-based alternative to `pass_by_reference_pointer.cpp`.                         | References (`&` as an alias), pass-by-reference without pointer syntax                        |
| **`nullptr_basics.cpp`**                 | Demonstrates `nullptr` — the null pointer literal used to represent a pointer that points to nothing — and how to check for it before dereferencing.                                | `nullptr`, null pointer checks, conditional dereferencing                                     |
| **`dynamic_memory.cpp`**                 | Covers dynamic memory allocation with `new` and `delete`, including allocating a single int and dynamically sizing a character array at runtime based on user input.                | `new`/`delete`, heap allocation, dynamically-sized arrays                                     |
| **`memory_management.cpp`**              | A conceptual placeholder file dedicated to memory management, dynamic allocation, preventing memory leaks, and cleaning up heap-allocated objects.                                  | Dynamic memory allocation, pointer management, memory leak prevention                         |
| **`string_swap.cpp`**                    | Swaps two string variables in-place within `main` using a temporary storage variable.                                                                                               | Swapping algorithms, temporary variables, basic memory storage flow                           |

### 📦 STL (Standard Template Library)

| Program File       | Description                                                                                                                                                                                                 | Core C++ Concepts Covered                                                                                                  |
| :----------------- | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------- |
| **`stl.cpp`**      | Introduces the Standard Template Library with a focus on `vector` — dynamic array creation, `push_back`/`pop_back`, random access by index, bounds-checked access via `.at()`, `insert` at arbitrary positions, and querying `size`/`capacity`.                              | `std::vector`, `push_back`, `pop_back`, `insert`, `at()`, `size()`, `capacity()`, range-based `for` loop, iterators       |
| **`stl_list.cpp`** | Demonstrates the STL `list` container — a doubly-linked list supporting efficient insertion/removal at both ends. Uses `push_front`, `push_back`, manual iterator positioning with `advance`, and `insert` at iterator positions.                                               | `std::list`, `push_front`, `push_back`, `pop_front`, `pop_back`, iterators, `advance`, O(1) insertions at known positions  |

### 🧱 Data Structures

| Program File             | Description                                                                                                                                          | Core C++ Concepts Covered                                              |
| :----------------------- | :--------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------- |
| **`structs_basics.cpp`** | Introduces `struct` as a way to group related fields (name, GPA, enrollment status) into a single custom type, and creates multiple instances of it. | `struct` declaration, custom data types, field access via dot operator |

### 📄 Reference Files

| File               | Description                                                                                                     |
| :----------------- | :-------------------------------------------------------------------------------------------------------------- |
| **`SIZES.md`**     | Notes/reference material on data type sizes in C++.                                                             |
| **`sales_item.h`** | A header file, likely from working through the `Sales_item` class exercise common in C++ Primer-style material. |

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

Example — compiling and running the Rock-Paper-Scissors game:

```bash
g++ -std=c++17 rock_paper_scissors.cpp -o rock_paper_scissors
./rock_paper_scissors
```

---

## Learning Path

This repository is organized as a structured, step-by-step progression through standard procedural and intermediate C++:

1. **Basics & Core Operations**
   _Discover standard C++ variable declarations, mathematical manipulation, and built-in library functions._
   - `basics_math_functions.cpp`: Learn standard mathematical manipulations (`ceil`, `floor`, `pow`, `sqrt`).
   - `basics_random_numbers.cpp`: Master pseudo-random number seeding and conditional branching with prize generation.

2. **Control Flow & Interactive State**
   _Master loop structures, basic conditions, case switches, and dynamic user interactions._
   - `basics_function_scope.cpp`: Explore function scopes, local variable behaviors, and `do-while` execution.
   - `ration_distributor.cpp`: Implement stock depletion validations with decrementing loop states.
   - `temperature_converter.cpp`: Perform arithmetic conversions with case-insensitive unit options.

3. **Arithmetic, Geometry & Validation**
   _Handle high-precision floats, custom streams, and robust input validation._
   - `hypotenuse_calculator.cpp` / `triangle_hypotenuse.cpp`: Compute mathematical values using formulas formatted with high precision.
   - `console_calculator.cpp`: Handle complex operators, validate entries, and protect against division-by-zero using infinity checking.
   - `credit_card_validator.cpp`: Implement the Luhn Algorithm for validating card numbers.

4. **Custom Functions, Templates & Recursion**
   _Learn to encapsulate logic into custom functions, passing parameters and understanding returns._
   - `user_defined_functions.cpp`: Define prototype declarations and construct parameter-returning helper methods.
   - `function_templates.cpp`: Write a single function that works generically across multiple types.
   - `recursion_factorial.cpp`: Compare iterative and recursive approaches to the same problem.
   - `string_swap.cpp`: Implement the standard algorithm for swapping two string variables using temporary registers.

5. **Pointers, References & Memory**
   _Control arguments and modify state across scopes using memory addresses, references, and heap concepts._
   - `pointers_basics.cpp`: Learn the address-of and dereference operators.
   - `pointer_arithmetic.cpp` / `pointer_arithmetic_comparisons.cpp`: Move through and compare memory addresses directly.
   - `pointers_to_pointers.cpp`: Work through multiple levels of indirection.
   - `nullptr_basics.cpp`: Safely check for and handle null pointers.
   - `pass_by_reference_pointer.cpp` / `pass_by_reference_alias.cpp`: Modify a caller's variable through a pointer or a reference.
   - `dynamic_memory.cpp` / `memory_management.cpp`: Allocate and free heap memory, and avoid memory leaks.

6. **Data Structures: Structs, Single & 2D Arrays**
   _Work with structured collections, custom types, character arrays, multi-dimensional tables, and loop structures._
   - `structs_basics.cpp`: Group related fields into a custom `struct` type.
   - `arrays_iteration.cpp`: Traverse data structures using index loops, range-based loops, and pointer arithmetic.
   - `array_pointers.cpp`: Understand how an array name behaves as a constant pointer.
   - `array_fill.cpp`: Assign sequence values to static arrays using standard looping and terminal inputs.
   - `multidimensional_arrays.cpp`: Map grids using row-column 2D arrays, calculating dimensions via `sizeof`.

7. **Passing, Searching & Sorting Arrays**
   _Develop algorithms to process, lookup, and sort collections dynamically inside modular functions._
   - `array_sum_calculator.cpp`: Pass entire arrays to helper functions to perform calculations.
   - `linear_search.cpp`: Traverse arrays sequentially with index outputs via Linear Search.
   - `array_bubble_sort.cpp`: Implement the Bubble Sort algorithm using comparisons and swaps inside nested iterations.

8. **Object-Oriented Programming**
   _Move from procedural code into grouping data and behavior together as classes and objects._
   - `oop_classes_and_objects.cpp`: Learn what a class and an object are, and why data is grouped this way.
   - `oop_access_modifiers.cpp`: Control access to class data with `private`/`public`, and use getters/setters.
   - `oop_encapsulation.cpp`: Bundle data and behavior together while hiding sensitive internals.
   - `oop_constructors.cpp`: Initialize objects automatically with constructors, including overloading and the `this` pointer.
   - `oop_copy_constructors.cpp`: Understand shallow vs. deep copy and manage heap-allocated members.
   - `oop_inheritance.cpp`: Derive a `Student` class from a `Person` base class, observe constructor/destructor call order.
   - `oop_inheritance_02.cpp`: Trace constructors and destructors through a 3-level inheritance chain.
   - `oop_inheritance_03.cpp`: Combine properties from two parent classes using multiple inheritance.
   - `oop_polymorphism.cpp`: Explore compile-time polymorphism through overloading.
   - `oop_polymorphism_02.cpp`: Explore run-time polymorphism through function overriding.

9. **STL (Standard Template Library)**
   _Use pre-built, efficient containers and algorithms instead of writing data structures from scratch._
   - `stl.cpp`: Work with `std::vector` — dynamic arrays with automatic resizing, random access, and bounds-checked element access.
   - `stl_list.cpp`: Explore `std::list` — a doubly-linked list with O(1) insertions at both ends and iterator-based positioning.

10. **Comprehensive Applications & Game Loops**
   _Build interactive, robust programs combining state machines, validation, and full game loops._
   - `banking_system.cpp`: Construct multi-layered state menus checking balances, deposits, and overdraft rules.
   - `number_guessing_game.cpp`: Build a high/low matching loop tracking user attempts dynamically.
   - `quiz_game.cpp`: Challenge users with a multiple-choice structure powered by 2D arrays, input sanitization, and score counters.
   - `rock_paper_scissors.cpp`: Experience a continuous competitive game loop featuring random choices, validation, and robust scoring.
