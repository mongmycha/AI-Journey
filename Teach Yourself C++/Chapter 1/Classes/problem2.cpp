// Created by mongmycha on 8/21/2025.

#include <iostream>
#include <cstring>
using namespace std;

class card {
    string title;
    string author;
    int copy;
public:
    void store(string t, string name, int num);
    void show();
};

void card::store(string t, string name, int num) {
    title = t;
    author = name;
    copy = num;
}

void card::show() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Number on hand: " << copy << "\n\n";
}

int main() {
    card book1, book2, book3;

    book1.store("Database System Concepts", "Abraham Silberschatz", 4);
    book2.store("Teach yourself C++", "Herbert Schildt", 2);
    book3.store("Switching Theory and Digital Electronics", "Dr. V.K. Jain", 5);


    book1.show();
    book2.show();
    book3.show();


    return 0;
}