# Day 5: The Power of std::string

## The Logic (Leaving char arrays behind)
In C, strings were just static arrays of characters: `char name[20];`. 
To compare them, you needed `strcmp()`. To copy them, you needed `strcpy()`. To find the length, `strlen()`. If your string exceeded 20 characters, your program crashed.

In C++, `#include <string>` gives us a dynamic string object that handles its own memory.

### Key Superpowers of std::string:
1. **Concatenation:** You can merge strings using basic math: `string c = a + b;`
2. **Comparison:** You can check if strings are identical using `==`. No more `strcmp`.
3. **Length:** Just call `.length()` or `.size()` directly on the variable.
4. **Dynamic Resizing:** You don't need to specify a maximum size. It grows automatically.

## The getline() Function & cin.ignore()
Standard `cin >>` stops reading the moment it hits a space. If you want to read an entire sentence (like "Hello World"), you must use `getline(cin, variableName)`.

*Crucial Bug Fix:* If you use `cin >>` to read a word, and then try to use `getline()` immediately after, the `getline()` will instantly read the hidden "Enter" key (`\n`) left over in the buffer and skip your input. Always use `cin.ignore();` between a `cin` and a `getline()` to clear that hidden newline character.