#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>number;
    cout << "is number empty before push_back = " << number.empty() << endl;
    for(int i = 0; i < 50; i++) {
        number.push_back(i);
    }
    cout << "is number empty after push_back = " << number.empty() << endl;


    cout << "size of vector<int>number: " << number.size() << endl;

    for(int i = 0; i < number.size(); i++) {
        cout << number.at(i) << " ";
    }
    cout << endl;

    for (auto i = number.begin(); i != number.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = number.rbegin(); i != number.rend(); i++) {
        cout << *i << " ";
    }    
    cout << endl;

// The difference between begin() and cbegin() in C++ is that begin() returns an iterator that can be used to modify the elements of a container, while cbegin() returns a const_iterator that cannot be used to modify the elements of a container.
    for (auto i = number.cbegin(); i != number.cend(); i++) {
        cout << *i << " ";
    }    
    cout << endl;

    for (auto i = number.crbegin(); i != number.crend(); i++) {
        cout << *i << " ";
    }    
    cout << endl;

    return 0;
}