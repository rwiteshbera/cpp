#include<iostream>
using namespace std;

int main() {
    unsigned int d = 5;

    unsigned int e = -5;
    // If you assign negative value to unsigned int, it will assign the bit pattern representing -5 (in 2's complement) to the unsigned int. Which will be a large unsigned value. For 32 bit ints this will be 2^32 - 5 or 4294967291

    cout << d << endl; // 5
    cout << e << endl; // 4294967291
}