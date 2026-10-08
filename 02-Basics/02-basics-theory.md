# C Basics

## 1. Syntax Basics

C is case-sensitive. A program is made of declarations, expressions, statements, and blocks. Statements commonly end with `;`, and braces `{}` group a block. Whitespace improves readability but does not generally affect meaning.

```c
int count = 3;
count = count + 1;
```

## 2. Variables

A variable is a named object that stores a value. Declaration gives its type and name; initialization gives it its first value; assignment changes a value later.

```c
int score;       // declaration
score = 10;      // assignment
int level = 2;   // declaration and initialization
```

Initialize variables before reading them. Choose names that describe purpose, such as `studentCount` instead of `x`.

## 3. Constants

`const` prevents modification through that identifier after initialization:

```c
const int maximumAttempts = 3;
```

`#define` creates a preprocessor macro:

```c
#define DAYS_IN_WEEK 7
```

Use `const` for typed values that behave like objects. Use macros when preprocessing is specifically useful, and parenthesize complex macro definitions.

## 4. Fundamental Data Types

| Type | Typical use |
|---|---|
| `char` | A character or small integer |
| `int` | Ordinary whole numbers |
| `float` | Single-precision fractional values |
| `double` | More precise fractional values |
| `short` | An integer type no larger than `int` |
| `long` | An integer type at least as large as `int` |
| `long long` | An integer type at least as large as `long` |

Exact sizes are implementation-dependent. The standard guarantees minimum ranges rather than one universal size for every type.

## 5. Signed and Unsigned

Signed integer types represent negative and positive values. Unsigned types represent zero and positive values and often provide a larger positive range:

```c
signed int temperature = -5;
unsigned int itemCount = 5U;
```

Do not mix signed and unsigned values casually; implicit conversions can produce surprising comparisons.

## 6. `sizeof` and Ranges

`sizeof` reports the size of an object or type in bytes:

```c
printf("%zu\n", sizeof(int));
```

Use `<limits.h>` for integer limits such as `INT_MAX` and `<float.h>` for floating-point limits. A type's range depends on its representation and implementation.

## 7. Format Specifiers

`printf` needs a compatible conversion specifier:

| Value | Common `printf` specifier |
|---|---|
| `int` | `%d` or `%i` |
| `unsigned int` | `%u` |
| `short` | `%hd` |
| `long` | `%ld` |
| `long long` | `%lld` |
| `float` or `double` in `printf` | `%f` |
| `char` | `%c` |
| string | `%s` |
| `sizeof` result | `%zu` |

For `scanf`, use `%f` for `float` and `%lf` for `double`.

## 8. Type Conversion

An explicit cast requests a conversion:

```c
int whole = 5;
double result = (double) whole / 2;
```

Without the cast, integer division produces `2`, not `2.5`. C also performs implicit conversions, but relying on them without understanding the rules can lose precision or change signedness.

## 9. Naming Conventions

Use lowercase names with a consistent style, such as `totalMarks` or `total_marks`. Avoid one-letter names except for short, obvious examples. Do not use reserved words, spaces, or punctuation in identifiers. Constants should be visually distinct when that matches the project style.

## 10. Common Mistakes

- Reading an uninitialized variable.
- Assigning a value outside a type's range.
- Using `%d` for an incompatible type.
- Forgetting the `f` suffix for a `float` literal when clarity matters.
- Expecting integer division to preserve fractions.
- Assuming every machine has the same type sizes.
- Modifying a `const` object.
- Comparing signed and unsigned values without checking conversions.

## 11. Key Points

- A declaration describes a variable; initialization gives its first value.
- Assignment replaces an existing value.
- `const` expresses that a value should not change.
- Types determine representation, range, and valid operations.
- `sizeof` returns a byte count of type `size_t`.
- Format specifiers must match the value being formatted.

## 12. Interview Questions

1. What is the difference between declaration and initialization?
2. Why can integer division lose a fractional part?
3. How do `const` and `#define` differ?
4. Why is `sizeof` useful?
5. What is the difference between signed and unsigned integers?
6. Why must a format specifier match the argument type?

## 13. Practice Questions

1. Declare and print one value of each fundamental type.
2. Use `sizeof` to compare `int`, `long`, and `double`.
3. Demonstrate the difference between `5 / 2` and `(double)5 / 2`.
4. Create a constant for a tax rate and calculate a total.
5. Compile a program with warnings and correct a format mismatch.

## Summary

Variables give names to stored values, types describe those values, and format specifiers connect values to input/output functions. Strong type and initialization habits prevent many later bugs.