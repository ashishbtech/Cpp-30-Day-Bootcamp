#include <iostream>
#include <string>

using namespace std;

class Character {
protected:
    string name;
    int health;

public:
    Character(string n, int h) {
        name = n;
        health = h;
        cout << name << " spawned with " << health << " HP." << endl;
    }

    void takeDamage(int amount) {
        health -= amount;
        cout << name << " took " << amount << " damage. HP left: " << health << endl;
    }
};

class Mage : public Character {
private:
    int mana;

public:
    Mage(string n, int h, int m) : Character(n, h) {
        mana = m;
        cout << name << " initialized as a Mage with " << mana << " Mana." << endl;
    }

    void castSpell() {
        if (mana >= 20) {
            cout << name << " casts Fireball!" << endl;
            mana -= 20;
        } else {
            cout << name << " is out of mana." << endl;
        }
    }
};

int main() {
    Mage player1("Gandalf", 100, 50);
    
    cout << "--- Combat Starts ---" << endl;
    
    player1.takeDamage(30);
    
    player1.castSpell();
    player1.castSpell();
    player1.castSpell();

    return 0;
}