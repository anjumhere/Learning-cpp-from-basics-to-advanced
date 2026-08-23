# Data Type Sizes (Modern 64-bit Systems)

These are the sizes you'll see in practice on modern 64-bit machines (Linux, macOS, Windows) with gcc/clang/MSVC. The C/C++ standard only guarantees _minimums_ — actual sizes are compiler/platform-defined. Always confirm with `sizeof()` when it matters, but these are safe defaults to assume.

## C / C++ Basic Types

| Type                 |   Size (bytes)   | Size (bits) | Notes                                                                                                        |
| -------------------- | :--------------: | :---------: | ------------------------------------------------------------------------------------------------------------ |
| `char`               |        1         |      8      | Always 1 byte by definition                                                                                  |
| `signed char`        |        1         |      8      |                                                                                                              |
| `unsigned char`      |        1         |      8      |                                                                                                              |
| `_Bool` / `bool`     |        1         |      8      | C99+ / C++                                                                                                   |
| `short`              |        2         |     16      |                                                                                                              |
| `unsigned short`     |        2         |     16      |                                                                                                              |
| `int`                |        4         |     32      | Standard guarantees only 16-bit minimum, but 4 bytes everywhere modern                                       |
| `unsigned int`       |        4         |     32      |                                                                                                              |
| `long`               |      4 or 8      |  32 or 64   | **4 bytes on Windows (MSVC)**, **8 bytes on Linux/macOS (gcc/clang)** — this is the one that trips people up |
| `unsigned long`      |      4 or 8      |  32 or 64   | Same platform split as `long`                                                                                |
| `long long`          |        8         |     64      | Consistent across all major platforms                                                                        |
| `unsigned long long` |        8         |     64      |                                                                                                              |
| `float`              |        4         |     32      | IEEE 754 single precision                                                                                    |
| `double`             |        8         |     64      | IEEE 754 double precision                                                                                    |
| `long double`        | 8, 10, 12, or 16 |   varies    | Platform/compiler dependent — least portable size of all                                                     |
| `wchar_t`            |      2 or 4      |  16 or 32   | 2 bytes on Windows, 4 bytes on Linux/macOS                                                                   |

## Fixed-Width Integer Types (`<stdint.h>` / `<cstdint>`)

Use these instead of `int`/`long` when you need a _guaranteed_ size regardless of platform:

| Type       | Size (bytes) | Size (bits) |
| ---------- | :----------: | :---------: |
| `int8_t`   |      1       |      8      |
| `uint8_t`  |      1       |      8      |
| `int16_t`  |      2       |     16      |
| `uint16_t` |      2       |     16      |
| `int32_t`  |      4       |     32      |
| `uint32_t` |      4       |     32      |
| `int64_t`  |      8       |     64      |
| `uint64_t` |      8       |     64      |

## Pointers

| Type                                               | Size (bytes) | Notes                                                                                                                                         |
| -------------------------------------------------- | :----------: | --------------------------------------------------------------------------------------------------------------------------------------------- |
| Any pointer (`int*`, `char*`, `struct foo*`, etc.) |      8       | On a 64-bit system, ALL pointer types are the same size (8 bytes) regardless of what they point to. On 32-bit systems, this would be 4 bytes. |

## Other Common Types (C++)

| Type          | Size (bytes)  | Notes                                                                                                |
| ------------- | :-----------: | ---------------------------------------------------------------------------------------------------- |
| `std::string` |      ~32      | Implementation-defined (small-string optimization varies by compiler); don't rely on an exact number |
| `size_t`      | 8 (on 64-bit) | Unsigned type used for sizes/indices — matches pointer width                                         |

## Quick Rules of Thumb

- **1 byte = 8 bits**, always.
- `char` is always exactly 1 byte — it's the standard's baseline unit.
- `int` is 4 bytes on essentially every modern system you'll use.
- `long` is the size that differs by OS — Linux/macOS: 8 bytes, Windows: 4 bytes. This matters if you're moving code across platforms.
- When in doubt, don't hardcode a number — use `sizeof(type)` in your code to check on the actual machine you're compiling on.
