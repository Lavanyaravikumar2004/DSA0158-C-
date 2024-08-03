#include <iostream>
using namespace std;

class BankAccount {
    int balance;
public:
    BankAccount(int initial_balance) : balance(initial_balance) {
        cout << "Account created with balance: " << balance << endl;
    }
    ~BankAccount() {
        cout << "Account closed with balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000);
    return 0;
}
