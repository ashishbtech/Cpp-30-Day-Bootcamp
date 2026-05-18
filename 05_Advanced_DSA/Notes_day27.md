# Day 27: Singly Linked List Implementation

## The Logic (Encapsulating the Chain)
We wrap our raw `Node` logic securely inside a `LinkedList` class. This class only needs a single private variable: the `head` pointer. As long as it knows where the first node is, it can reach any other node in the chain.

### 1. Insertion at Tail ($O(N)$)
To add a node to the very end of the list:
1. Create the new node dynamically.
2. If the list is completely empty (`head == nullptr`), simply make the new node the head.
3. If not, start at the head and use a `while(temp->next != nullptr)` loop to travel all the way to the very last node.
4. Update that last node's `next` pointer to lock onto the newly created node.

### 2. Insertion at Head ($O(1)$)
Adding to the front of the list is instant. This is a massive advantage over Vectors, which require $O(N)$ time to shift every element out of the way.
1. Create the new node.
2. Point the new node's `next` variable to the current `head`.
3. Shift the official `head` label over to the new node.

### 3. The Destructor (Automated Memory Cleanup)
Because every Node is created dynamically using the `new` keyword, they will stay in your RAM forever if you don't delete them. 
Our destructor `~LinkedList()` automatically triggers when the list goes out of scope. It travels down the chain, temporarily saves the location of the *next* node, deletes the *current* node, and then steps forward. Zero memory leaks.

## Why this matters for DSA
You will be asked to manipulate Linked Lists constantly in technical interviews (e.g., "Reverse a Linked List", "Find the middle node"). You cannot solve those problems if you do not completely understand how to rewire the `next` pointers without accidentally snapping the chain and losing the rest of your data.