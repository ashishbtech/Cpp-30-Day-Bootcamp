#include <iostream>
#include <string>

using namespace std;

class Shinobi {
private:
    int chakraLevel;
    string secretJutsu;

public:
    string name;
    string rank;

    Shinobi(string n, string r, int chakra, string jutsu) {
        name = n;
        rank = r;
        chakraLevel = chakra;
        secretJutsu = jutsu;
    }

    void displayStats() {
        cout << name << " - Rank: " << rank << endl;
    }

    void executeJutsu() {
        if (chakraLevel >= 50) {
            cout << name << " casts: " << secretJutsu << "!" << endl;
            chakraLevel -= 50;
        } else {
            cout << "Not enough chakra." << endl;
        }
    }
};

int main() {
    Shinobi s1("Kakashi", "Jonin", 80, "Chidori");
    Shinobi s2("Naruto", "Genin", 500, "Rasengan");

    s1.displayStats();
    s1.executeJutsu();
    s1.executeJutsu(); 

    cout << "---" << endl;

    s2.displayStats();
    s2.executeJutsu();

    return 0;
}