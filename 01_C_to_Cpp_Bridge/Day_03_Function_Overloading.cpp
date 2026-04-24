#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

void greet(string name = "Guest", int level = 1) {
    cout << "Welcome " << name << ", Level: " << level << endl;
}

int main() {
    cout << add(5, 10) << endl;
    cout << add(5, 10, 15) << endl;
    cout << add(5.5, 4.2) << endl;
    
    cout << "---" << endl;
    
    greet("Ashish", 99);
    greet("Admin");
    greet();

    return 0;
}