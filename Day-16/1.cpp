#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int arr[n-1];

    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    cout << total - sum;

    return 0;
}