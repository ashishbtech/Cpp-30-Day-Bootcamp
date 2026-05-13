#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<int> nums = {42, 15, 8, 100, 23, 4};

    sort(nums.begin(), nums.end());

    for (auto x : nums) cout << x << " ";
    cout << "\n---" << endl;

    sort(nums.begin(), nums.end(), greater<int>());

    for (auto x : nums) cout << x << " ";
    cout << "\n---" << endl;

    reverse(nums.begin(), nums.end());

    int maxVal = *max_element(nums.begin(), nums.end());
    int minVal = *min_element(nums.begin(), nums.end());

    cout << "Max: " << maxVal << " | Min: " << minVal << endl;

    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    cout << "Sum: " << totalSum << endl;

    bool found = binary_search(nums.begin(), nums.end(), 42);
    
    if (found) {
        cout << "42 is in the array." << endl;
    } else {
        cout << "42 not found." << endl;
    }

    return 0;
}