# Arrays in C

## 1. Introduction
An array stores multiple values of one type in consecutive elements. It is useful for collections such as marks, temperatures, and matrix data.

## 2. Declaration, Initialization, and Indexing
```c
int numbers[5] = {10, 20, 30, 40, 50};
printf("%d", numbers[0]);
```
Indexes start at zero, so a five-element array uses indexes 0 through 4. The size is fixed for an ordinary local array.

## 3. One-, Two-, and Multidimensional Arrays
A one-dimensional array is a list. A two-dimensional array uses `array[row][column]` and suits matrices. A multidimensional array adds another index, such as `cube[layer][row][column]`.

## 4. Traversal and Input/Output
Use a loop from 0 to `size - 1`. Nested loops traverse rows and columns. Check the result of input functions when reading user data.

## 5. Memory Layout
Elements are stored contiguously, and `array[index]` means the element at an offset from the first element. This makes traversal efficient, but it does not make out-of-bounds access valid.

## 6. Array Operations and Functions
Common operations are traversal, sum, average, minimum, and maximum. When passed to a function, an array parameter behaves like a pointer to its first element; pass the length separately because it is not retained by the parameter.

## 7. Arrays and Pointers
For an array named `numbers`, `numbers` commonly converts to a pointer to its first element in expressions. `numbers[index]` and `*(numbers + index)` access the same element. This is only a basic relationship.

## 8. Common Mistakes and Best Practices
Never read or write outside bounds, confuse an index with a value, assume a function knows the array length, or divide by zero for an empty collection. Use named size constants, initialize data, and validate indexes.

## 9. Interview Questions
1. Why does indexing start at zero?
2. How are 2D arrays traversed?
3. Why must a function receive an array length?
4. What is an out-of-bounds access?

## 10. Practice Questions
1. Find the second-largest element.
2. Transpose a matrix.
3. Count even and odd values.
4. Pass an array to a function that calculates its sum.

## 11. Summary
Arrays provide indexed storage for same-type values. Use correct bounds, loops, dimensions, and separately tracked sizes.
