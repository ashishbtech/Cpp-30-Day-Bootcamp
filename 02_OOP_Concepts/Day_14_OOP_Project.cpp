#include <iostream>
#include <string>

using namespace std;

class Item {
protected:
    string name;
    int value;

public:
    Item(string n, int v) : name(n), value(v) {}

    virtual void use() = 0;

    virtual ~Item() {}

    string getName() {
        return name;
    }
};

class Weapon : public Item {
private:
    int damage;

public:
    Weapon(string n, int v, int d) : Item(n, v), damage(d) {}

    void use() override {
        cout << "Equipped " << name << ". Attack power increased by " << damage << "!" << endl;
    }
};

class Potion : public Item {
private:
    int healAmount;

public:
    Potion(string n, int v, int h) : Item(n, v), healAmount(h) {}

    void use() override {
        cout << "Drank " << name << ". Restored " << healAmount << " HP!" << endl;
    }
};

class Inventory {
private:
    Item** items;
    int capacity;
    int count;

public:
    Inventory(int cap) {
        capacity = cap;
        count = 0;
        items = new Item*[capacity];
    }

    ~Inventory() {
        for (int i = 0; i < count; i++) {
            delete items[i];
        }
        delete[] items;
        cout << "\nInventory destroyed. All memory freed." << endl;
    }

    void addItem(Item* item) {
        if (count < capacity) {
            items[count] = item;
            cout << "Added " << item->getName() << " to inventory." << endl;
            count++;
        } else {
            cout << "Inventory full! Dropping " << item->getName() << "." << endl;
            delete item;
        }
    }

    void useAll() {
        cout << "\n--- Activating All Items ---" << endl;
        for (int i = 0; i < count; i++) {
            items[i]->use();
        }
    }
};

int main() {
    Inventory myInv(3);

    myInv.addItem(new Weapon("Iron Sword", 100, 15));
    myInv.addItem(new Potion("Health Potion", 50, 30));
    myInv.addItem(new Weapon("Magic Bow", 250, 25));
    
    myInv.addItem(new Potion("Extra Potion", 10, 10));

    myInv.useAll();

    return 0;
}