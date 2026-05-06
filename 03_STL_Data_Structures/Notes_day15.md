# Day 15: Introduction to Templates

## The Logic (Write Once, Use Anywhere)
Templates allow you to write generic programs. Instead of locking a variable to an `int` or a `double`, you use a placeholder (usually `T` for Type). 

When you compile the code, the C++ compiler looks at how you called the function and automatically writes the correct `int` or `string` version of the function for you behind the scenes.

### 1. Function Templates
Syntax: `template <typename T>` 
(Place this right above the function).
Now, instead of `int getMaximum(int a, int b)`, you write `T getMaximum(T a, T b)`. The compiler figures out what `T` is based on the arguments you pass in.

### 2. Class Templates
You can also make an entire class generic. 
Our `Container` class doesn't care what it holds. It just knows it has a private variable of type `T`, and a getter/setter for it. 

When you create an object from a class template, you MUST specify the data type inside angle brackets `< >`.
* `Container<int> intBox(100);`
* `Container<string> strBox("Hello");`

## Why this matters for DSA & The STL
This is the absolute core of the Standard Template Library. 
Tomorrow, we are going to learn about `std::vector`. The reason a vector can hold integers `vector<int>`, strings `vector<string>`, or custom objects `vector<Enemy>` without crashing is entirely because C++ built the vector system using Class Templates just like the one we wrote today.