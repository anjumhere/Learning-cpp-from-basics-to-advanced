# C++ Practice Repository

Welcome to the C++ Practice Repository! This workspace contains a collection of practice programs, interactive games, utility scripts, and foundational exercises built while learning C++ development. It covers fundamental language concepts including control flow, looping, string manipulation, math utilities, procedural functions, and game loops.

## Repository Index

Here is a complete directory of the files in this repository along with their functionalities and the C++ programming concepts they demonstrate:

### 🎮 Interactive Games

| Program File                      | Description                                                                                                                                                                                                                         | Core C++ Concepts Covered                                                                                                                          |
| :-------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------- |
| **`rock_paper_scissor.cpp`**      | An interactive Rock-Paper-Scissors game where the player competes against a randomized computer opponent. The game runs continuously in a loop until either the player or the computer reaches 5 points. Includes input validation. | Functions (prototypes/implementations), loops (`while`), conditional statements (`if-else`, `switch`), random number generation (`srand`, `time`). |
| **`number_guessing_program.cpp`** | A classic guess-the-number game. The computer selects a random number between 1 and 100, and the player is prompted to guess it. The game tracks the number of attempts and provides dynamic "Too high" or "Too low" feedback.      | Loop control (`do-while`), game-state tracking, conditional statements, pseudo-random generation (`srandom`, `rand`).                              |

### 🛠️ Calculators & Practical Utilities

| Program File                         | Description                                                                                                                                                                                                  | Core C++ Concepts Covered                                                                                                                     |
| :----------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------- | --- | --- |
| **`console_calculator.cpp`**         | A functional command-line arithmetic calculator performing addition, subtraction, multiplication, and division. Features operator validation loops, division-by-zero validation, and high-precision outputs. | Precision formatting (`std::fixed`, `std::setprecision`), loops (`while`), conditional routing (`switch`), infinity detection (`std::isinf`). |
| **`temperature_convertor.cpp`**      | A practical program for converting temperatures case-insensitively between Celsius and Fahrenheit according to user-selected modes.                                                                          | Interactive I/O, arithmetic conversion formulas, case-insensitive character matching (`                                                       |     | `). |
| **`hypotenuse_calculator.cpp`**      | Computes the hypotenuse of a right-angled triangle using the Pythagorean theorem ($c = \sqrt{a^2 + b^2}$) with double-precision floating-point numbers.                                                      | Math libraries (`pow`, `std::sqrt`), terminal input, output precision formatting.                                                             |
| **`triangle.cpp`**                   | An identical program counterpart to `hypotenuse_calculator.cpp`, demonstrating a clean right-triangle hypotenuse solver using mathematical functions.                                                        | Floating-point variables, mathematical computations, standard console streaming.                                                              |
| **`ration_distributor_program.cpp`** | A stock-management simulator mimicking a ration distribution program. It maintains a starting stock of 100 items and decrements stock as families claim items, preventing over-allocation.                   | Constant values (`const`), loop termination conditions, basic state validation.                                                               |

### 📚 Language Basics & Concept Demos

| Program File                     | Description                                                                                                                                                                                | Core C++ Concepts Covered                                                                                                                                              |
| :------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **`basics.cpp`**                 | A collection of playground exercises exploring built-in mathematical functions from the `<cmath>` standard library.                                                                        | Mathematical manipulation (`std::max`, `std::min`, `pow`, `sqrt`, `abs`, `round`, `ceil`, `floor`).                                                                    |
| **`basics_02.cpp`**              | Demonstrates random seeding and a prize selection game utilizing pseudo-random numbers mapped to outcomes.                                                                                 | Seeding random number generation (`srand`, `time`), switch-case structures.                                                                                            |
| **`basics_03.cpp`**              | Demonstrates string utility methods, input validation, the `continue` statement, and a nested loop exercise that prints custom character grids based on user-supplied dimensions.          | String manipulation (`std::getline`, `.length()`, `.empty()`, `.append()`, `.at()`, `.insert()`, `.find()`, `.erase()`), loop bypass (`continue`), nested `for` loops. |
| **`user_defined_functions.cpp`** | Demonstrates how to write custom functions in C++. Includes examples of calculating squares/cubes, as well as concatenating strings using separate prototype declarations and definitions. | Function declarations (prototypes), function parameters, return-value scopes, string manipulation.                                                                     |

---

## Getting Started

### Prerequisites

To compile and run these programs, you need a modern C++ compiler installed on your system (e.g., GCC/g++ or Clang).

On Linux (Debian/Ubuntu):

```bash
sudo apt update
sudo apt install build-essential
```

### Compilation & Execution

Use a terminal to compile any C++ source file using the `g++` compiler. It is recommended to use the standard C++17 library:

```bash
# Compile
g++ -std=c++17 <filename>.cpp -o <output_executable_name>

# Run the compiled program
./<output_executable_name>
```

For example, to compile and run the **Rock-Paper-Scissors** game:

```bash
g++ -std=c++17 rock_paper_scissor.cpp -o rock_paper_scissor
./rock_paper_scissor
```

---

## Learning Path

This repository serves as a progression guide through standard procedural C++:

1. **Basics & Operations**: `basics.cpp`, `basics_02.cpp`, `user_defined_functions.cpp`
2. **Standard Library Data Types & Iterations**: `basics_03.cpp`
3. **Control Flow & Simple Arithmetic**: `temperature_convertor.cpp`, `hypotenuse_calculator.cpp`, `triangle.cpp`, `ration_distributor_program.cpp`
4. **Validations & Advanced Math**: `console_calculator.cpp`
5. **Full Game Loops**: `number_guessing_program.cpp`, `rock_paper_scissor.cpp`
