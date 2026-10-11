# Command-Line Arguments in C

## 1. Introduction
Command-line arguments let a user provide input when starting a program instead of typing it after a prompt.

## 2. `argc` and `argv`
```c
int main(int argc, char *argv[]) { /* ... */ }
```
`argc` is the number of argument strings. `argv` is an array of pointers to null-terminated strings.

## 3. Indexing and Program Name
`argv[0]` is conventionally the program name. Additional values begin at `argv[1]`. Valid indexes are `0` through `argc - 1`; `argv[argc]` is a null pointer.

## 4. Example Execution
```text
./program argument1 argument2
```
On Windows with GCC, the conceptual form is:
```text
program.exe argument1 argument2
```
The program name counts in `argc`, so the first command above has `argc == 3`.

## 5. Arguments Are Strings
Every argument arrives as text. A program that needs a number must validate and convert the string, commonly with functions such as `strtol` rather than assuming `atoi` detected errors.

## 6. Common Mistakes and Best Practices
Check `argc` before reading an optional argument, validate numeric text and ranges, do not modify string storage unnecessarily, and print a usage message for invalid forms.

## 7. Interview Questions
1. What does `argc` count?
2. What is stored in `argv[0]`?
3. Why are command-line numbers initially strings?
4. What happens when no extra argument is provided?

## 8. Practice Questions
1. Add two validated command-line numbers.
2. Count words supplied as arguments.
3. Print the longest argument.
4. Build a small command-line calculator.

## 9. Summary
`argc` describes how many strings arrived and `argv` provides them. Always validate indexes and convert text deliberately.
