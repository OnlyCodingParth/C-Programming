# Conditional Statements in C

## 1. Introduction
Conditional statements let a program choose actions. They make output depend on data instead of always following one fixed path.

## 2. What Are Conditional Statements?
C conditions are expressions evaluated as true or false. In C, zero is false and every nonzero value is true.

## 3. Why They Are Needed
Programs use decisions for validation, menus, grading, permissions, ranges, and error handling.

## 4. Decision-Making in C
Use `if` for one decision, `if-else` for two alternatives, an `else-if` ladder for ordered ranges, nested `if` for dependent decisions, and `switch` for one expression with discrete constant choices.

## 5. `if` Statement
```c
if (temperature > 25) {
    printf("Warm");
}
```
The condition is tested first; the block runs only when it is true.

## 6. `if-else`
```c
if (number % 2 == 0) printf("Even");
else printf("Odd");
```
Exactly one branch runs.

## 7. `else-if` Ladder
Conditions are checked from top to bottom. The first true branch runs; the final `else` is optional and handles all remaining cases.

## 8. Nested `if`
An `if` inside another `if` represents a second decision that matters only after the outer decision succeeds. Use braces to make nesting clear.

## 9. `switch`, `case`, `break`, and `default`
`switch (expression)` compares an integral or character expression with `case` constants. `break` exits the switch; without it, execution falls through to the next case. `default` handles no match.

## 10. `if-else` vs `switch`
Use `if-else` for ranges, compound expressions, and comparisons. Use `switch` for many exact values of one integer, character, or enumeration expression. A switch case cannot directly express `marks >= 75`.

## 11. Important Rules and Truth Values
Use `==` for comparison and `=` for assignment. Parenthesize compound conditions, keep case labels unique, and remember that `&&` requires both conditions while `||` requires at least one. C has no Boolean requirement for an `if` expression; integer-like results are converted to truth values.

## 12. Common Mistakes
- Accidental assignment in a condition.
- Missing braces or `break`.
- Overlapping or incorrectly ordered ranges.
- Comparing strings with `==` instead of a string function.
- Forgetting that `default` is optional but useful.

## 13. Best Practices and Key Points
Keep conditions readable, give branches meaningful names, validate boundary values, and avoid deeply nested logic. Every decision is based on a true/false expression.

## 14. Interview Questions
1. What is the difference between `=` and `==`?
2. Why is `break` used in a switch?
3. When is an `else-if` ladder preferable to a switch?
4. What happens when no switch case matches?

## 15. Practice Questions
1. Write a program that prints whether a year is a leap year.
2. Build a calculator with `switch`.
3. Assign a grade using an `else-if` ladder.
4. Validate age and membership using nested conditions.

## 16. Summary
Conditional statements control program flow. Choose `if`, `if-else`, ladders, nested decisions, or `switch` according to the kind of comparison required.
