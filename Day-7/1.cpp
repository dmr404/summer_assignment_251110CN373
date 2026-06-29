#include<iostream>
using namespace std;
int factRecursive(int n){
    if(n==0){
        return 1;
    }
    return n * factRecursive(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<factRecursive(n);
}