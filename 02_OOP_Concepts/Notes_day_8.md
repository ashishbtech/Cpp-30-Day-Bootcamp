# Day 8: Classes, Objects, and Access Specifiers

## The Logic (The Core of OOP)
A **Class** is a blueprint. An **Object** is the actual thing built from that blueprint. 
In the code, `Shinobi` is the class (the concept). `s1` and `s2` are the objects (the actual entities sitting in memory).

## Access Specifiers (The Security System)
C++ uses three main keywords to protect data inside a class:

### 1. `private:` (The Vault)
* Anything under this label can **only** be seen and modified by the functions living *inside* the class itself. 
* By default, if you don't write any access specifier, C++ makes everything private automatically.
* *Example:* The `executeJutsu` function can use `chakraLevel` because they belong to the same class. The `main` function cannot touch `chakraLevel` directly.

### 2. `public:` (The Front Door)
* Anything under this label can be accessed from anywhere in the program, including the `main` function.
* You usually put your variables in `private` and your functions (methods) in `public` so people can interact with your object safely without breaking its internal state.

### 3. `protected:`
* Similar to `private`, but it allows "child" classes to access the data. (We will cover this heavily on Day 11: Inheritance).

## Why this matters for DSA
When you build complex data structures like a Binary Search Tree (BST), you do not want the `main` function to accidentally manually overwrite a node's left or right pointer, breaking the entire tree. You make the pointers `private`, and force the user to call a `public` `insert()` function that safely links the nodes following the proper rules.