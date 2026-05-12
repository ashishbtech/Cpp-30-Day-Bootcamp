#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};

    vector<int>::iterator it;
    
    for (it = nums.begin(); it != nums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto i = nums.begin(); i != nums.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto ri = nums.rbegin(); ri != nums.rend(); ri++) {
        cout << *ri << " ";
    }
    cout << endl;

    auto ptr = nums.begin();
    advance(ptr, 2);
    
    cout << *ptr << endl;

    return 0;
}