// Created by mongmycha on 8/21/2025.

#include <iostream>
using namespace std;

// overload abs() three ways
int abc(int n);
long abc(long n);
double abc(double n);

int main() {
    cout << "Absolute value of -10: " << abc(-10) << "\n\n";
    cout << "Absolute value of -10L: " << abc(-10L) << "\n\n";
    cout << "Absolute value of -10.99: " << abc(-10.99) << "\n\n";

    return 0;
}

// abs for ints
int abc(int n) {
    cout << "In integer abs()\n";

    return n < 0 ? -n : n;
}

// abs for longs
long abc(long n) {
    cout << "In long abs()\n";

    return n < 0 ? -n : n;
}

// abs for double
double abc(double n) {
    cout << "In double abs()\n";

    return n < 0 ? -n : n;
}