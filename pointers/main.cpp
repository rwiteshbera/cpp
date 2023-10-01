#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int* ptr = &n;

    cout << n << endl;
    cout << &n << endl;
    cout << *ptr << endl;

    // Update value using pointer
    *ptr = 10;
    cout << n << endl;
    return 0;
}