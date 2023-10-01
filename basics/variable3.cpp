#include<iostream>

using namespace std;

int main() {
    string str = "The quick brown fox jumps over the lazy dog.";
    cout << str.capacity() << endl;
    cout << str.length() << endl;
    cout << str << endl;

    str.resize(50, 'c'); // If n (here 50) is smaller than the current string length, the current value is shortened to its first n character, removing the characters beyond the nth.

    // If n is greater than the current string length, the current content is extended by inserting at the end as many characters as needed to reach a size of n. If c is specified, the new elements are initialized as copies of c, otherwise, they are value-initialized characters (null characters).
    
    cout << str << endl;
    cout << str.capacity() << endl;
    cout << str.length() << endl;


    str.resize(100, 'd');
    cout << str << endl;
    cout << str.capacity() << endl;
    cout << str.length() << endl;
    
}