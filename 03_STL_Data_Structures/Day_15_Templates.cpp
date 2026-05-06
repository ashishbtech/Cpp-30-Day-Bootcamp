#include <iostream>
#include <string>

using namespace std;

template <typename T>
T getMaximum(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
class Container {
private:
    T value;

public:
    Container(T val) {
        value = val;
    }

    T getValue() {
        return value;
    }

    void updateValue(T newVal) {
        value = newVal;
    }
};

int main() {
    cout << getMaximum(10, 20) << endl;
    cout << getMaximum(5.5, 3.2) << endl;
    cout << getMaximum(string("Apple"), string("Zebra")) << endl;

    Container<int> intBox(100);
    cout << intBox.getValue() << endl;

    Container<string> strBox("Master Sword");
    cout << strBox.getValue() << endl;
    
    strBox.updateValue("Hylian Shield");
    cout << strBox.getValue() << endl;

    return 0;
}