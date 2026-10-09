# Loops in C

## 1. Introduction
Loops repeat a block while a condition permits it. They reduce repeated code and make counting and traversal practical.

## 2. What Are Loops?
Every loop has a body and a controlling condition. A typical counting loop has initialization, condition, and update.

## 3. `for` Loop
```c
for (initialization; condition; update) {
    /* body */
}
```
Initialization runs once, the condition is checked before each iteration, the body runs, and update runs after the body.

## 4. `while` Loop
```c
while (condition) {
    /* body and an update */
}
```
It is useful when the number of repetitions is not known in advance. The update must eventually make the condition false.

## 5. `do-while` Loop
```c
do {
    /* body */
} while (condition);
```
The body executes before the test, so it runs at least once. Notice the semicolon after the condition.

## 6. Entry- and Exit-Controlled Loops
`for` and `while` are entry-controlled: their bodies may run zero times. `do-while` is exit-controlled: its body runs at least once.

## 7. Nested Loops
A loop inside another loop is nested. The inner loop completes for each outer iteration; this is useful for tables, matrices, and patterns.

## 8. `break`, `continue`, and Loop Control
`break` exits the nearest loop immediately. `continue` skips the rest of the current iteration and starts the next test/update cycle. Use them deliberately.

## 9. Infinite Loops and Off-by-One Errors
An omitted or always-true condition creates an infinite loop. Off-by-one errors commonly come from using `<` where `<=` is intended, or vice versa. Test zero, one, and boundary values.

## 10. `for` vs `while`, `while` vs `do-while`
Use `for` for clear counter-controlled repetition; use `while` for condition-controlled repetition. Choose `do-while` when one execution is required, such as a menu.

## 11. Common Mistakes and Best Practices
Initialize counters, update them on every path, keep loop bounds visible, use braces, avoid changing the counter unexpectedly, and keep nested loops small and readable.

## 12. Key Points
Initialization starts state, the condition controls entry, the body does work, and update changes state. A correct loop makes measurable progress toward termination.

## 13. Interview Questions
1. Which loop always executes at least once?
2. What is the difference between `break` and `continue`?
3. What causes an infinite loop?
4. How many times does `for (i = 0; i < 5; i++)` run?

## 14. Practice Questions
1. Print a multiplication table.
2. Sum digits using a `while` loop.
3. Print a star rectangle with nested loops.
4. Skip multiples of three with `continue`.

## 15. Summary
Use loops to repeat safely. Select the loop whose test and update best describe the task, and carefully check its bounds.
