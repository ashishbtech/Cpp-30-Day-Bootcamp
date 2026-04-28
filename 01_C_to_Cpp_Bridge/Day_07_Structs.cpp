#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int roll_no;
    float marks;

    Student(string n, int r, float m) {
        name = n;
        roll_no = r;
        marks = m;
    }

    void display() {
        cout << name << " (Roll: " << roll_no << ") - Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Ashish", 101, 92.5);
    Student s2("Admin", 102, 88.0);
    
    s1.display();
    s2.display();
    
    s1.marks = 95.0;
    s1.display();

    return 0;
}