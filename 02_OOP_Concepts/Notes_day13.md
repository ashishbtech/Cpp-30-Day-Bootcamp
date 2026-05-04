# Day 13: Abstract Classes and Pure Virtual Functions

## The Logic (Enforcing a Contract)
An **Abstract Class** is a class that cannot be instantiated. If you try to write `Shape myShape("Blob");` in the `main` function, the C++ compiler will throw a hard error. 

You create an abstract class by including at least one **Pure Virtual Function**.

### Pure Virtual Functions
Syntax: `virtual void functionName() = 0;`

The `= 0` does not mean it returns zero. It tells the compiler: "This function has no implementation in the base class. Any child class that inherits from me MUST provide its own code for this function, or it will also become abstract and fail to compile."

It acts as a strict contract. If a class claims to be a `Shape`, it *must* know how to calculate its area and draw itself.

### Interfaces
If an abstract class contains *only* pure virtual functions and no actual variables, it is commonly referred to as an **Interface**. Interfaces are used to define a set of rules that other classes must follow.

## Why this matters for DSA and System Design
In advanced software architecture, you build systems around Interfaces, not concrete classes. 
If you are asked to design a Payment Processor, you write an abstract class `PaymentMethod` with a pure virtual function `virtual void processPayment(double amount) = 0;`. 
Then you create child classes like `CreditCard`, `PayPal`, and `Crypto` that implement that function. Your main checkout system only ever talks to the `PaymentMethod` pointer, completely unaware of which child class is actually doing the math.