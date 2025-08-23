// Created by mongmycha on 8/21/2025.

#include <iostream>
using namespace std;

class myClass {
    // now a is public
public:
    int a;
    // and there is no need for set_a() or get_a()
};

int main() {
    myClass obj1, obj2;

    // here a is accessed directly
    obj1.a = 10;
    obj2.a = 99;

    cout << obj1.a << endl;
    cout << obj2.a << endl;

    return 0;
}