#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accountNumber,double initialBalance = 0.0) {
        this->accountNumber=accountNumber;
        this->balance=initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout<<"Deposited "<<amount<<" rupees into Account No. "<<accountNumber<<endl;
        } else {
            cout<<"Invalid deposit amount. Amount must be positive."<<endl;
        }
    }

    void withdraw(double amount) {
        if (amount>0&&amount<=balance) {
            balance-=amount;
            cout<<"Withdrew "<<amount<<" rupees from account "<<accountNumber<< endl;
        } else {
            cout<<"Insufficient funds or invalid withdrawal amount."<<endl;
        }
    }

    void checkBalance() {
        cout<<"Account Number: "<<accountNumber<< "    Available balance: "<< balance<<endl<<endl;
    }
};

int main() {
    int iniBal,c;
    string accNo;
    cout<<"Enter the account number: "<<endl;
    cin>>accNo;
    cout<<"Enter the initial balance: "<<endl;
    cin>>iniBal;
    BankAccount account(accNo,iniBal);
    cout<<"Account successfully created."<<endl<<endl;
    cout<<"Menu"<<endl<<"1. Check Account balance"<<endl<<"2. Deposit money"<<endl<<"3. Withdraw money"<<endl<<"4. Exit"<<endl<<"Enter your choice: ";
    cin>>c;
    
    while ((c!=4)&(c>0)&(c<4)) {
        switch(c) {
            case 1:
            account.checkBalance();
            break;
    
            case 2:
            int dep;
            cout<<"Enter the amount to deposit: "<<endl;
            cin>>dep;
            account.deposit(dep);
            account.checkBalance();
            break;
    
            case 3:
            int wd;
            cout<<"Enter the amount to withdraw"<<endl;
            cin>>wd;
            account.withdraw(wd);
            account.checkBalance();
            break;
        }
        
        cout<<"Menu"<<endl<<"1. Check Account balance"<<endl<<"2. Deposit money"<<endl<<"3. Withdraw money"<<endl<<"4. Exit"<<endl<<"Enter your choice: ";
        cin>>c;
    }
    if ((c<1)||(c>4)) {
        cout<<"Invalid choice. Exiting..."<<endl;
    }
    
    else {
        cout<<"Exiting..."<<endl;
    }

    return 0;
}
