//Define a class to represent a bank account. Include the following members: 
//. Data Member: -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
//2. Member Functions -To assign values -To deposited an amount -To withdraw an amount after checking balance -
#include <iostream>
#include <string>

using namespace std; // Add this line to use the std namespace

class BankAccount {
private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(const string& name, long accNum, const string& type, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = type;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << " into the account. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount. Amount must be greater than 0." << endl;
        }
    }

    // Function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawn" << amount << " from the account. New balance: " << balance << endl;
            } else {
                cout << "Insufficient balance. Withdrawal failed." << endl;
            }
        } else {
            cout << "Invalid withdrawal amount. Amount must be greater than 0." << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account("John Doe", 123456789, "Savings", 1000.0);

    // Display account information
    account.display();

    // Deposit and withdraw some money
    account.deposit(500.0);
    account.withdraw(200.0);

    // Display updated account information
    account.display();

    return 0;
}

