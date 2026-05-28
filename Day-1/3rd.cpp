#include<iostream>
using namespace std;
int main(){
    int n,i,m=1;
    cout<<"factorial of? =";
    cin>>n;
    if(n==0){
        cout<<"1";
        return 0;
    }else if(n<0){
        cout<<"Error, choose right number";
        return 0;
    }
    for(i = 1; i<=n; i++){
        m = m*i;
    }
    cout<<"factorial is = "<<m;
    return 0;
}