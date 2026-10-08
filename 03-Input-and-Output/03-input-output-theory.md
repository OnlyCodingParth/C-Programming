# Input and Output in C

## 1. Standard Input and Output

Standard input (`stdin`) normally receives keyboard data. Standard output (`stdout`) normally displays program output. The `<stdio.h>` header declares the standard I/O functions used in these examples.

## 2. `printf` and Format Strings

`printf` writes a format string and optional values:

```c
printf("Count: %d, average: %.2f\n", count, average);
```

The format string contains ordinary text and conversion specifiers. The arguments must have compatible types. Common specifiers include `%d`, `%u`, `%f`, `%c`, `%s`, `%ld`, and `%lld`.

Escape sequences represent special characters: `\n` newline, `\t` tab, `\\` backslash, `\"` quotation mark, and `\'` apostrophe.

## 3. `scanf`

`scanf` reads formatted input:

```c
int age;
scanf("%d", &age);
```

The address-of operator `&` supplies the location where `scanf` should store the value. Ordinary variables need it; an array used as a string already supplies a pointer to its first element in this context.

Always check the return value. It tells how many conversions succeeded. For a `char` after previous formatted input, whitespace in the format string can skip leftover whitespace:

```c
scanf(" %c", &letter);
```

## 4. Character I/O

`getchar()` reads one character from `stdin` and returns it as an `int` so it can also represent `EOF`. `putchar()` writes one character:

```c
int character = getchar();
putchar(character);
```

## 5. `fgets` and `puts`

`fgets(buffer, size, stdin)` reads at most `size - 1` characters, keeps space for `'\0'`, and may retain the newline. It is generally safer for reading a line because the buffer size is supplied.

`puts(string)` writes a null-terminated string and appends a newline. It cannot perform formatting.

## 6. Strings and the Input Buffer

C strings are arrays of characters ending in a null character, `'\0'`. Input functions consume characters from a stream. If one function leaves a newline in the stream, the next function may read it instead of the intended data. Mixing `scanf` and line input therefore requires careful buffer handling.

A robust beginner pattern is to read complete lines with `fgets` and then convert them with functions such as `strtol` after learning the required error checks.

## 7. `scanf` Versus `fgets`

`scanf` is convenient for simple, whitespace-separated values, but its format rules and leftover input can surprise beginners. `fgets` gives a bounded line read and handles spaces in names or sentences. For interactive programs, line input followed by validated conversion is often easier to control.

## 8. Security Considerations

- Never use an unbounded `%s` with `scanf`.
- Supply the buffer size to `fgets`.
- Check return values and conversion results.
- Expect invalid, empty, or unexpectedly long input.
- Do not use user input as a format string.
- Keep strings null-terminated and within their allocated storage.

## 9. Common Mistakes

- Forgetting `&` in `scanf`.
- Using `%f` for a `double` with `scanf` instead of `%lf`.
- Ignoring a failed conversion.
- Reading a newline unexpectedly after `scanf`.
- Assuming `fgets` always removes the newline.
- Passing a non-string or uninitialized array to `puts`.
- Using a buffer too small for expected input.

## 10. Key Points

- `printf` formats output; `puts` prints a string with a newline.
- `getchar` and `putchar` work with one character at a time.
- `scanf` stores into addresses and reports conversion success.
- `fgets` limits the number of characters read.
- Input is a stream, so unread characters affect later reads.

## 11. Interview Questions

1. What are `stdin` and `stdout`?
2. Why does `scanf` usually need `&`?
3. Why does `scanf("%lf", &value)` read a `double`?
4. What does `fgets` do with the newline?
5. Why is an unbounded `%s` dangerous?
6. What does `getchar` return at end of input?

## 12. Practice Questions

1. Print a small receipt using `printf` and multiple specifiers.
2. Read an integer and reject input when `scanf` returns zero.
3. Read a full name with `fgets`.
4. Write a program that copies characters from input to output using `getchar` and `putchar`.
5. Compare the behavior of `scanf` and `fgets` when the user enters spaces.

## Summary

Console I/O connects a C program to users and other streams. Use matching format specifiers, check results, bound string input, and understand the characters remaining in the input stream.