# Day 19: std::priority_queue (Heaps)

## 1. The Max-Heap (Default)
Requires `#include <queue>`.
By default, a `priority_queue` acts as a **Max-Heap**. It automatically sorts itself so that the largest element is always at `.top()`.

* **Syntax:** `priority_queue<int> pq;`
* **Time Complexity:** * `.push()`: $O(\log N)$ 
  * `.pop()`: $O(\log N)$
  * `.top()`: $O(1)$

## 2. The Min-Heap (The Interview Gotcha)
Often, you don't want the largest number; you want the smallest number to be at the top. C++ makes the syntax for a Min-Heap famously ugly, and you must memorize it.

* **Syntax:** `priority_queue<int, vector<int>, greater<int>> pq;`
* You must include `<vector>` for this to work. It tells the compiler to use a vector as the underlying container and apply the `greater<int>` rule to reverse the sorting logic.

## Why this matters for DSA
If an interview question asks you to find the "Top K Frequent Elements" or the "Kth Largest Number" in a massive array, sorting the entire array takes $O(N \log N)$ time. By using a Priority Queue, you can keep the size of the heap strictly at $K$, dropping the time complexity down to $O(N \log K)$, which is significantly faster and will instantly impress the interviewer.

Additionally, when you learn **Dijkstra's Algorithm** for finding the shortest path on a map, a Min-Heap is the absolute core engine that makes the algorithm work.