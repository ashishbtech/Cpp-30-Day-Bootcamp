# Day 9: Constructors and Destructors

## 1. Constructors (The Birth)
A constructor is a special function that runs automatically the moment an object is created in memory.
* It must have the **exact same name** as the class.
* It does **not** have a return type (not even `void`).

**Types of Constructors:**
1. **Default Constructor:** Takes no parameters. (`Player p;`)
2. **Parameterized Constructor:** Takes arguments to set specific data immediately. (`Player p("Ashish", 999);`)

*Note: C++ supports Constructor Overloading. You can have both a default and a parameterized constructor in the same class, and C++ will pick the right one based on how you create the object.*

## 2. Destructors (The Death)
A destructor runs automatically the exact moment an object goes out of scope (e.g., when the function it was created inside finishes running, or when the program ends).
* It has the exact same name as the class, but is preceded by a tilde (`~`).
* It takes **no parameters** and has **no return type**.
* You can only have ONE destructor per class.

## Why this matters for DSA (Preventing Memory Leaks)
Remember Day 4 (Dynamic Memory)? If a class uses `new` to allocate an array or a node dynamically, that memory stays locked up forever unless you explicitly free it. 

The Destructor is your safety net. By putting `delete` or `delete[]` inside the destructor, you guarantee that whenever the object gets destroyed, its dynamically allocated memory gets cleaned up automatically. This prevents memory leaks when working with massive Linked Lists or Trees.