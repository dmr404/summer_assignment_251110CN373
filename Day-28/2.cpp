#include <iostream>
using namespace std;

class Bank {
    int balance = 1000;

public:
    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void showBalance() {
        cout << "Balance: " << balance;
    }
};

int main() {
    Bank b;
    int depositAmt, withdrawAmt;

    cin >> depositAmt >> withdrawAmt;

    b.deposit(depositAmt);
    b.withdraw(withdrawAmt);
    b.showBalance();
}