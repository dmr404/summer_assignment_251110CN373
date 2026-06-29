#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int a[n1], b[n2];

    for(int i=0;i<n1;i++) cin >> a[i];
    for(int i=0;i<n2;i++) cin >> b[i];

    for(int i=0;i<n1;i++) cout << a[i] << " ";

    for(int i=0;i<n2;i++) {
        bool found = false;
        for(int j=0;j<n1;j++) {
            if(b[i] == a[j]) {
                found = true;
                break;
            }
        }
        if(!found)
            cout << b[i] << " ";
    }
}