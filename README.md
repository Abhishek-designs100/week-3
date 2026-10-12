# Week 3 — Pointers & Strings (C Programming)

This repository completes the Week 3 assignment on pointer basics, strings, and dynamic memory allocation.

## Programs

1. `01_reverse_string.c` — reverses a string by moving two pointers from the ends toward the middle.
2. `02_count_vowels_consonants.c` — counts alphabetic vowels and consonants; spaces, digits, and punctuation are ignored.
3. `03_swap_using_pointers.c` — swaps two integers by passing their addresses to a function.
4. `04_array_malloc.c` — allocates an integer array with `malloc()`, accepts values, displays the array and sum, then releases memory with `free()`.
5. `05_word_counter.c` — mini project that counts words in a sentence/paragraph by traversing the text with a pointer.

## Compile and run

Use GCC or another C compiler. For example, with GCC:

```bash
gcc 01_reverse_string.c -o reverse
./reverse
```

Repeat with the desired source filename and output name. On Windows, run the generated `.exe` file instead of `./reverse`.

## Concepts demonstrated

- Pointer declaration, dereferencing, incrementing, and traversal
- Character arrays and null-terminated strings
- Passing addresses to functions
- Dynamic memory allocation with `malloc()`
- Checking allocation success and releasing memory with `free()`

Each `.c` file has its own `main()` function, so compile and run one program at a time.
