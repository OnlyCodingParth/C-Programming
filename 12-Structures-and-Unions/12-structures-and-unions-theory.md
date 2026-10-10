# Structures and Unions in C

## 1. Introduction
Structures group related values, possibly of different types, under one name. Unions provide different views of one shared memory area.

## 2. Structure Syntax and Members
```c
struct Student {
    char name[30];
    int age;
    float grade;
};
struct Student student = {"Maya", 20, 91.5f};
```
The declaration defines a type shape. A structure variable stores its members. Use the dot operator, such as `student.age`, to access a member.

## 3. Initialization and Arrays of Structures
Initialize members in declaration order or assign them individually. An array of structures stores many records and is traversed with a loop.

## 4. Nested Structures
A structure member can be another structure, such as an event containing a date. Access nested members with repeated dots: `event.date.year`.

## 5. Structures vs Arrays
An array stores multiple values of one type and uses indexes. A structure stores named members that may have different types and uses member names. Both can be combined, as in an array of student structures.

## 6. Unions and Memory Behavior
```c
union Value {
    int number;
    float decimal;
};
```
Union members start at the same address and share storage. Writing one member replaces the bytes used by another. Read the member that was most recently written, unless a carefully justified representation technique is being used.

## 7. Structure vs Union and Memory Basics
A structure generally has room for all members (plus possible padding). A union has room for its largest member and one active value at a time. `sizeof` reports the storage size chosen by the implementation.

## 8. Common Mistakes and Best Practices
Do not confuse `.` with `->` (the latter is for structure pointers, beyond these examples), assume exact padding, or read an inactive union member casually. Use meaningful member names, initialize records, and keep related data together.

## 9. Interview Questions
1. Why are structures useful?
2. How is a union different from a structure?
3. How is a nested member accessed?
4. Why can structure size exceed the sum of member sizes?

## 10. Practice Questions
1. Create a Book structure.
2. Store and search an array of employees.
3. Add an Address structure inside a Person.
4. Print `sizeof` for a structure and a union and explain the result.

## 11. Summary
Structures model records with independent members. Unions overlay members in shared storage, so only the currently written member should normally be read.
