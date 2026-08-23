# 01 — Basics

The starting point of the path: how a C++ program is built, variables
and types, input and operators, branching, loops, strings, and a first
functions primer. Goal: get comfortable writing, compiling, and reading
small complete programs before moving on to data structures.

## Files (in learning order)

| # | File | What it teaches |
|---|------|-----------------|
| 01 | `01_hello_world.cpp` | Program anatomy: `main()`, `#include`, `cout`, escape sequences, comments, compile & run |
| 02 | `02_variables_and_data_types.cpp` | Variables and core types (`int`, `double`, `char`, `bool`, `string`), initialization, assignment, `const` |
| 03 | `03_variable_swap.cpp` | Swapping two variables using temporary storage — first classic algorithm |
| 04 | `04_input_and_operators.cpp` | `cin` input, arithmetic + `%`, integer-division truncation, compound assignment, comparison and logical operators |
| 05 | `05_temperature_converter.cpp` | Branching with `if` / `else-if` / `else`, case-insensitive choices |
| 06 | `06_loops.cpp` | `while`, `do-while`, `for`; `break` vs `continue` |
| 07 | `07_math_functions.cpp` | `<cmath>` playground: `max`, `min`, `pow`, `sqrt`, `abs`, `round`, `ceil`, `floor` |
| 08 | `08_hypotenuse_calculator.cpp` | `double` math with `pow`/`sqrt` and output precision (`fixed`, `setprecision`) |
| 09 | `09_console_calculator.cpp` | Input validation with `while`, dispatching with `switch`, division-by-zero handling (`std::isinf`) |
| 10 | `10_random_numbers.cpp` | Seeding with `srand(time(0))`, mapping random values to outcomes via `switch` |
| 11 | `11_strings_and_loops.cpp` | String methods (`getline`, `.length()`, `.append()`, `.at()`, ...), `continue`, nested loop shape printing |
| 12 | `12_function_basics.cpp` | Function primer: prototypes, parameters, return values, calling — the bridge to every later chapter |

## Prerequisites

None — start here. Files 04–06 teach branching and looping; everything
from 07 onward combines them into small applications.
