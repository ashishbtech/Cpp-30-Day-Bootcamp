# Day 21: Iterators

## The Logic (Universal Smart Pointers)
An iterator is an object that points to an element inside an STL container. Because it acts like a pointer, you must use the dereference operator `*` to actually see the value it is pointing at (`*it`).

### Key Functions:
* **`.begin()`**: Points to the very first element in the container.
* **`.end()`**: A massive C++ trap. It does NOT point to the last element. It points to the empty memory space exactly one step *after* the last element. This is why our loops run while `it != nums.end()`.
* **`.rbegin()`**: Reverse Begin. Points to the actual last element.
* **`.rend()`**: Reverse End. Points to the theoretical space one step *before* the first element.

## The Power of `auto`
Look at the code. Typing `vector<int>::iterator it;` is exhausting and visually clutters the file. By using `auto`, the compiler instantly knows it's an iterator, cutting your typing time in half.

## `advance()`
If you want to jump directly to the middle of a container, you can use the `advance(iterator, steps)` function. This moves the iterator forward without needing a `for` loop.

## Why this matters for DSA
Iterators are the bridge between Phase 3 (Data Structures) and Phase 4 (Algorithms). 
When we learn C++ built-in algorithms next week—like instantly sorting an array, or doing a highly optimized Binary Search in one line of code—those functions do not accept raw arrays. They mathematically require you to pass in iterators (`nums.begin()`, `nums.end()`). Mastering iterators unlocks the highest tier of C++ performance.