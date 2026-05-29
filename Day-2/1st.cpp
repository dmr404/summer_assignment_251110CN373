#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout << "Enter a number: ";
    cin >> n;
    while(n > 0){
        int temp = n%10;
        sum = sum+temp;
        n=n/10;
    }
    cout<<"sum of digits is "<<sum;
    return 0;
}