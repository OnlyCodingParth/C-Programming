# Strings in C

## 1. Introduction
A C string is a character array ending with the null character `'\0'`. The terminator tells string functions where text ends.

## 2. Declaration and Initialization
```c
char word[] = "C";
char greeting[] = {'H', 'i', '\0'};
```
The first form automatically reserves room for the terminator. Always provide enough buffer space.

## 3. Input and Output
`fgets(buffer, sizeof buffer, stdin)` limits input and can read spaces. It may retain a newline. `scanf("%s", buffer)` stops at whitespace and, without a width limit, can overflow a buffer. `printf("%s")` and `puts()` display strings.

## 4. Common String Functions
Include `<string.h>`. `strlen()` counts characters before `'\0'`; `strcpy()` copies into a destination with enough room; `strcat()` appends into enough room; `strcmp()` returns zero when strings are equal and otherwise a negative or positive result.

## 5. Traversal and Reversal
Traverse while `text[index] != '\0'`. To reverse manually, swap the first and last characters, moving inward. Do not swap the terminator.

## 6. Buffer Sizes and Common Mistakes
Reserve one extra byte for `'\0'`, avoid writing past the buffer, do not compare strings with `==`, and do not call `strcpy` or `strcat` with an undersized destination. Check input results.

## 7. Best Practices
Use `fgets`, explicit buffer sizes, `sizeof` for local arrays, and clear ownership of writable storage. Remove a trailing newline when the program requires a clean line.

## 8. Interview Questions
1. What is `'\0'`?
2. Why is `strlen` not the buffer size?
3. Why can `scanf("%s")` be unsafe?
4. How does `strcmp` indicate equality?

## 9. Practice Questions
1. Count vowels in a string.
2. Test whether a string is a palindrome.
3. Remove its trailing newline.
4. Implement string length using a loop.

## 10. Summary
Strings are terminated character arrays. Safe buffer sizes, correct terminators, and `<string.h>` functions are essential for reliable text handling.
