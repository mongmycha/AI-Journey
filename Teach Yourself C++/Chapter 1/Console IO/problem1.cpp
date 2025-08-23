// Created by mongmycha on 8/20/2025.

#include <iostream>
using namespace std;

int main() {
    double hours, wage;

    cout << "Enter work time(hours): ";
    cin >> hours;

    cout << "Enter wage per hours: ";
    cin >> wage;

    cout << "Employee's gross pay is $" << wage * hours << endl;

    return 0;
}