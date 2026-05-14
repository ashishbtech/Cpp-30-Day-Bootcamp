#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> uniqueNumbers;

    uniqueNumbers.insert(50);
    uniqueNumbers.insert(20);
    uniqueNumbers.insert(40);
    uniqueNumbers.insert(20); 
    uniqueNumbers.insert(10);

    for (auto x : uniqueNumbers) {
        cout << x << " ";
    }
    cout << endl;

    if (uniqueNumbers.count(40)) {
        cout << "40 is in the set." << endl;
    } else {
        cout << "40 is not in the set." << endl;
    }

    uniqueNumbers.erase(20);

    for (auto x : uniqueNumbers) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}