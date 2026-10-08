# Operators in C

## 1. Introduction

An operator is a symbol that performs an operation. The values operated on are operands. An expression combines operators and operands to produce a value.

## 2. Arithmetic Operators

| Operator | Meaning |
|---|---|
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Remainder |

For integers, `/` performs integer division: `10 / 3` is `3`. `%` gives the remainder, so `10 % 3` is `1`. Do not divide by zero.

## 3. Relational Operators

`>`, `<`, `>=`, `<=`, `==`, and `!=` compare values. A false comparison produces `0`; a true comparison produces `1` in an ordinary relational expression.

Use `==` for comparison and `=` for assignment.

## 4. Logical Operators

`&&` is logical AND, `||` is logical OR, and `!` is logical NOT. C treats zero as false and a nonzero value as true. `&&` and `||` use short-circuit evaluation: the right operand may not be evaluated when the left operand already determines the result.

## 5. Assignment and Compound Assignment

`=` stores a value. Compound forms combine an operation with assignment:

```c
score += 5;  /* equivalent in effect to score = score + 5 */
score *= 2;
```

Other forms include `-=`, `/=`, `%=`, `&=`, `|=`, `^=`, `<<=`, and `>>=`.

## 6. Increment and Decrement

`++` adds one and `--` subtracts one. Prefix changes the value before it is used; postfix uses the old value and changes it afterward:

```c
int x = 5;
int a = ++x;  /* x and a become 6 */
int b = x++;  /* b is 6, then x becomes 7 */
```

Avoid modifying the same variable more than once in a complicated expression.

## 7. Bitwise Operators

Bitwise operators work on integer bits:

| Operator | Meaning |
|---|---|
| `&` | Bitwise AND |
| `|` | Bitwise OR |
| `^` | Bitwise XOR |
| `~` | Bitwise complement |
| `<<` | Left shift |
| `>>` | Right shift |

For example, `12` is `1100` and `10` is `1010`; `12 & 10` is `1000`, or `8`. Bitwise operations are useful for flags, masks, and low-level data.

## 8. Conditional Operator

The ternary operator has three operands:

```c
condition ? value_if_true : value_if_false
```

It selects one of two expressions. Use it for a short, clear choice; use `if` when the logic is longer.

## 9. Unary and Binary Operators

A unary operator has one operand, such as `-number`, `!ready`, or `++count`. A binary operator has two operands, such as `a + b` or `left < right`. The conditional operator is ternary because it has three operands.

## 10. Precedence and Associativity

Precedence determines which operators group first. Multiplication, division, and remainder normally group before addition and subtraction:

```c
int result = 2 + 3 * 4;    /* 14 */
int clear = (2 + 3) * 4;   /* 20 */
```

Associativity resolves operators with the same precedence. Parentheses are the clearest way to communicate intent. Do not rely on memorized precedence for complex expressions.

## 11. Truth Values and Expressions

An expression can produce a value, and a condition interprets zero as false and nonzero as true. Assignment is also an expression, which is why accidental assignments in conditions can compile. Parentheses and warnings help make intent clear.

## 12. Common Mistakes

- Using `=` instead of `==`.
- Expecting integer division to produce a fraction.
- Applying `%` to floating-point operands.
- Dividing by zero.
- Confusing `&` with `&&` or `|` with `||`.
- Shifting by a negative or invalid amount.
- Depending on the order of complicated side effects.
- Forgetting that bitwise complement depends on the type's representation.
- Omitting parentheses when precedence is not obvious.

## 13. Practical Examples

```c
int even = number % 2 == 0;
int allowed = age >= 18 && hasId;
int larger = a > b ? a : b;
unsigned int masked = flags & permissionMask;
```

## 14. Key Points

- Operators act on operands and form expressions.
- Relational and logical results are useful as conditions.
- Short-circuit evaluation can prevent unsafe right-side operations.
- Prefix and postfix forms differ when used inside a larger expression.
- Parentheses improve correctness and readability.

## 15. Interview Questions

1. What is the difference between `/` and `%`?
2. Why is `==` different from `=`?
3. What is short-circuit evaluation?
4. How do prefix and postfix increment differ?
5. What does a bitwise AND do?
6. How do precedence and associativity differ?

## 16. Practice Questions

1. Calculate quotient and remainder for two integers.
2. Write a condition requiring both a valid age and an ID.
3. Predict the values after prefix and postfix operations.
4. Convert two small decimal numbers to binary and apply `&`, `|`, and `^`.
5. Rewrite a nested ternary expression using `if` statements.

## Summary

Operators are the building blocks of calculations, comparisons, decisions, and bit manipulation. Learn their operand counts, precedence, and side effects, then use parentheses and simple expressions to keep programs understandable.