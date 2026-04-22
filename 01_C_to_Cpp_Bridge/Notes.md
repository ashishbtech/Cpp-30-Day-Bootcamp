# Day 1: The New I/O & Namespaces

## The Logic (Leaving C Behind)
In C, we relied on `<stdio.h>` for `printf` and `scanf`, which required strict format specifiers like `%d` and passing memory addresses using `&`. 

C++ introduces `<iostream>` (Input/Output Stream). It is significantly faster to write and automatically detects data types.

### 1. Input and Output (`cin` and `cout`)
* `cout <<` (Character Output): Used to print to the screen. The `<<` is the insertion operator. It points *towards* `cout`, pushing data out.
* `cin >>` (Character Input): Used to take input. The `>>` is the extraction operator. It points *towards* the variable, pulling data in.
* `endl`: Stands for "end line." It does the exact same thing as `\n` in C, but it also flushes the output buffer. 

### 2. The Standard Namespace (`std`)
By default, all standard C++ functions live inside a "namespace" called `std`. If we didn't include `using namespace std;` at the top of our file, we would have to type `std::cout` and `std::cin` every single time we wanted to print or read something. 

Declaring the namespace globally saves us from typing that prefix repeatedly.

## Key Differences from C
* No more `%d`, `%f`, or `%c`.
* No more `&` required for basic inputs.
* Strings are handled natively using `#include <string>`, completely replacing the messy `char arr[50]` arrays from C.