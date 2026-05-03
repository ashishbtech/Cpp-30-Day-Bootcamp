#include <iostream>
#include <string>

using namespace std;

class Enemy {
protected:
    string name;
    int damage;

public:
    Enemy(string n, int d) {
        name = n;
        damage = d;
    }

    virtual void attack() {
        cout << name << " attacks and deals " << damage << " base damage." << endl;
    }

    virtual ~Enemy() {}
};

class Goblin : public Enemy {
public:
    Goblin(string n, int d) : Enemy(n, d) {}

    void attack() override {
        cout << name << " stabs quickly for " << damage << " damage!" << endl;
    }
};

class Dragon : public Enemy {
public:
    Dragon(string n, int d) : Enemy(n, d) {}

    void attack() override {
        cout << name << " breathes fire for a massive " << damage << " damage!" << endl;
    }
};

int main() {
    Enemy* e1 = new Goblin("Sneaky Goblin", 15);
    Enemy* e2 = new Dragon("Ancient Dragon", 150);

    e1->attack();
    e2->attack();

    delete e1;
    delete e2;

    return 0;
}