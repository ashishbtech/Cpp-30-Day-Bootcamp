# Day 6: Range-based For Loops & The `auto` Keyword

## 1. Range-based For Loops
Instead of tracking an index `i`, C++ lets you extract the actual values directly from a collection (like an array or a string) one by one.

**Syntax:** `for (variableType variableName : arrayName)`
It translates to: "For every element in this array, copy its value into this variable and run the loop."

## 2. The `auto` Keyword
C++ is a strongly typed language, but the compiler is smart enough to figure out data types on its own. If you use `auto`, the compiler looks at the data and assigns the correct type automatically.
* `auto x = 10;` (Compiler knows it's an `int`)
* `auto y = 5.5;` (Compiler knows it's a `double`)

## 3. Combining Them (The DSA Speed Hack)
When you combine these two features, iterating through data structures becomes incredibly fast to write: `for (auto x : arr)`

**Crucial Detail:** By default, `for (auto x : arr)` creates a *copy* of each element. If you modify `x`, the original array does not change.
If you want to modify the actual elements inside the array, you must combine `auto` with a Reference `&`.
`for (auto& x : arr)` allows you to directly change the actual values inside the original data structure.