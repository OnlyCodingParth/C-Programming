# The C Preprocessor

## 1. Introduction
The preprocessor runs before compilation. It handles directives beginning with `#`, producing source text that the compiler then parses.

## 2. `#define` and Macros
Object-like macros replace names with text:
```c
#define BUFFER_SIZE 100
```
Function-like macros also replace text:
```c
#define SQUARE(x) ((x) * (x))
```
Parentheses protect operator precedence. Macros do not provide type checking and arguments may be evaluated more than once.

## 3. `#include`
`#include <stdio.h>` searches implementation/system include locations. `#include "myheader.h"` commonly searches the current project first, then configured include locations. Headers provide declarations and reusable definitions.

## 4. Conditional Compilation
`#ifdef`, `#ifndef`, `#if`, `#else`, `#elif`, and `#endif` include or exclude source sections before compilation. Header guards commonly use `#ifndef` to prevent duplicate inclusion.

## 5. Macro Advantages and Disadvantages
Macros can express compile-time switches and small constants. They can make debugging harder, ignore types, create precedence bugs, or evaluate an expression twice. Prefer `const` objects or functions when they express the intent better.

## 6. Macro vs `const` vs Function
Use `const` for typed read-only data, a function for type-checked behavior, and a macro when preprocessing itself is required. A macro is not a normal function call.

## 7. Common Mistakes and Best Practices
Parenthesize parameters and the whole expansion, avoid side effects in macro arguments, use uppercase names for project macros, keep macros short, include required headers, and use header guards for custom headers.

## 8. Interview Questions
1. What happens during preprocessing?
2. Why do macro parameters need parentheses?
3. How do angle brackets differ from quotes in `#include`?
4. What problem do header guards solve?

## 9. Practice Questions
1. Write a safe `MIN` macro.
2. Add a debug message controlled by `#ifdef DEBUG`.
3. Replace a numeric macro with a typed `const`.
4. Demonstrate a macro precedence bug and fix it.

## 10. Summary
The preprocessor performs textual inclusion, replacement, and conditional selection before compilation. Use it carefully and prefer typed language features where possible.
