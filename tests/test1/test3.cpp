//
// Created by danter on 2016-09-04.
//

#include <iostream>

class A {
    int num;
public:
    A(int num): num(num) {
    }
    int getInt() {
        return num;
    }
};

class B: public A {
public:
    B(int num): A(num) {
    }
};

int main (int argc, char *argv[])
{
    A a{1};
    a.getInt();
    B b{2};
}