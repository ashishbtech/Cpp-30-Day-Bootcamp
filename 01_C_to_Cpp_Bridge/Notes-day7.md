# Day 7: Structs in C++ (The Bridge to OOP)

## The Logic (Leveling up the C Struct)
In C, a struct is just a collection of data types. 
In C++, a struct is essentially an object. 

### Key Upgrades:
1. **No typedef:** You can just type `Student s1;` instead of `struct Student s1;`.
2. **Member Functions (Methods):** You can write functions directly *inside* the struct. Instead of writing `display(s1)`, you tell the struct to display itself: `s1.display()`.
3. **Constructors:** You can write a special setup function that runs automatically the moment you create the struct. It must have the exact same name as the struct itself. This prevents you from ever having "garbage values" in your variables because you are forced to initialize them immediately.

## Why this matters for DSA
When you start solving complex Graph problems or working with Priority Queues, you often need to store multiple pieces of connected data (like a node's X coordinate, Y coordinate, and cost). Writing a quick C++ struct with a constructor allows you to bundle that data cleanly and push it into a queue in a single, readable line of code.

## The Secret
In C++, a `struct` and a `class` are practically the exact same thing. The ONLY difference is that by default, everything inside a struct is accessible to the outside world, while a class hides its data by default.