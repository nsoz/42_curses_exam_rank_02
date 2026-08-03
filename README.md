# 42 Cursus — Exam Rank 02

![C](https://img.shields.io/badge/language-C-blue.svg)
![School](https://img.shields.io/badge/school-42-black.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

Solutions written during **Exam Rank 02** at 42 School — a proctored, offline exam where every exercise must be solved from scratch, with no internet access, no notes, and a strict time limit. It tests the fundamentals built up during the early Piscine curriculum: string manipulation, recursion, pointers, bitwise operations, and simple algorithms, all implemented in plain C without any authorized standard library functions beyond what the subject allows.

## Structure

Exercises are grouped by difficulty level, each level building on the C skills validated in the previous one.

```
.
├── level1/     # Basic string & array manipulation (reversing, copying, searching)
├── level2/     # Bit manipulation, string parsing, integer conversion
└── level 3/    # Recursion, linked lists, number theory (GCD/LCM), formatted output
```

Each `.c` file is a self-contained exercise implementing one required function (e.g. `ft_strcpy`, `ft_atoi`, `rot_13`, `fizzbuzz`, `print_hex`).

## Build

There's no shared build system — each file compiles independently:

```sh
cc -Wall -Wextra -Werror level1/ft_swap.c -o ft_swap
```

## Context

Part of the [42 School](https://42.fr/) common core curriculum. Exams are re-attempted on subsequent ranks if not all exercises pass, which is reflected in the commit history.

## License

MIT — see [LICENSE](LICENSE).
