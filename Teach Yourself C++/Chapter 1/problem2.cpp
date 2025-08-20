// Created by mongmycha on 8/20/2025.

#include <iostream>
using namespace std;

int main() {
    double feet, inch;

    do {
        cout << "Enter height feet(0 to exit): ";
        cin >> feet;

        inch = feet * 12;
        cout << "After the convert feet to inch: " << inch << "inch" << endl;
    } while(feet != 0);

    return 0;
}