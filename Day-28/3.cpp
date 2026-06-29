#include <iostream>
using namespace std;

int main() {
    int seats, booked;

    cin >> seats >> booked;

    if(booked <= seats) {
        seats -= booked;
        cout << "Booked Successfully" << endl;
        cout << "Remaining Seats: " << seats;
    } else {
        cout << "Not Enough Seats";
    }
}