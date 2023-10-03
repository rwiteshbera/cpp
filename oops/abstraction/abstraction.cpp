#include<iostream>
using namespace std;
// Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation. 

// Consider a real-life example of a man driving a car. The man only knows that pressing the accelerator will increase the speed of the car or applying brakes will stop the car but he does not know how on pressing the accelerator the speed is actually increasing, he does not know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car. 

class Bank {
    private:
        const string name = "ABC Bank";
        const string ifsc = "ABC12345678";
        float interest;
    public:
        string BankName() {
            return name;
        }

        string BankIFSC() {
            return ifsc;
        }

        void setInterest(int interest) {
            this->interest = interest;
        }

        float getInterest() {
            return interest;
        }
};

class Account: public Bank {
    private:
        string accountHolderName;
        float money;

    public:
        void createAccount(string name, float initialAmount) {
            accountHolderName = name;
            money = initialAmount;
            cout << "Bank Name: " <<  BankName() << endl;
            cout << "IFSC Code: " <<  BankIFSC() << endl;
            cout << "Money: " <<  money << endl;
        }

        float deposit (float amount) {
            money += amount;
            return money;
        }
        float withdraw (float amount) {
            money -= amount;
            return money;
        }

        float checkBalance () {
            return money;
        }

};

int main() {
    Account rwitesh;
    rwitesh.createAccount("Rwitesh Bera", 10000);
    rwitesh.deposit(400);
    rwitesh.withdraw(700);
    cout <<  rwitesh.checkBalance() << endl;

    cout << endl;
    return 0;
}