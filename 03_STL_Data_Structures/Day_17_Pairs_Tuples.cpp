#include <iostream>
#include <utility>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

pair<int, int> getMinMax(int a, int b, int c) {
    int minVal = min(a, min(b, c));
    int maxVal = max(a, max(b, c));
    return {minVal, maxVal};
}

tuple<string, int, double> getStudentData() {
    return {"Ashish", 101, 95.5};
}

int main() {
    pair<string, int> p1 = {"Ninja", 99};
    cout << p1.first << " - Level: " << p1.second << endl;

    pair<int, int> bounds = getMinMax(10, 5, 20);
    cout << "Min: " << bounds.first << " | Max: " << bounds.second << endl;

    tuple<string, int, double> t1 = getStudentData();
    cout << "Name: " << get<0>(t1) << " | Roll: " << get<1>(t1) << " | Marks: " << get<2>(t1) << endl;

    auto [name, roll, marks] = getStudentData();
    cout << "Unpacked -> " << name << ", " << roll << ", " << marks << endl;

    return 0;
}