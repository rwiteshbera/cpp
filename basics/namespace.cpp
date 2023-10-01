#include<iostream>
#include<string>
using namespace std;

// Namespace provide the space where we can define or declare identifier i.e. variable,  method, classes.
// It provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.

namespace foo {
    string firstName = "Rwitesh";
}

namespace bar {
    string firstName = "Hsetiwr";
}

int main() {
    cout << foo::firstName << endl;
    cout << bar::firstName << endl;

    return 0;
}