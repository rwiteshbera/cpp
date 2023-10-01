#include<iostream>
using namespace std;

int main() {
    int number[] = {2,3,5,7,9,11,13,17,19};

    cout << number << endl; // 0x7ffe18428ca0
    cout << &number[0] << endl; // 0x7ffe18428ca0

    cout << number[3] << endl; // 7
    cout << *(number+3) << endl; // 7



    return 0;
}