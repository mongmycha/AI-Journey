// Created by mongmycha on 8/21/2025.

#include <iostream>
using namespace std;

void date(char *date);           // date as a string
void date(int month, int day, int year);        // date as a integer

int main() {
    date("8/23/99");
    date(8, 23, 99);

    return 0;
}

// Date as string
void date(char *date) {
    cout << "Date as string." << endl;
    cout << "Date: " << date << "\n\n";
}

// Date as integer
void date(int month, int day, int year) {
    cout << "Date as integer." << endl;
    cout << "Date: " << month << "/" << day << "/" << year << endl;
}