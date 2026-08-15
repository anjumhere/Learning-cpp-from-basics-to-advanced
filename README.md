# C++ Practice Repository

A collection of practice programs, interactive games, utility scripts, and foundational exercises built while learning C++. This repository covers core language concepts — control flow, looping, string manipulation, math utilities, procedural functions, array operations, dynamic memory, sorting, searching, and reference management.

## Repository Index

### 🎮 Interactive Games

| Program File | Description | Core C++ Concepts Covered |
| :--- | :--- | :--- |
| **`number_guessing_program.cpp`** | A guess-the-number game. The computer selects a random number between 1 and 100; the player guesses, with attempt tracking and dynamic "Too high" / "Too low" feedback. | Loop control (`do-while`), game-state tracking, conditionals, pseudo-random generation (`srandom`, `rand`) |
| **`quizGame.cpp`** | A terminal-based multiple-choice trivia game. Prompts the user with questions, lists choices from a 2D options array, converts guesses to uppercase for comparison, tracks score, and reports results. | String arrays, 2D arrays, input validation with `toupper` from `<cctype>`, nested array sizing via `sizeof`, score accumulation |
| **`rock_paper_scissor.cpp`** | An interactive Rock-Paper-Scissors game against a randomized computer opponent. Runs continuously until either player reaches 5 points, with input validation. | Functions (prototypes/implementations), loops (`while`), conditionals (`if-else`, `switch`), random number generation (`srand`, `time`) |

### 🛠️ Calculators & Practical Utilities

| Program File | Description | Core C++ Concepts Covered |
| :--- | :--- | :--- |
| **`banking_program.cpp`** | A command-line banking application simulator. It presents a menu to the user with choices to show balance, deposit money, withdraw money (with checks to prevent overdrafts or invalid negative values), and exit. | Menu selection with `switch-case`, `do-while` loop control, custom functions, interactive standard I/O (`cin`/`cout`), state tracking, overdraft checks |
| **`console_calculator.cpp`** | A command-line arithmetic calculator supporting addition, subtraction, multiplication, and division, with operator validation, division-by-zero handling, and high-precision output. | Precision formatting (`std::fixed`, `std::setprecision`), loops (`while`), conditional routing (`switch`), infinity detection (`std::isinf`) |
| **`hypotenuse_calculator.cpp`** | Computes the hypotenuse of a right triangle using the Pythagorean theorem ($c = \sqrt{a^2 + b^2}$) with double-precision floats. | Math libraries (`pow`, `std::sqrt`), terminal input, output precision formatting |
| **`ration_distributor_program.cpp`** | A stock-management simulator modeling ration distribution. Maintains a starting stock of 100 items and decrements it as families claim items, preventing over-allocation. | Constant values (`const`), loop termination conditions, basic state validation |
| **`temperature_convertor.cpp`** | Converts temperatures case-insensitively between Celsius and Fahrenheit based on user-selected mode. | Interactive I/O, arithmetic conversion formulas, case-insensitive character matching |
| **`triangle.cpp`** | A companion program to `hypotenuse_calculator.cpp`, demonstrating a clean right-triangle hypotenuse solver using floating-point computations. | Floating-point variables, mathematical computations (`pow`, `std::sqrt`), standard console streaming |

### 📚 Language Basics & Concept Demos

| Program File | Description | Core C++ Concepts Covered |
| :--- | :--- | :--- |
| **`basics.cpp`** | Playground exercises exploring built-in mathematical functions from `<cmath>`. Includes commented examples of rounding, square roots, absolute values, limits, and loop behaviors. | Mathematical manipulation (`std::max`, `std::min`, `pow`, `sqrt`, `abs`, `round`, `ceil`, `floor`), custom mathematical parameters |
| **`basics_02.cpp`** | Demonstrates string utility methods, input validation, the `continue` statement, and a nested loop exercise printing custom character grids based on user-supplied dimensions. | String manipulation (`std::getline`, `.length()`, `.empty()`, `.append()`, `.at()`, `.insert()`, `.find()`, `.erase()`), loop bypass (`continue`), nested `for` loops |
| **`basics_03.cpp`** | Demonstrates random seeding and a prize-selection game mapping pseudo-random numbers to outcomes. | Seeding random number generation (`srand`, `time`), switch-case structures |
| **`basics_04.cpp`** | Explores function scopes, local variable declarations, and `do-while` loop control. Demonstrates how a local variable inside a function does not retain state between calls unless designed otherwise. | Function-level variable scope, increment operators (`++life`), `do-while` loops, basic arithmetic |
| **`user_defined_functions.cpp`** | Demonstrates how to write custom functions in C++, including calculating squares/cubes and concatenating strings using separate prototype declarations and definitions. | Function declarations (prototypes), function parameters, return-value scopes, string manipulation |

### 📊 Arrays, Sorting & Searching

| Program File | Description | Core C++ Concepts Covered |
| :--- | :--- | :--- |
| **`arrays.cpp`** | Comprehensive demonstration of array iteration. Illustrates indexing with classic `for` loops, range-based `for` loops, char arrays, null-termination, and pointer-based array traversal. | Arrays, range-based loops, char arrays, null termination (`\0`), pointer arithmetic (`cp++`), dereference operator (`*cp`), break conditions |
| **`arrays_program.cpp`** | Computes the sum total of double-precision price values stored in an array by passing the array and its computed size to a processing function. | Passing arrays to functions, calculating array size with `sizeof(arr) / sizeof(arr[0])`, stream output formatting (`std::fixed`, `std::setprecision`) |
| **`arraySort.cpp`** | Sorts an array of integers using the Bubble Sort algorithm. Implements comparison-based element swapping and traverses the collection using nested loops. | Bubble sort, nested `for` loops, array boundaries, swapping variables with a temporary variable, range-based output iteration |
| **`fillFunction.cpp`** | Demonstrates techniques for initializing arrays. Features standard loop-based index assignment using `std::getline()`, and comments on C++ standard library `std::fill()` for range population. | Array initialization, capturing multi-word terminal inputs with `std::getline(cin, var)`, standard library concepts (`std::fill`) |
| **`multi_dimentional_arrays.cpp`** | Explores multi-dimensional arrays (2D arrays/matrices). Computes total rows and columns dynamically and uses nested loops to print the integer grid. | 2D arrays, dynamic column/row sizing with `sizeof`, nested loops |
| **`search_an_array.cpp`** | Implements the Linear Search algorithm on an array of integers. Prompts the user for a search number, passes the array to a helper function, and returns the match index or -1 if not found. | Linear search algorithm, passing arrays to functions, conditional output branching, array traversal |

### 🔗 Memory Management, References & Pointers

| Program File | Description | Core C++ Concepts Covered |
| :--- | :--- | :--- |
| **`memory_leaks.cpp`** | A conceptual placeholder file dedicated to memory management, dynamic allocation, preventing memory leaks, and cleaning up heap-allocated objects. | Dynamic memory allocation (`new` and `delete`), pointer management, garbage collection principles, memory leak prevention |
| **`passByreference.cpp`** | Demonstrates how to swap string values by reference. Avoids copying by passing memory addresses to a custom swap function, modifying the original variables in-place. | Passing by reference (`&` operator), avoiding data copies, function definitions, parameter references |
| **`swap.cpp`** | Swaps two string variables in-place within the `main` function using a temporary storage variable. | Swapping algorithms, temporary variables, basic memory storage flow |

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
g++ -std=c++17 rock_paper_scissor.cpp -o rock_paper_scissor
./rock_paper_scissor
```

---

## Learning Path

This repository is organized as a structured, step-by-step progression through standard procedural and intermediate C++:

1. **Basics & Core Operations**
   *Discover standard C++ variable declarations, mathematical manipulation, and built-in library functions.*
   - `basics.cpp`: Learn standard mathematical manipulations (`ceil`, `floor`, `pow`, `sqrt`).
   - `basics_03.cpp`: Master pseudo-random number seeding and conditional branching with prize generation.

2. **Control Flow & Interactive State**
   *Master loop structures, basic conditions, case switches, and dynamic user interactions.*
   - `basics_04.cpp`: Explore function scopes, local variable behaviors, and `do-while` execution.
   - `ration_distributor_program.cpp`: Implement stock depletion validations with decrementing loop states.
   - `temperature_convertor.cpp`: Perform arithmetic conversions with case-insensitive unit options.

3. **Arithmetic, Geometry & Validation**
   *Handle high-precision floats, custom streams, and robust input validation.*
   - `hypotenuse_calculator.cpp` / `triangle.cpp`: Compute mathematical values using formulas formatted with high precision.
   - `console_calculator.cpp`: Handle complex operators, validate entries, and protect against division-by-zero using infinity checking.

4. **Custom Functions & Variables**
   *Learn to encapsulate logic into custom functions, passing parameters and understanding returns.*
   - `user_defined_functions.cpp`: Define prototype declarations and construct parameter-returning helper methods.
   - `swap.cpp`: Implement the standard algorithm for swapping two string variables using temporary registers.

5. **Memory References & State Modification**
   *Control arguments and modify state across scopes using memory references and heap concepts.*
   - `passByreference.cpp`: Pass values by reference (`&`) to enable custom functions to modify original caller data.
   - `memory_leaks.cpp`: Study safe pointer lifecycles, memory tracking, dynamic allocation, and garbage prevention.

6. **Data Structures: Single & 2D Arrays**
   *Work with structured collections, character arrays, multi-dimensional tables, and loop structures.*
   - `arrays.cpp`: Traverse data structures using index loops, range-based loops, and pointer arithmetic.
   - `fillFunction.cpp`: Assign sequence values to static arrays using standard looping and terminal inputs.
   - `multi_dimentional_arrays.cpp`: Map grids using row-column 2D arrays, calculating dimensions via `sizeof`.

7. **Passing, Searching & Sorting Arrays**
   *Develop algorithms to process, lookup, and sort collections dynamically inside modular functions.*
   - `arrays_program.cpp`: Pass entire arrays to helper functions to perform calculations.
   - `search_an_array.cpp`: Traverse arrays sequentially with index outputs via Linear Search.
   - `arraySort.cpp`: Implement Bubble Sort algorithm using comparisons and swapping algorithms inside nested iterations.

8. **Comprehensive Applications & Game Loops**
   *Build interactive, robust programs combining state machines, validation, and full game loops.*
   - `banking_program.cpp`: Construct multi-layered state menus checking balances, deposits, and overdraft rules.
   - `number_guessing_program.cpp`: Build a high/low matching loop tracking user attempts dynamically.
   - `quizGame.cpp`: Challenge users with a multiple-choice structure powered by 2D arrays, input sanitization, and score counters.
   - `rock_paper_scissor.cpp`: Experience a continuous competitive game loop featuring random choices, validation, and robust scoring.
