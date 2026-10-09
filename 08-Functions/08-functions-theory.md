# Functions in C

## 1. Introduction
A function is a named block that performs one focused task. Functions make programs easier to read, test, reuse, and maintain.

## 2. Declaration, Prototype, Definition, and Call
```c
int add(int first, int second);              /* prototype */
int add(int first, int second) { return first + second; } /* definition */
int result = add(2, 3);                      /* call */
```
The prototype tells the compiler the return type and parameter types before a call.

## 3. Parameters, Arguments, and Return Values
Parameters are variables in the definition; arguments are values supplied by a caller. A non-void function returns a value with `return`. A `void` function returns no value.

Functions may have no parameters, parameters, no return value, or a return value. Choose the smallest useful interface.

## 4. Call by Value
C passes ordinary arguments by value, so a function receives copies. Changing a parameter does not change the caller's variable. Passing an address with a pointer is a later way to modify caller data.

## 5. Recursion
Recursion is a function calling itself. A base case stops the calls; the recursive case moves toward that base case. Factorial is `n * factorial(n - 1)` with `factorial(0) = 1`.

## 6. Scope Basics
A local variable exists inside its block. A parameter is local to its function. Avoid unnecessary global variables because they make data flow harder to track.

## 7. Advantages and Best Practices
Use meaningful names, prototypes, one responsibility per function, correct return types, and clear preconditions. Avoid missing returns, mismatched declarations, accidental infinite recursion, and overly long functions.

## 8. Interview Questions
1. What is a function prototype?
2. What is the difference between a parameter and an argument?
3. Why does call by value not change the original?
4. What are the base and recursive cases?

## 9. Practice Questions
1. Write a function that tests whether a number is prime.
2. Return the maximum of three values.
3. Calculate a sum using a `void` display function.
4. Write recursive Fibonacci and identify its base cases.

## 10. Summary
Functions divide a program into reusable tasks. Understand the declaration, definition, call, parameters, return values, scope, and recursion base case.
