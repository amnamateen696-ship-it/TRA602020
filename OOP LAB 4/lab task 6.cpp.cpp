#include<iostream>
#include<string>
using namespace std;
struct Account
{
    string accountNumber;
    string holderName;
    double balance;
};

Account createAccount()
{
    Account acc;
    cout << "Enter Account Number: ";
    getline(cin, acc.accountNumber);
    cout << "Enter Account Holder Name: ";
    getline(cin, acc.holderName);
    cout << "Enter Initial Balance: ";
    cin >> acc.balance;
    return acc;
}
void deposit(Account &acc, double amount)
{
    acc.balance += amount;

    cout << "\nDeposit Successful!\n";
    cout << "Amount Deposited: " << amount << endl;
    cout << "New Balance: " << acc.balance << endl;
}

bool withdraw(Account &acc, double amount)
{
    if(amount > acc.balance)
        return false;

    acc.balance -= amount;
    return true;
}
int main()
{
    Account myAccount = createAccount();
    double amount;
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    deposit(myAccount, amount);
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    if(withdraw(myAccount, amount))
        cout << "Withdrawal Successful! New Balance: " << myAccount.balance << endl;
    else
        cout << "Insufficient Funds!" << endl;
    return 0;
}
