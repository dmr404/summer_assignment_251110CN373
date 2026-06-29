#include <iostream>
using namespace std;

struct Contact {
    string name;
    long long phone;
};

int main() {
    Contact c;

    cin >> c.name;
    cin >> c.phone;

    cout << "Name: " << c.name << endl;
    cout << "Phone: " << c.phone;
}