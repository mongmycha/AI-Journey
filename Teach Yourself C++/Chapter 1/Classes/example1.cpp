// Created by mongmycha on 8/21/2025.

#include <iostream>
using namespace std;

class myClass {
    // private to myClass
    int a;
public:
    void set_a(int num);
    int get_a();
};

void myClass :: set_a(int num) {
    a = num;
}

int myClass :: get_a() {
    return a;
}

int main() {
    myClass obj1, obj2;

    obj1.set_a(10);
    obj2.set_a(99);

    cout << obj1.get_a() << endl;
    cout << obj2.get_a() << endl;

    return 0;
}