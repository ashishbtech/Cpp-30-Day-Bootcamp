# Day 16: std::vector (Dynamic Arrays)

## The Logic (Automated Memory)
To use vectors, you must `#include <vector>`. 
Because vectors are built using Class Templates (which we learned on Day 15), you must specify the data type in angle brackets: `vector<int> nums;`.

### Key Functions:
* `.push_back(val)`: Adds an element to the very end of the array. $O(1)$ time complexity.
* `.pop_back()`: Removes the last element. $O(1)$ time complexity.
* `.front()` & `.back()`: Instantly accesses the first and last elements.
* `[]`: You can access elements exactly like a normal array (e.g., `nums[0]`).

## Size vs. Capacity (Crucial DSA Concept)
If you run the code, you will notice `.size()` and `.capacity()` are not always the same number.
* **Size:** How many elements are actually inside the vector right now.
* **Capacity:** How much memory the vector has currently allocated.

When a vector reaches its maximum capacity and you try to `push_back` another element, it doesn't just add one slot. Behind the scenes, C++ creates a brand new array that is **double** the size, copies all your old data over, and deletes the old array. 
This means pushing elements is usually instant ($O(1)$), but occasionally hits an $O(N)$ spike when it has to double its memory. 

## Why this matters for DSA
When you write Graph algorithms like Depth First Search (DFS) or Breadth First Search (BFS), you will represent the Graph as an "Adjacency List". In C++, an Adjacency List is literally just an array of vectors: `vector<int> adj[100];`. You cannot survive complex DSA without mastering the vector.