#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int a[n1], b[n2], c[n3];

    for(int i=0;i<n1;i++) cin >> a[i];
    for(int i=0;i<n2;i++) cin >> b[i];
    for(int i=0;i<n3;i++) cin >> c[i];

    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            for(int k=0;k<n3;k++) {
                if(a[i]==b[j] && b[j]==c[k])
                    cout << a[i] << " ";
            }
        }
    }
}