# Day 17: Pairs & Tuples

## 1. std::pair (The Dynamic Duo)
Included via `<utility>` (though `<iostream>` or `<vector>` often includes it automatically). 
A pair stores exactly two values. They do not have to be the same data type.

* **Declaration:** `pair<string, int> p1;`
* **Initialization:** You can use `p1 = make_pair("Hello", 1);` or the modern, faster syntax `p1 = {"Hello", 1};`.
* **Access:** Use `.first` and `.second` to read or modify the values.

## 2. std::tuple (The Multi-Pack)
Included via `<tuple>`. 
A tuple is an extension of a pair. It can hold three, four, or as many different data types as you want.

* **Access:** Because there are more than two items, you cannot use `.first`. You must use `get<index>(tupleName)`. Example: `get<0>(t1)` grabs the first element.

## 3. Structured Binding (The DSA Speed Hack)
In modern C++ (C++17 and above, which is standard on all coding platforms like GeeksforGeeks and LeetCode), you don't even need to use `.first` or `get<0>`. 

You can "unpack" a pair or tuple directly into custom variables in a single line using the `auto` keyword and square brackets:
`auto [name, roll, marks] = getStudentData();`
This makes your code incredibly fast to read and write during technical interviews.

## Why this matters for DSA
When you write Graph algorithms like Dijkstra's algorithm to find the shortest path, you need to keep track of two things for every node: the Node ID, and the Distance to get there. Instead of building a custom `Node` class, you simply use a `pair<int, int>` and push it directly into your queue.