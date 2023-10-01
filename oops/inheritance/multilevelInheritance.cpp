#include<iostream>
using namespace std;

class A {
    public:
        void display() {
            cout << "I am in A" << endl;
        }
};

class B : public A{
    public:
        void display() {
            cout << "I am in B" << endl;
        }
};

class C: public B {
    public:
        void display() {
            cout << "I am in C" << endl;
        }
};

int main() {
    A a;
    a.display();

    B b;
    b.display();

    C c;
    c.display();

    cout << endl;
    return 0;
}