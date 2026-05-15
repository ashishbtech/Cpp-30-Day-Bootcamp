# Day 24: Maps (`std::map`)

## The Logic (Key-Value Pairs)
Requires `#include <map>`.
A map stores data in pairs: `<KeyType, ValueType>`.
Like a `set`, a `std::map` is built on a Red-Black Tree. This means:
1. **Keys are Unique:** You cannot have two "Health Potion" keys. If you assign a new value to an existing key, it overwrites the old value.
2. **Keys are Sorted:** It automatically sorts the pairs alphabetically or numerically based *only* on the Key. 

### The `[]` Operator (The C++ Trap)
You can insert and read values using square brackets: `inventory["Health Potion"] = 5;`. 
**WARNING:** If you ask a map to print a key that does not exist (e.g., `cout << inventory["Gold Coins"];`), the map will **not** throw an error. Instead, it will silently create that key, assign it a default value of `0`, and add it to your map permanently. 

To safely check if something exists without accidentally creating it, use `.count("Key")` first.

## `map` vs. `unordered_map`
Just like sets, C++ has `#include <unordered_map>`.
* `map`: Kept in perfectly sorted order. Takes $O(\log N)$ time to insert/find.
* `unordered_map`: Uses a Hash Table. Completely ignores sorting, but drops the time complexity to a blindingly fast **$O(1)$**. 

## Why this matters for DSA
The `unordered_map` is the solution to almost every medium-level array problem on LeetCode.
* **Frequency Counting:** If an interview asks "Find the most frequent word in this document," you loop through the document and write `wordMap[word]++;`. The map will automatically count every occurrence in 3 lines of code.
* **The Two Sum Problem:** The most famous interview question in the world (finding two numbers that add up to a target) is solved in $O(N)$ time by using an `unordered_map` to remember the numbers you have seen so far.