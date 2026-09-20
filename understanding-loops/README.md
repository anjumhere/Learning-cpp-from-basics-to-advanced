# understanding-loops

A loose sandbox for experimenting with nested loops and printed
patterns. Not part of the numbered course — worked on in parallel to
build an instinct for how inner/outer loop counts shape output.

## Files

| File | What it shows |
|------|----------------|
| `square.cpp` | Nested-loop grids: a `(count+1) × (count+1)` symbol square, then rows of characters `A`–`F` and `a`–`e` — stepping a `char` forward inside the inner loop |
| `pat2.cpp` | Triangle pattern: the inner loop runs `j < i`, printing a growing number of `*` per row |

## Prerequisites

[`01_basics`](../01_basics) — `06_loops.cpp` covers the same `for`-loop
mechanics used here.

## Compile & run

```bash
g++ -std=c++17 understanding-loops/square.cpp -o square
./square
```