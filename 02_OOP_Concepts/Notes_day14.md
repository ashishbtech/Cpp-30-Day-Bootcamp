# Day 14: OOP Mini-Project (Inventory System)

## The Logic (Putting it all together)
This project serves as the capstone for Phase 2. It demonstrates how OOP concepts work together to create scalable, modular software.

### 1. The Blueprint (Abstract Class)
`Item` is our Abstract Base Class. It holds the `name` and `value` variables that every item needs, and forces a strict contract using the pure virtual function `virtual void use() = 0;`. You cannot create a generic "Item".

### 2. The Specialists (Inheritance & Polymorphism)
`Weapon` and `Potion` inherit from `Item`. Because of Polymorphism, we can treat them both simply as `Item*` (Item pointers). When we loop through the inventory and call `items[i]->use()`, the compiler dynamically figures out if it should print a weapon message or a potion message.

### 3. The Vault (Encapsulation & Memory Management)
The `Inventory` class hides the highly dangerous raw array `Item** items` inside its `private` access block. 
* The user cannot accidentally bypass the capacity limit because they are forced to use the `public` `addItem()` function.
* The Destructor `~Inventory()` guarantees that no matter what happens, when the program ends, a loop will run and `delete` every single dynamically allocated weapon and potion, followed by the array itself. No memory leaks.

## Phase 2 Complete
With this, the architectural foundation of C++ is locked in. The next step is Phase 3: Weaponizing the Standard Template Library (STL).