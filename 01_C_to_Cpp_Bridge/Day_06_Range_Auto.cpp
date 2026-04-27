#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
    
    for (auto& x : arr) {
        x *= 2;
    }
    
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
    
    string word = "shinobi";
    
    for (auto c : word) {
        cout << c << ".";
    }
    cout << endl;

    return 0;
}