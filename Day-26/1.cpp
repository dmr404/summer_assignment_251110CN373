#include <iostream>
using namespace std;

int main() {
    int secret = 7, guess;

    do {
        cin >> guess;

        if(guess > secret)
            cout << "Too High\n";
        else if(guess < secret)
            cout << "Too Low\n";

    } while(guess != secret);

    cout << "Correct!";
}