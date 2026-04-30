#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int* score; 

public:
    Player() {
        name = "Unknown";
        score = new int(0);
        cout << "Default Constructor called for: " << name << endl;
    }

    Player(string n, int s) {
        name = n;
        score = new int(s);
        cout << "Parameterized Constructor called for: " << name << endl;
    }

    ~Player() {
        cout << "Destructor called for: " << name << ". Freeing memory!" << endl;
        delete score;
    }

    void display() {
        cout << "Player: " << name << " | Score: " << *score << endl;
    }
};

void playLevel() {
    Player p2("Guest", 50);
    p2.display();
}

int main() {
    Player p1("Ashish", 999);
    p1.display();

    cout << "\n--- Entering new scope ---" << endl;
    playLevel();
    cout << "--- Exited scope ---\n" << endl;

    return 0;
}