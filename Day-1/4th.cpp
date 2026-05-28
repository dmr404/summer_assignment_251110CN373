#include<iostream>
using namespace std;
int main(){
    int n, i=0;
    cout<<"Enter digit n =";
    cin>>n;
    while(0<n){
        n = n/10;
        i++;
    }
    cout<<"Number of digits in n is "<<i;
    return 0;

}