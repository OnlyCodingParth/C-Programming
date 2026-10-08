# Introduction to C

## 1. What Is C?

C is a compiled, procedural, general-purpose programming language. It gives programmers convenient abstractions such as functions and loops while still providing direct access to memory through pointers.

## 2. History

C was developed by Dennis Ritchie at Bell Labs in the early 1970s. It evolved from earlier languages such as BCPL and B and was used to implement much of the Unix operating system. The C language was later standardized, including the C90, C99, C11, and C17 standards.

## 3. Features, Advantages, and Limitations

C is fast, portable, small, expressive, and close to the hardware. It supports structured programming, separate compilation, and manual memory management. These properties make it useful for operating systems, embedded systems, compilers, libraries, and performance-sensitive software.

The same control creates risks. C does not automatically check array bounds or manage memory. Buffer overflows, dangling pointers, uninitialized values, and data races are possible when code is careless. Large applications also require disciplined design because the language provides fewer built-in abstractions than newer languages.

## 4. Applications

C is used in operating systems, firmware, embedded devices, device drivers, networking software, databases, interpreters, compilers, and portable libraries. Learning C also makes memory layout, execution, and performance easier to understand.

## 5. Basic Program Structure

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, C!\n");
    return 0;
}
```

`#include` is handled by the preprocessor and makes declarations from a header available. `main` is the program entry point. `printf` writes formatted output. `return 0` reports successful completion to the operating system.

## 6. How a C Program Executes

1. **Source code:** The programmer writes a `.c` file.
2. **Preprocessing:** Directives such as `#include` and `#define` are expanded.
3. **Compilation:** The compiler checks C syntax and translates the result into assembly.
4. **Assembly:** An assembler turns assembly into an object file.
5. **Linking:** The linker combines object code with required libraries.
6. **Executable:** The result is an executable file.
7. **Running:** The operating system loads and starts the executable at `main`.

For example, `gcc program.c -o program` usually performs these stages automatically.

## 7. Headers and Functions

Header files contain declarations and macros shared by source files. `<stdio.h>` declares standard input/output functions such as `printf`. A function is a named block of work. `main(void)` says that `main` takes no arguments, and its `int` return type supplies a status code.

## 8. Comments and Syntax

Use `//` for a single-line comment and `/* ... */` for a block comment. Statements usually end with semicolons. C is case-sensitive, uses braces to group blocks, and ignores whitespace outside tokens.

Identifiers should communicate purpose and must not be reserved words. String literals use double quotes; character constants use single quotes. Every called function should have a visible declaration before use.

## 9. Common Beginner Mistakes

- Omitting a semicolon or brace.
- Writing `=` when comparison `==` is required.
- Calling a function without including its header.
- Using a variable before initializing it.
- Using the wrong format specifier.
- Forgetting that array indexes start at zero.
- Dividing by zero.
- Ignoring compiler warnings.
- Confusing a character such as `'A'` with a string such as `"A"`.

## 10. Important Terminology

| Term | Meaning |
|---|---|
| Source file | Human-readable `.c` code |
| Compiler | Translates C into lower-level code |
| Header | Declarations shared with source files |
| Function | Named reusable block of code |
| Statement | An instruction in a program |
| Expression | Code that produces a value |
| Object file | Compiled code before final linking |
| Linker | Combines object code and libraries |
| Executable | Program that the operating system can run |

## 11. Key Points

- C programs begin execution in `main`.
- Headers provide declarations.
- The build process has preprocessing, compilation, assembly, and linking stages.
- Compiler warnings help find mistakes.
- C provides power and responsibility; memory and input must be handled carefully.

## 12. Interview Questions

1. Who created C and where?
2. What is the role of `main`?
3. What is the difference between a compiler and a linker?
4. Why is a header included?
5. What does `return 0` usually mean?
6. What is the difference between source code and an executable?

## 13. Practice Questions

1. Write a program that prints your name and learning goal.
2. Add a second `printf` call to the sample program.
3. Compile a program with `-Wall -Wextra` and explain each warning.
4. Predict what happens when the newline is removed from a `printf` call.
5. Draw the stages from a `.c` file to an executable.

## Summary

C combines readable structured programming with low-level control. Learn the compilation process, the syntax of small programs, and safe habits before moving to larger topics.