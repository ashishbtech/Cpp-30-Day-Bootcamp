#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;

    cout << "Size: " << nums.size() << " | Capacity: " << nums.capacity() << endl;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    cout << "Size: " << nums.size() << " | Capacity: " << nums.capacity() << endl;

    nums.push_back(40);
    nums.push_back(50);

    cout << "Size: " << nums.size() << " | Capacity: " << nums.capacity() << endl;

    for (auto x : nums) {
        cout << x << " ";
    }
    cout << endl;

    nums.pop_back();

    cout << "Front: " << nums.front() << " | Back: " << nums.back() << endl;

    nums[0] = 99;

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}