#include <iostream>
using namespace std;

int main() {
    int n, choice;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "1.Display 2.Sum\n";
    cin >> choice;

    switch(choice) {
        case 1:
            for(int i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 2: {
            int sum = 0;
            for(int i = 0; i < n; i++)
                sum += arr[i];
            cout << sum;
            break;
        }

        default:
            cout << "Invalid Choice";
    }
}