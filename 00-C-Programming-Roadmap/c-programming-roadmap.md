# C Programming Roadmap

## 1. What This Repository Contains

This repository is a step-by-step collection of C programs, explanations, exercises, and projects. The numbered folders move from the first C program through advanced language features and practical projects.

Each `.c` file is intended to be compiled and run independently. Each theory Markdown file explains the concepts behind the programs.

## 2. How to Use This Repository

Read the theory for a topic first, study the matching source files, then type, compile, modify, and test the examples yourself. Keep a notebook of errors and new vocabulary. Do not only read the programs; predict their output before running them.

## 3. Learning Sequence

1. Introduction and program structure
2. Basic syntax, variables, types, and input/output
3. Operators and expressions
4. Conditional statements and loops
5. Patterns and functions
6. Arrays, strings, and pointers
7. Structures, unions, and dynamic memory
8. File handling, the preprocessor, and command-line arguments
9. Advanced C features
10. Projects and practice problems

## 4. Beginner to Advanced Progression

- **Beginner:** folders 01–06. Learn syntax, data, decisions, repetition, and simple problem solving.
- **Intermediate:** folders 07–14. Organize programs with functions and data structures, then manage memory and files.
- **Advanced:** folders 15–19. Learn translation controls, program arguments, advanced type features, projects, and increasingly difficult problems.

## 5. Topic-by-Topic Roadmap

| Folder | Topic |
|---|---|
| 01 | Introduction to C, compilation, and program structure |
| 02 | Hello World, comments, variables, constants, types, and format specifiers |
| 03 | Console input and output |
| 04 | Arithmetic, relational, logical, assignment, increment, bitwise, and conditional operators |
| 05 | `if`, `else`, `switch`, and nested decisions |
| 06 | `for`, `while`, `do-while`, `break`, and `continue` |
| 07 | Star, number, and alphabet patterns |
| 08 | Functions, parameters, return values, and recursion |
| 09 | One-dimensional, two-dimensional, and multidimensional arrays |
| 10 | Strings and string operations |
| 11 | Pointers and their relationship with arrays and functions |
| 12 | Structures and unions |
| 13 | `malloc`, `calloc`, `realloc`, and `free` |
| 14 | Opening, reading, writing, and appending files |
| 15 | `#define`, `#include`, and macros |
| 16 | `argc` and `argv` |
| 17 | Storage classes, `typedef`, enumerations, and bit-fields |
| 18 | Small C projects |
| 19 | Beginner, intermediate, and advanced practice |

## 6. Recommended Learning Order

Follow the folder numbers. Within a folder, read the theory and then work through the source files from top to bottom. Revisit earlier topics whenever a later example uses them.

## 7. Practicing the `.c` Files

Compile each program, record its output, change one thing, and compile again. Add boundary cases such as zero, negative values, empty input, and large values where appropriate. After studying an example, rewrite it without looking.

## 8. Compile and Run

With GCC, a typical command is:

```text
gcc source.c -o program
./program
```

On Windows, run the executable as:

```text
program.exe
```

Use a different output name for each program, or compile from the program's directory.

## 9. GCC Basics

Useful commands include:

```text
gcc -std=c17 -Wall -Wextra source.c -o program
gcc -E source.c -o source.i
gcc -S source.c -o source.s
gcc -c source.c -o source.o
```

Warnings are valuable feedback. Treat warnings seriously instead of hiding them.

## 10. Debugging Basics

Read the complete compiler message, identify the file and line, and reduce the problem to a small example. Print intermediate values, check assumptions, and test one change at a time. For larger programs, a debugger such as GDB can set breakpoints, inspect variables, and step through statements.

## 11. Practice Strategy

Use a cycle of learn, predict, code, compile, test, debug, and explain. Solve the same problem in two ways when possible. Increase difficulty gradually and keep solutions simple before optimizing them.

## 12. Project Strategy

Start with a clear problem statement and a small feature list. Separate input, processing, output, and storage. Build one feature at a time, validate input, save working versions, and test normal and invalid cases.

## 13. C Concepts Required Before DSA

Before studying data structures and algorithms, be comfortable with variables, control flow, functions, recursion, arrays, strings, pointers, structures, dynamic memory, and basic complexity reasoning. You should also be able to compile, debug, and test a program independently.

## 14. Important Milestones

- Compile and explain a Hello World program.
- Write programs using decisions and loops.
- Design reusable functions.
- Process arrays and strings safely.
- Explain pointers and dynamic allocation.
- Read and write structured data in files.
- Complete a small project without copying a solution.
- Solve problems while explaining time and space trade-offs.

## 15. Final C-Programming Checklist

- Can I explain every line I wrote?
- Do I compile with warnings enabled?
- Do I initialize variables before use?
- Do I validate input and check function results?
- Do I avoid buffer overflows and invalid pointer use?
- Do I release dynamically allocated memory?
- Do I close files?
- Have I tested edge cases?
- Can I break a larger task into functions?
- Can I debug a compiler error and a runtime error?

## Summary

Progress steadily from syntax to programs, from programs to data structures, and from exercises to projects. The most effective practice is active: write code, run it, inspect it, improve it, and explain the result.