#include<iostream>
using namespace std;

// Void pointer has no associated data type with it.
// It cannot be dereferenced.
// We have to typecase it to the specific datatype to dereference and access the data

int main() {
    int n = 10;
    void* ptr = &n;

    cout << ptr << endl;
    // cout << *ptr << endl; // error : ‘void*’ is not a pointer-to-object type
    cout <<*((int*)ptr) << endl; // 10
    

    return 0;
}