# Pattern Programming in C

## 1. Introduction
Pattern programs print rows of spaces, stars, characters, or numbers. They are small exercises for translating a visual rule into loops.

## 2. Why Patterns Are Useful
They build confidence with nested loops, counters, spacing, arithmetic, and careful output formatting. The same reasoning helps with tables and matrices.

## 3. Rows, Columns, and Nested Loops
The outer loop usually controls rows. The inner loop controls columns or items in one row. For every row, identify how many spaces and symbols it needs.

```c
for (int row = 1; row <= rows; row++) {
    for (int column = 1; column <= row; column++) printf("*");
    printf("\n");
}
```

## 4. Spaces, Characters, and Numbers
Leading spaces align pyramids. Star patterns print `*`; alphabet patterns often use `'A' + column`; number patterns use a counter, column number, or formula.

## 5. Common Pattern Families
Star patterns include triangles, pyramids, inverted pyramids, and diamonds. Number patterns include number triangles, Floyd's Triangle, and Pascal's Triangle. Alphabet patterns print letters in increasing or decreasing rows.

## 6. Floyd's and Pascal's Triangle
Floyd's Triangle uses one increasing counter across rows. Pascal's Triangle starts each row at 1 and calculates the next value with `value = value * (row - column) / (column + 1)`.

## 7. Step-by-Step Pattern-Solving Method
1. Count rows.
2. Count spaces and visible items in each row.
3. Decide whether the count increases or decreases.
4. Assign one loop to each independent count.
5. Print a newline after each row.
6. Test the first, middle, and last rows.

## 8. Common Mistakes
Typical errors are missing newlines, incorrect bounds, forgetting spaces, resetting a shared counter, and mixing zero-based and one-based formulas. Keep row and column names meaningful.

## 9. Converting a Pattern into Loops
Write one sample row, describe its counts in words, then turn each count into a loop. For a centered pyramid, print `rows - row` spaces followed by `2 * row - 1` stars.

## 10. Best Practices
Start with a fixed small row count, keep each program standalone, use nested loops directly, and format output consistently. Increase complexity only after the row rules are clear.

## 11. Interview Questions
1. What does the outer loop usually represent?
2. How many stars are in row `r` of a pyramid?
3. How is Floyd's Triangle different from a number triangle?
4. Why are spaces needed in a centered pattern?

## 12. Practice Problems
1. Print a hollow rectangle.
2. Print a right-aligned number triangle.
3. Print an alphabet diamond.
4. Print a hollow pyramid.

## 13. Summary
Pattern solving is controlled counting. Analyze each row, assign counts to nested loops, print the row, and verify boundaries.
