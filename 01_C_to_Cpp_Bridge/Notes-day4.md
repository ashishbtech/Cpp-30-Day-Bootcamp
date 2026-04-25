# Day 4: Dynamic Memory Allocation

## The Logic (Leaving malloc Behind)
In C, memory allocation looked like this:
`int* arr = (int*)malloc(n * sizeof(int));`

In C++, we use the `new` keyword to allocate memory and the `delete` keyword to free it.
`int* arr = new int[n];`

### The Rules of C++ Memory:
1. **Single Variable:** - Allocate: `int* ptr = new int;`
   - Free: `delete ptr;`
2. **Arrays:** - Allocate: `int* arr = new int[n];`
   - Free: `delete[] arr;` *(Notice the brackets! If you just use `delete arr;` on an array, it only frees the first element and causes a massive memory leak).*

## Why this matters for DSA
Before we unlock the `std::vector` (which handles memory automatically), you need to know how arrays work under the hood. In many technical interviews, if you are asked to implement a custom Hash Map or a Trie from scratch, you will be required to manage the memory yourself using `new` and `delete` to prove you understand how the RAM is actually being utilized.