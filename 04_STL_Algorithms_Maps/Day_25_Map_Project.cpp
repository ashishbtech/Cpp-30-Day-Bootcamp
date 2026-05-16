#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>

using namespace std;

int main() {
    string document = "the shinobi throws the kunai but the kunai misses the target";

    unordered_map<string, int> wordCount;
    stringstream ss(document);
    string word;

    while (ss >> word) {
        wordCount[word]++;
    }

    string mostFrequentWord = "";
    int maxCount = 0;

    for (auto const& [w, count] : wordCount) {
        cout << w << " : " << count << endl;
        
        if (count > maxCount) {
            maxCount = count;
            mostFrequentWord = w;
        }
    }

    cout << "\n--- Analysis Complete ---" << endl;
    cout << "Most frequent word: '" << mostFrequentWord << "' appearing " << maxCount << " times." << endl;

    return 0;
}