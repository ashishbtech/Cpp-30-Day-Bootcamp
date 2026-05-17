#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    int x = 42;
    int* ptrX = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << ptrX << endl;
    cout << "Dereferenced ptrX: " << *ptrX << endl;

    *ptrX = 99;
    cout << "Modified x via pointer: " << x << "\n" << endl;

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->next = third;

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    delete head;
    delete second;
    delete third;

    return 0;
}