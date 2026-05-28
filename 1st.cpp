#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"Enter the number of elements = ";
    cin>>n;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout<<"your sum is  "<<sum;
    return 0;

}