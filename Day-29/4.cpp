#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
};

int main() {
    Item item;

    cin >> item.id;
    cin >> item.name;
    cin >> item.quantity;

    cout << "Item ID: " << item.id << endl;
    cout << "Item Name: " << item.name << endl;
    cout << "Quantity: " << item.quantity;
}