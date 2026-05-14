# Day 23: Sets (`std::set`)

## The Logic (Auto-Sorting & Auto-Unique)
Requires `#include <set>`.
A Set is a specialized container that strictly enforces two rules:
1. **Uniqueness:** It absolutely will not allow duplicate values. If you try to `.insert(20)` and `20` is already in the set, the compiler silently ignores the command.
2. **Sorted:** It automatically keeps all elements in perfectly sorted (ascending) order.

Behind the scenes, a `std::set` is not an array. It is a **Self-Balancing Binary Search Tree** (specifically a Red-Black Tree). Because of this, you cannot use square brackets `[]` to access elements.

### Key Functions & Time Complexity
* **`.insert(val)`:** $O(\log N)$ time. Drops the value into the correct position in the tree.
* **`.erase(val)`:** $O(\log N)$ time. Finds the value and removes it.
* **`.count(val)`:** $O(\log N)$ time. Returns `1` if the value exists, and `0` if it doesn't. This is the fastest way to check if an element is in your set.

## `set` vs. `unordered_set`
C++ also has `#include <unordered_set>`. 
* A standard `set` keeps things sorted, taking $O(\log N)$ time.
* An `unordered_set` sacrifices the sorting completely, using a Hash Table instead of a Tree. This drops the time complexity for inserting and searching to blindingly fast **$O(1)$** time. 

## Why this matters for DSA
If an interview question asks, "Find the number of unique elements in this array," you do not need to write a massive looping algorithm. You simply drop the entire array into a `std::unordered_set` and instantly return `set.size()`. It turns a 20-line problem into a 2-line problem.