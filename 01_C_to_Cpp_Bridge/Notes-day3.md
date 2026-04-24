# Day 3: Function Overloading & Default Arguments

## 1. Function Overloading
C++ allows multiple functions to share the exact same name as long as their **parameters (signatures) are different**.

The compiler tells them apart by checking:
* The **number** of arguments (e.g., 2 variables vs. 3 variables).
* The **type** of arguments (e.g., `int` vs. `double`).

*Note: You cannot overload a function simply by changing its return type. The parameters themselves must be different.*

## 2. Default Arguments
You can assign default values directly in a function's parameter list. If you call the function without passing a value, it uses the default. If you pass a value, it overrides the default.

**The Golden Rule of Default Arguments:**
Once you make a parameter default, all parameters to its right MUST also be default. 
* Valid: `void calc(int a, int b = 0, int c = 1)`
* Invalid: `void calc(int a = 0, int b, int c)`

## Why this matters for DSA
When building utility functions for complex trees or graphs, you often need to perform similar logic on different data types or with optional starting states (like a default starting depth of 0 for a DFS algorithm). Overloading and default arguments keep your utility code unified under single, readable function names.