# Day 10: Encapsulation & Getters/Setters

## The Logic (Data Hiding)
**Encapsulation** means bundling data (variables) and methods (functions) that operate on that data into a single unit (a Class), and restricting direct access to some of the object's components.

We do this using `private` variables and `public` functions. 

### Getters (Read Access)
A getter is a public function whose only job is to return the value of a private variable. 
* It makes a variable **Read-Only** to the outside world.
* *Example:* `double getBalance() { return balance; }`

### Setters (Write Access with Rules)
A setter is a public function whose job is to modify a private variable safely. 
* Instead of blindly accepting new data, a setter can validate the data first.
* *Example:* Our `deposit` function prevents negative numbers from being added to the account. 

## Why this matters for DSA
When you build custom Data Structures like a Stack or a Queue, you have a variable tracking the `size` or the `top` index. If you make `size` public, the `main` function could accidentally write `stack.size = -5;`, completely breaking your program. By encapsulating it, you ensure `size` is ONLY modified safely inside your `push()` and `pop()` methods, while still letting the user see the size using a `getSize()` getter.