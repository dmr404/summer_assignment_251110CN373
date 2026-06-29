#include <iostream>
using namespace std;

struct Book {
    int id;
    string name;
};

int main() {
    Book b;

    cin >> b.id;
    cin >> b.name;

    cout << "Book ID: " << b.id << endl;
    cout << "Book Name: " << b.name;
}