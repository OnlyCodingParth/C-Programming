# Pointers in C

## 1. Introduction
A pointer is a variable that stores the address of another object. Pointers are powerful, but every pointer must be used with a valid, correctly typed target.

## 2. Address and Value
For `int value = 42;`, `&value` produces its address. `int *pointer = &value;` stores that address. `*pointer` dereferences it and produces the value at that address.

```text
value = 42
pointer ----> value
pointer_to_pointer ----> pointer ----> value
```
An address identifies a location; a value is the data stored there. `%p` with `(void *)pointer` prints an address.

## 3. Declaration and Initialization
The type before `*` describes the pointed-to object: `int *`, `char *`, and `double *` are different pointer types. Initialize a pointer with a valid address or `NULL`; never use an uninitialized pointer.

## 4. Dereferencing and NULL
Dereferencing reads or writes the pointed-to object. `NULL` means no valid target and must not be dereferenced. Check a pointer before use when it may be null.

## 5. Pointer Arithmetic
For an array, incrementing an `int *` moves to the next `int`, not merely one byte. `pointer + index` is valid within the same array (and one position past its end, but that position must not be dereferenced). Decrement returns to a previous element.

## 6. Pointers and Arrays
Array indexing and pointer notation correspond: `numbers[index]` is equivalent to `*(numbers + index)`. This does not remove the need for bounds checking.

## 7. Pointers and Functions
Passing an address lets a function modify the caller's object. A swap function receives `int *` parameters and exchanges `*first` and `*second`.

## 8. Pointer to Pointer
With `int **pp = &pointer`, `*pp` is the pointer and `**pp` is the original integer. Follow the levels carefully.

## 9. Common Mistakes and Safety
Uninitialized pointers, dangling pointers to objects whose lifetime ended, invalid casts, wrong pointer types, out-of-bounds arithmetic, and dereferencing `NULL` cause undefined behavior. Never return a pointer to a local variable.

## 10. Best Practices
Initialize pointers, keep lifetimes clear, use matching types, check `NULL`, stay within an array, and dereference only known-valid addresses. This chapter intentionally avoids dynamic memory and function pointers.

## 11. Interview Questions
1. What do `&` and `*` mean?
2. Why does pointer arithmetic depend on type?
3. What is a null pointer?
4. How can a function change a caller's variable?

## 12. Practice Questions
1. Print an array using only pointer notation.
2. Write a pointer-based swap.
3. Find the largest array element using a pointer.
4. Draw the variable-pointer-pointer diagram.

## 13. Summary
Pointers connect names to memory addresses. Learn address, initialization, dereferencing, array movement, function parameters, and validity before attempting advanced pointer techniques.
