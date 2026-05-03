# Day 12: Polymorphism & Virtual Functions

## The Logic (Rewriting the Rules)
Polymorphism allows objects of different child classes to be treated as objects of a common parent class. 

In our code, both `Goblin` and `Dragon` are treated generally as `Enemy` pointers. However, when we tell them to `attack()`, they each execute their own unique animation/logic instead of the generic parent logic.

### 1. The `virtual` Keyword
When you put `virtual` in front of a parent's function, it enables **Dynamic Dispatch**. 
Without `virtual`, the compiler looks at `Enemy* e1` and says, "This is an Enemy pointer, so I will run the basic Enemy attack." 
With `virtual`, the compiler waits until the program is actually running, checks what the pointer is *actually* pointing at (a Goblin), and runs the Goblin's attack.

### 2. The `override` Keyword
Placed at the end of the child's function. It is not strictly required, but it tells the compiler: "I am actively trying to overwrite a virtual function from my parent." If you misspell the function name, the compiler will catch the error for you.

### 3. The Virtual Destructor (Crucial Safety Rule)
If you are using pointers to Base classes that point to Child classes, your Base class **MUST** have a virtual destructor: `virtual ~Enemy() {}`. 
If you forget this, calling `delete e1;` will only destroy the generic Enemy part of the object, leaving the Goblin part sitting in memory forever, causing a massive memory leak.

## Why this matters for DSA
Polymorphism is heavily used in system design interviews. If you are asked to design a File System, you create a base class called `FileSystemNode` with a virtual function called `getSize()`. Then, your child classes `File` and `Directory` override `getSize()`. A `File` just returns its own size, but a `Directory` loops through everything inside it to calculate the total size.