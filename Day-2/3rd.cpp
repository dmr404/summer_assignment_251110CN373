#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int pdt = 1;
    while(n>0){
        int temp = n%10;
        pdt = pdt*temp;
        n=n/10;
    }
    cout << "Product of digits is: " << pdt << endl;
    return 0;
}