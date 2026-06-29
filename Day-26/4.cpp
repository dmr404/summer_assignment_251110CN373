#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "Q1: 2 + 2 = ?\n";
    cin >> ans;
    if(ans == 4) score++;

    cout << "Q2: 5 * 3 = ?\n";
    cin >> ans;
    if(ans == 15) score++;

    cout << "Your Score: " << score << "/2";
}