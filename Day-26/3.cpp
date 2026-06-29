#include <iostream>
using namespace std;

int main() {
    int balance = 10000, amount;
    cin >> amount;

    if(amount <= balance) {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
        cout << "Remaining Balance: " << balance;
    } else {
        cout << "Insufficient Balance";
    }
}