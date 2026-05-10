#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    priority_queue<int> maxHeap;
    
    maxHeap.push(15);
    maxHeap.push(100);
    maxHeap.push(42);
    
    cout << "Max-Heap Top: " << maxHeap.top() << endl;
    
    maxHeap.pop();
    cout << "After pop, New Top: " << maxHeap.top() << endl;

    cout << "---" << endl;

    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    minHeap.push(15);
    minHeap.push(100);
    minHeap.push(42);
    
    cout << "Min-Heap Top: " << minHeap.top() << endl;
    
    minHeap.pop();
    cout << "After pop, New Top: " << minHeap.top() << endl;

    return 0;
}