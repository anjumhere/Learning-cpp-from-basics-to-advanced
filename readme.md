# C++ Practice Repository

A collection of practice programs, interactive games, utility scripts, and foundational exercises built while learning C++. This repository covers core language concepts — control flow, looping, string manipulation, math utilities, procedural functions, and game loops.

## Repository Index

### 🎮 Interactive Games

| Program File                      | Description                                                                                                                                                             | Core C++ Concepts Covered                                                                                                               |
| :-------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------- |
| **`rock_paper_scissor.cpp`**      | An interactive Rock-Paper-Scissors game against a randomized computer opponent. Runs continuously until either player reaches 5 points, with input validation.          | Functions (prototypes/implementations), loops (`while`), conditionals (`if-else`, `switch`), random number generation (`srand`, `time`) |
| **`number_guessing_program.cpp`** | A guess-the-number game. The computer selects a random number between 1 and 100; the player guesses, with attempt tracking and dynamic "Too high" / "Too low" feedback. | Loop control (`do-while`), game-state tracking, conditionals, pseudo-random generation (`srandom`, `rand`)                              |

### 🛠️ Calculators & Practical Utilities

| Program File                         | Description                                                                                                                                                                          | Core C++ Concepts Covered                                                                                                                    |
| :----------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------- |
| **`console_calculator.cpp`**         | A command-line arithmetic calculator supporting addition, subtraction, multiplication, and division, with operator validation, division-by-zero handling, and high-precision output. | Precision formatting (`std::fixed`, `std::setprecision`), loops (`while`), conditional routing (`switch`), infinity detection (`std::isinf`) |
| **`temperature_convertor.cpp`**      | Converts temperatures case-insensitively between Celsius and Fahrenheit based on user-selected mode.                                                                                 | Interactive I/O, arithmetic conversion formulas, case-insensitive character matching                                                         |
| **`hypotenuse_calculator.cpp`**      | Computes the hypotenuse of a right triangle using the Pythagorean theorem (c = √(a² + b²)) with double-precision floats.                                                             | Math libraries (`pow`, `std::sqrt`), terminal input, output precision formatting                                                             |
| **`triangle.cpp`**                   | A companion program to `hypotenuse_calculator.cpp`, demonstrating a clean right-triangle hypotenuse solver.                                                                          | Floating-point variables, mathematical computations, standard console streaming                                                              |
| **`ration_distributor_program.cpp`** | A stock-management simulator modeling ration distribution. Maintains a starting stock of 100 items and decrements it as families claim items, preventing over-allocation.            | Constant values (`const`), loop termination conditions, basic state validation                                                               |

|
| **`array_program.cpp`** |A Program that iterates the array and adds its index and generates the ----------
from adding those indexes.

### 📚 Language Basics & Concept Demos

| Program File                     | Description                                                                                                                                                                    | Core C++ Concepts Covered                                                                                                                                             |
| :------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **`basics.cpp`**                 | Playground exercises exploring built-in mathematical functions from `<cmath>`.                                                                                                 | Mathematical manipulation (`std::max`, `std::min`, `pow`, `sqrt`, `abs`, `round`, `ceil`, `floor`)                                                                    |
| **`basics_02.cpp`**              | Demonstrates random seeding and a prize-selection game mapping pseudo-random numbers to outcomes.                                                                              | Seeding random number generation (`srand`, `time`), switch-case structures                                                                                            |
| **`basics_03.cpp`**              | Demonstrates string utility methods, input validation, the `continue` statement, and a nested loop exercise printing custom character grids based on user-supplied dimensions. | String manipulation (`std::getline`, `.length()`, `.empty()`, `.append()`, `.at()`, `.insert()`, `.find()`, `.erase()`), loop bypass (`continue`), nested `for` loops |
| **`user_defined_functions.cpp`** | Demonstrates how to write custom functions in C++, including calculating squares/cubes and concatenating strings using separate prototype declarations and definitions.        | Function declarations (prototypes), function parameters, return-value scopes, string manipulation                                                                     |

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

This repository is organized as a progression through standard procedural C++:

1. **Basics & Operations** — `basics.cpp`, `basics_02.cpp`, `user_defined_functions.cpp`
2. **Standard Library Data Types & Iteration** — `basics_03.cpp`
3. **Control Flow & Simple Arithmetic** — `temperature_convertor.cpp`, `hypotenuse_calculator.cpp`, `triangle.cpp`, `ration_distributor_program.cpp`
4. **Validation & Advanced Math** — `console_calculator.cpp`
5. **Full Game Loops** — `number_guessing_program.cpp`, `rock_paper_scissor.cpp`
