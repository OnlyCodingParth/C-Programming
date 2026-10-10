# File Handling in C

## 1. Introduction
Files preserve data after a program ends. C uses a `FILE *` stream and functions from `<stdio.h>` for text and binary input/output.

## 2. `FILE *`, `fopen`, and `fclose`
```c
FILE *file = fopen("notes.txt", "r");
if (file == NULL) { perror("notes.txt"); return 1; }
fclose(file);
```
Always check `fopen` and close every successfully opened file.

## 3. File Modes
| Mode | Meaning |
|---|---|
| `r` | Read an existing file |
| `w` | Write; create or truncate |
| `a` | Append; create if needed |
| `r+` | Read and write an existing file |
| `w+` | Read and write; create or truncate |
| `a+` | Read and append; create if needed |

## 4. Reading and Writing Functions
`fprintf` and `fputs` write formatted or plain text. `fscanf` reads formatted data. `fgets` reads a bounded line. `fputc` and `fgetc` write or read one character.

`EOF` is a special result from character-oriented input functions. `fgets` signals end of input by returning `NULL`; do not compare a character to `EOF` when it was stored in a plain `char`.

## 5. Append and Error Handling
Write mode can delete old contents, while append mode writes at the end. Check function return values, use `perror` for opening errors, check `ferror` after reading when necessary, and close files on all paths.

## 6. Text and Binary Files
Text files contain human-readable characters. Binary files store bytes in an application-defined representation. Binary I/O is useful for exact data but is less portable when raw structures include padding or differing type sizes.

## 7. File Pointer Basics
The stream maintains a current position. Reading and writing advance it. Functions such as `rewind` and `fseek` can reposition it, but basic sequential access is easier to learn first.

## 8. Common Mistakes and Best Practices
Do not assume a file opened successfully, forget `fclose`, use `w` when you mean append, ignore buffer limits, or read malformed input without checking. Use bounded functions and meaningful file names.

## 9. Interview Questions
1. What does `fopen` return?
2. How does `w` differ from `a`?
3. How does `fgets` indicate end of file?
4. Why should every opened file be closed?

## 10. Practice Questions
1. Count lines in a text file.
2. Copy one text file into another.
3. Append a timestamped note.
4. Count characters using `fgetc`.

## 11. Summary
File handling is controlled stream access. Open with the correct mode, check errors, read or write safely, and close the stream.
