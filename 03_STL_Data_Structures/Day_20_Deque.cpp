#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);

    dq.push_front(5);
    dq.push_front(1);

    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;

    dq.pop_front();
    dq.pop_back();

    for (auto x : dq) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Front: " << dq.front() << " | Back: " << dq.back() << endl;

    return 0;
}