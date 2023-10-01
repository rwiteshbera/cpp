#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,3,5,7,11,13,17,19}; 

    cout << sizeof(arr) << " bytes" << endl;
    cout << sizeof(arr[0]) << " bytes"  << endl;
    cout << sizeof(arr) / sizeof(arr[0]) << " bytes" << endl;

    int marks[] = {97, 95, 99, 92};
    for (int element : marks) {
        cout << element << " ";
    }

    return 0;
}