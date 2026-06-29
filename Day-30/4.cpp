#include <iostream>
using namespace std;

void displayResult(string name, int marks) {
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;

    if(marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";
}

int main() {
    string name;
    int marks;

    cin >> name >> marks;

    displayResult(name, marks);
}