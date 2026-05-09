#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main() {
    stack<string> browserHistory;
    
    browserHistory.push("google.com");
    browserHistory.push("github.com");
    browserHistory.push("stackoverflow.com");

    cout << "Current Page: " << browserHistory.top() << endl;
    
    browserHistory.pop();
    
    cout << "Going Back... Current Page: " << browserHistory.top() << endl;

    cout << "---" << endl;

    queue<string> matchmakingQueue;

    matchmakingQueue.push("Player_1");
    matchmakingQueue.push("Player_2");
    matchmakingQueue.push("Player_3");

    cout << "Next in line: " << matchmakingQueue.front() << endl;
    cout << "Queue Size: " << matchmakingQueue.size() << endl;

    matchmakingQueue.pop();
    
    cout << "Match started. Next in line: " << matchmakingQueue.front() << endl;

    return 0;
}