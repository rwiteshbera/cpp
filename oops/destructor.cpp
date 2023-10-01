#include<iostream>
using namespace std;

// https://www.ibm.com/docs/en/zos/2.1.0?topic=only-destructors
// Destructor is another special member function that is called by the compiler when the scope of the object ends. 
// Destructor is another special member function that is called by the compiler when the scope of the object ends. 
// Destructor has the same name as their class name preceded by a tilde (~) symbol.
// It is not possible to define more than one destructor. 

class Test {
    public:
        Test() {
            cout << "Constructor is called." << endl;
        }

        ~Test() {
            cout << "Destructor is called." << endl;
        }
};

int main() {
    Test t; 
    // Constructor is called.

    // Destructor is called.

    cout << endl;
    return 0;
}