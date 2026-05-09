# Day 18: Stacks & Queues

## 1. std::stack (LIFO)
Requires `#include <stack>`.
A stack follows **Last-In, First-Out (LIFO)**. Think of a stack of plates or your browser history. The last thing you put on top is the very first thing you take off.

* **.push()**: Adds an element to the top. $O(1)$
* **.top()**: Reads the element at the top. $O(1)$
* **.pop()**: Removes the element at the top. $O(1)$ (Note: It does not return the value, it just destroys it).

## 2. std::queue (FIFO)
Requires `#include <queue>`.
A queue follows **First-In, First-Out (FIFO)**. Think of a line at a grocery store or a video game matchmaking lobby. The first person to enter the line is the first person to leave.

* **.push()**: Adds an element to the back of the line. $O(1)$
* **.front()**: Reads the element at the very front of the line. $O(1)$
* **.pop()**: Removes the element at the front of the line. $O(1)$

## The DSA Constraint (No Iterators)
Unlike a `vector`, you **cannot** loop through a stack or a queue using a `for` loop, and you cannot use square brackets `[i]` to access a random element in the middle. 

They are designed to be strictly restrictive. If you want to see what is underneath the top of a stack, you are mathematically forced to `pop()` the top element off first.