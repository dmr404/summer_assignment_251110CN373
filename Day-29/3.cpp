#include <iostream>
using namespace std;

int main() {
    string str;
    int choice;

    cin >> str;

    cout << "1.Length 2.Reverse\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << str.length();
            break;

        case 2:
            for(int i = str.length()-1; i >= 0; i--)
                cout << str[i];
            break;

        default:
            cout << "Invalid Choice";
    }
}