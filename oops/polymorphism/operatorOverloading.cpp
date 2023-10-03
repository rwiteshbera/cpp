#include<iostream>
using namespace std;

// Operator overloading is a compile-time polymorphism. It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.

// Can we overload all operators? 
// Almost all operators can be overloaded except a few. Following is the list of operators that cannot be overloaded. 
// sizeof
// typeid
// Scope resolution (::)
// Class member access operators (.(dot), .* (pointer to member operator))
// Ternary or conditional (?:)

class Count {
    private:
        int value;

    public:
        Count (int value) {
            this->value = value;
        }

        void operator ++ () {
            value += 4;
        }
        void operator + () {
            value += 2;
        }

        void display() {
            cout << value << endl;
        }
};

int main() {
    Count c(2020);
    ++c; 
    c.display(); // 2024

    +c; 
    c.display(); // 2026

    cout << endl;
    return 0;
}