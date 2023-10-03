#include<iostream>
using namespace std;

class Bank {
    public:
        void interest() {
            
        }
};

class ICICI : public Bank {
   public:
        void interest() {
            cout << "4%" << endl;
        }
};

class AXIS : public Bank {
   public:
        void interest() {
            cout << "3%" << endl;
        }
};

class HDFC : public Bank {
   public:
        void interest() {
            cout << "5%" << endl;
        }
};

class Federal : public Bank {
   public:
        void interest() {
            cout << "7%" << endl;
        }
};


int main() {
    Federal f;
    f.interest();

    HDFC h;
    h.interest();

    cout << endl;
    return 0;
}