#include <iostream>
using namespace std;

int main() {
    float basic, hra, da, total;

    cin >> basic;

    hra = basic * 0.2;
    da = basic * 0.1;

    total = basic + hra + da;

    cout << "Basic Salary: " << basic << endl;
    cout << "HRA: " << hra << endl;
    cout << "DA: " << da << endl;
    cout << "Total Salary: " << total;
}