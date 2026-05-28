#include<iostream>
using namespace std;
int main() {
    int n, m=1;
    cout<<"Enter the number";
    cin>>n;
    cout<<"\n enter till where to multiply";
    cin>>m;
    for(int i =1; i<=m; i++){
        cout<<n<<" * "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}