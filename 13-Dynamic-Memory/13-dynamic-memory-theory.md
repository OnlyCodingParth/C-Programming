# Dynamic Memory Allocation in C

## 1. Introduction
Dynamic memory lets a program request storage while it is running. The storage comes from the heap and remains available until it is released.

## 2. Stack, Heap, Static, and Dynamic Memory
Automatic local variables commonly use stack storage and end when their block ends. Static storage lasts for the program lifetime. Heap storage is requested dynamically and has a lifetime controlled by the programmer.

## 3. Why Dynamic Memory Is Needed
Use it when the required size is known only at runtime, when an array must grow, or when data must outlive the current block. Prefer ordinary arrays when a fixed size is enough.

## 4. `malloc`
```c
int *values = malloc(count * sizeof *values);
if (values == NULL) { /* handle failure */ }
```
`malloc(bytes)` returns a pointer to uninitialized storage or `NULL`. In C, casting its result is unnecessary and can hide a missing `<stdlib.h>` include. `sizeof *values` stays correct if the pointed-to type changes.

## 5. `calloc`
`calloc(count, size)` allocates space for `count` elements and initializes all allocated bytes to zero. This commonly produces zero integer values, unlike `malloc`, which leaves values indeterminate.

## 6. `realloc`
`realloc(pointer, new_bytes)` changes an allocation size and may move it. Assign the result to a temporary pointer first:
```c
int *temporary = realloc(values, new_count * sizeof *values);
if (temporary != NULL) values = temporary;
```
If it fails, the original allocation is still valid.

## 7. `free`, Leaks, Dangling Pointers, and Use-After-Free
Call `free(pointer)` exactly once for each successful allocation. A memory leak occurs when allocated storage is no longer reachable. A dangling pointer still contains a released address; assigning `NULL` after `free` helps prevent accidental reuse. Never dereference a freed pointer.

## 8. Dynamic Arrays and Memory Diagrams
```text
pointer variable        heap allocation
      |                         |
      +------------------------> [10][20][30]
```
The pointer variable itself is not the array; it stores the array's address.

## 9. Comparison Table
| Function | Purpose | Initial contents | Must release? |
|---|---|---|---|
| `malloc` | Allocate bytes | Indeterminate | Yes, with `free` |
| `calloc` | Allocate elements | Zero-initialized bytes | Yes, with `free` |
| `realloc` | Resize an allocation | Preserves available old bytes | Yes, with `free` |
| `free` | Release allocation | Not applicable | Not applicable |

## 10. Common Mistakes and Best Practices
Check every allocation, include `<stdlib.h>`, calculate byte counts with `sizeof`, guard multiplication overflow in production code, preserve the old pointer during `realloc`, free on every exit path, and never access beyond the allocated element count.

## 11. Interview Questions
1. What is the difference between `malloc` and `calloc`?
2. Why should `realloc` use a temporary pointer?
3. What is a memory leak?
4. Why should a pointer be set to `NULL` after `free`?

## 12. Practice Questions
1. Allocate an array and find its maximum.
2. Grow an array as values are entered.
3. Allocate a zeroed matrix with one allocation.
4. Identify and fix a use-after-free bug.

## 13. Summary
Dynamic memory is flexible but manual. Allocate carefully, check for `NULL`, resize safely, release exactly once, and avoid dangling or invalid pointers.
