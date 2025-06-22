#include<iostream>
#include<string>
using namespace std;

// Base class: Account
class Account {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    Account(string name, int accNo, double bal) {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposit Successful. New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful. New Balance: " << balance << endl;
        } else {
            cout << "Insufficient Balance or Invalid Amount." << endl;
        }
    }

    void displayInfo() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived class: ATM
class ATM : public Account {
public:
    ATM(string name, int accNo, double bal) : Account(name, accNo, bal) {}

    void showMenu() {
        cout << "\n=== ATM Menu ===\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
    }

    void performTransaction() {
        int choice;
        double amount;

        do {
            showMenu();
            cout << "Enter your choice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    cout << "Current Balance: " << getBalance() << endl;
                    break;
                case 2:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    deposit(amount);
                    break;
                case 3:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    withdraw(amount);
                    break;
                case 4:
                    cout << "Thank you for using the ATM.\n";
                    break;
                default:
                    cout << "Invalid option. Try again.\n";
            }

        } while(choice != 4);
    }
};

// Main function
int main() {
    string name;
    int accNo;
    double bal;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> bal;

    ATM user(name, accNo, bal);
    user.performTransaction();

    return 0;
}