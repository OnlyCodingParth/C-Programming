# Advanced C Concepts

## 1. Introduction
Storage classes, aliases, enumerations, and bit-fields expose more of C's type, lifetime, and representation model. They are advanced because their effects depend on scope, linkage, implementation choices, or low-level layout.

## 2. Scope, Lifetime, and Linkage
Scope describes where a name is visible. Lifetime describes how long an object exists. Linkage describes whether declarations in different scopes refer to the same entity.

## 3. Storage Classes
`auto` is the ordinary local storage duration default. `static` gives a local object program lifetime while keeping its name local, or gives a file-scope name internal linkage. `extern` declares an object defined elsewhere. `register` is a request for efficient storage; an implementation may ignore it and taking its address is restricted in traditional C rules.

## 4. `typedef`
`typedef` creates an alias, not a new distinct type:
```c
typedef unsigned long Count;
typedef struct { int id; } Record;
```
Aliases improve readability but should not hide important pointer or const behavior.

## 5. `enum`
An enumeration names integer constants. Values start at zero by default and increase by one unless assigned:
```c
enum State { OFF, ON = 4, PAUSED };
```
Here `OFF` is 0, `ON` is 4, and `PAUSED` is 5.

## 6. Bit-Fields
Bit-fields place integer members in a specified number of bits:
```c
struct Flags { unsigned enabled : 1; };
```
They can compactly represent flags, but allocation order, alignment, and allowable types are implementation-dependent. Do not use them for portable serialized file formats without a defined representation.

## 7. Common Mistakes and Best Practices
Do not confuse scope with lifetime, assume `register` guarantees speed, duplicate an `extern` definition, rely on enum size, or assume identical bit-field layout across compilers. Use these features only when their trade-offs are clear.

## 8. Interview Questions
1. How does a static local differ from an ordinary local?
2. What does `extern` declare?
3. Does `typedef` create a new type?
4. Why are bit-fields not fully portable?

## 9. Practice Questions
1. Track calls with a static local.
2. Create a typedef for a structure.
3. Model traffic-light states with an enum.
4. Store four Boolean flags in bit-fields and discuss portability.

## 10. Summary
These features improve organization and representation when used carefully. Understand visibility, lifetime, linkage, aliases, enum values, and implementation-defined layout.
