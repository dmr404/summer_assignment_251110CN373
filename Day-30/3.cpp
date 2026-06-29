#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string name[n];
    int salary[n];

    for(int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> salary[i];
    }

    for(int i = 0; i < n; i++) {
        cout << name[i] << " " << salary[i] << endl;
    }
}