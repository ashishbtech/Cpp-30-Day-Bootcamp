#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> inventory;

    inventory["Health Potion"] = 5;
    inventory["Mana Potion"] = 3;
    inventory["Iron Sword"] = 1;
    
    inventory["Health Potion"] = 10;

    inventory.insert({"Magic Bow", 1});

    for (auto const& [item, count] : inventory) {
        cout << item << " : " << count << endl;
    }
    cout << "---" << endl;

    if (inventory.count("Mana Potion")) {
        cout << "Mana Potion is in stock. Quantity: " << inventory["Mana Potion"] << endl;
    }

    cout << "Looking for Gold Coins: " << inventory["Gold Coins"] << endl;
    cout << "---" << endl;

    for (auto const& [item, count] : inventory) {
        cout << item << " : " << count << endl;
    }

    return 0;
}