#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string names[n];
    int marks[n];

    for(int i = 0; i < n; i++) {
        cin >> names[i];
        cin >> marks[i];
    }

    for(int i = 0; i < n; i++) {
        cout << names[i] << " " << marks[i] << endl;
    }
}