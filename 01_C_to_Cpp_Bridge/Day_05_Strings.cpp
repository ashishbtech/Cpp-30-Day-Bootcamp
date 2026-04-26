#include <iostream>
#include <string>

using namespace std;

int main() {
    string word1, word2;
    cin >> word1 >> word2;
    
    string combined = word1 + " " + word2;
    cout << combined << endl;
    
    cout << combined.length() << endl;
    
    if (word1 == word2) {
        cout << "Match" << endl;
    } else {
        cout << "No Match" << endl;
    }
    
    cin.ignore(); 
    
    string fullLine;
    getline(cin, fullLine);
    
    cout << fullLine << endl;

    return 0;
}