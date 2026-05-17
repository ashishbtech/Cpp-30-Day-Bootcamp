# Day 26: Pointers Deep Dive & The Linked List Node

## 1. Pointer Mechanics Recap
A pointer is simply a variable that stores a memory address.
* **`&` (Address-Of Operator):** Grabs the physical location of a variable in RAM. (`int* ptr = &x;`)
* **`*` (Dereference Operator):** Travels to the address the pointer is holding and interacts with the actual data sitting there. (`*ptr = 99;` actually changes the value of `x`).
* **`nullptr`:** The modern C++ keyword for a pointer that points to absolutely nothing. Never use the old C-style `NULL`.

## 2. The Arrow Operator (`->`)
When you have a pointer to an object (like `Node* head`), you cannot use the standard dot operator (`head.data`) to access its variables. 
Instead, C++ gives us the Arrow Operator `->`. 
Writing `head->data` is just a clean, fast shortcut for typing `(*head).data`.

## 3. The Node Architecture
A Linked List is not a single contiguous block of memory like an Array or a Vector. It is a chain of individual objects (Nodes) scattered randomly across your computer's RAM.
* The `data` variable holds the actual value.
* The `next` variable is a pointer. It holds the physical memory address of where the next Node is located. 

## Why this matters for DSA
Because Nodes are scattered and only linked by pointers, you cannot jump straight to the 3rd element using `[2]`. You are mathematically forced to start at the `head` and use a `while` loop to manually follow the pointers one by one until you reach your destination. 

The tradeoff? Adding a new Node to the very middle of a Linked List takes exactly $O(1)$ time, whereas a Vector would take $O(N)$ time because it has to shift thousands of elements out of the way.