#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
        }
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdrawal or insufficient funds." << endl;
        }
    }
};

int main() {
    BankAccount myAccount("Ashish", 500.0);
    
    cout << "Initial Balance: $" << myAccount.getBalance() << endl;
    
    myAccount.deposit(150.0);
    cout << "After Deposit: $" << myAccount.getBalance() << endl;
    
    myAccount.withdraw(800.0); 
    
    myAccount.withdraw(200.0);
    cout << "Final Balance: $" << myAccount.getBalance() << endl;

    return 0;
}