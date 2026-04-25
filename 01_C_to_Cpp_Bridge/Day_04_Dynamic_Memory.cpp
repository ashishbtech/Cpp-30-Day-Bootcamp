#include <iostream>

using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 42;
    
    cout << *ptr << endl;
    
    delete ptr;
    
    int n;
    cin >> n;
    
    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = i * 10;
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;

    return 0;
}