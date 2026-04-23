# Day 2: References vs Pointers

## The Logic (The C++ Upgrade)
In C, to modify a variable inside a function, we had to pass its address using a pointer.
`void swap(int *a, int *b)` required us to call it with `swap(&x, &y)` and dereference everything inside using `*a = *b`.

C++ introduces **References** using the `&` operator in the parameter list. 
`void swap(int& a, int& b)` tells the compiler that `a` and `b` are not copies of the variables, but direct aliases to the originals. 

### Key Rules of References:
1. **No Dereferencing:** You treat them exactly like normal variables. No `*` needed.
2. **Must be Initialized:** A pointer can be `NULL`. A reference MUST point to a valid object the moment it is created. You cannot have a "null reference."
3. **Cannot be Reassigned:** Once a reference is tied to a variable, it cannot be changed to point to a different variable later.

## Why this matters for DSA
When you start passing massive Data Structures (like a Vector with 100,000 elements) into a function, passing by value (making a copy) will cause a Time Limit Exceeded (TLE) error. Passing by reference `&` guarantees $O(1)$ time complexity because no copying occurs.