# Day 11: Inheritance & Constructor Chaining

## The Logic (DRY - Don't Repeat Yourself)
Inheritance represents an **"IS-A"** relationship. (A Mage *is a* Character. A Car *is a* Vehicle). 
Instead of writing duplicate code, a Derived (Child) class inherits the attributes and methods of a Base (Parent) class.

### 1. Syntax
`class Child : public Parent { ... };`
By saying `: public Parent`, we tell the compiler to pull in all the public and protected data from the Parent class.

### 2. The `protected` Access Specifier
* **`private`**: Hidden from everyone, INCLUDING child classes.
* **`public`**: Open to everyone.
* **`protected`**: Hidden from the `main()` function, but fully accessible to child classes. 
*If we made `name` and `health` private in the Character class, the Mage class would not be able to see them!*

### 3. Constructor Chaining (Crucial Concept)
When you create a Child object, the Parent object must be built first. 
Look at the Mage constructor: `Mage(string n, int h, int m) : Character(n, h)`
This grabs the `name` and `health` inputs and instantly passes them "up" to the `Character` constructor to build the base foundation before finishing the `Mage` setup.

## Why this matters for DSA
Inheritance isn't used as heavily in basic array or string manipulation, but it is massive for complex system design. If you are building a generic `Tree` data structure, you can inherit from it to quickly create a specialized `BinarySearchTree` or an `AVL_Tree` without rewriting the basic node-linking logic.