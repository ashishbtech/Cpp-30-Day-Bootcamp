# Day 20: std::deque (Double-Ended Queue)

## The Logic (Vector + Queue)
Requires `#include <deque>`.
Pronounced "deck", it stands for Double-Ended Queue. It is essentially a dynamic array that is open at both ends.

### Key Functions:
* **The Ends:** `.push_back()`, `.push_front()`, `.pop_back()`, `.pop_front()`. All of these operate in strictly $O(1)$ time.
* **Access:** You can use `.front()` and `.back()`, or you can use square brackets `[]` to grab any element in the middle in $O(1)$ time.
* **Iteration:** Unlike a standard `stack` or `queue`, you can use range-based for loops (`for (auto x : dq)`) or standard iterators on a deque.

## Vector vs. Deque (The Trade-off)
If a deque can do everything a vector can do, plus push to the front instantly, why do we still use vectors?
* **Memory Layout:** A vector stores all its numbers in one massive, perfectly contiguous block of memory. This makes a vector slightly faster for raw iteration and CPU caching. 
* A deque stores its data in chunks scattered around memory, with a master map keeping track of them. This allows it to expand easily at both ends, but makes random access `dq[i]` slightly slower than `vec[i]`.

## Why this matters for DSA
The deque is the absolute undisputed champion of **Sliding Window** problems. 
The classic interview question *"Find the maximum element in every contiguous subarray of size K"* (often called Sliding Window Maximum) will give you a Time Limit Exceeded (TLE) error if you try to use a Vector. By using a Deque, you can instantly drop elements from the front as the "window" slides forward, solving a Hard-level problem in perfectly optimized $O(N)$ time.