# Day 25: Hash Map Project (Frequency Counter)

## The Logic (The Ultimate Interview Cheat Code)
This project demonstrates the sheer power of the `std::unordered_map`. 

### 1. StringStream (`#include <sstream>`)
In C, splitting a sentence into individual words required the clunky `strtok()` function and pointer arithmetic. 
In C++, a `stringstream` acts exactly like `cin`. But instead of asking the user to type on the keyboard, it "reads" from the string you give it. 
The line `while (ss >> word)` automatically pulls out one word at a time, perfectly ignoring the spaces.

### 2. The Magic Line: `wordCount[word]++;`
This single line of code is doing three massive things simultaneously:
1. It looks inside the map for the current word.
2. If the word **does not exist**, the map silently creates it and assigns it a default value of `0`.
3. It immediately takes that value and adds `1` to it (`++`).

This completely eliminates the need for `if/else` statements to check if a word has been seen before.

### 3. Finding the Maximum
Once the map has tallied every word in $O(N)$ time, we use a simple range-based for loop with Structured Binding (`auto const& [w, count]`) to scan the map, update our `maxCount`, and lock in the `mostFrequentWord`.

## Phase 4 Complete
You have officially mastered the Standard Template Library. You can dynamically allocate arrays, enforce strict data access with Stacks/Queues, sort data in a single line, and instantly look up values in $O(1)$ time using Hash Maps.