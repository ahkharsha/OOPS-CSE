//Question 1 - Bank
#include <iostream>

using namespace std;

class BankAccount {
private:
    double bal,accNo;

public:
    BankAccount(double accNo,double iniBal = 0.0) {
        this->accNo=accNo;
        this->bal=iniBal;
    }

    void deposit(double amt) {
        if (amt>0) {
            bal+=amt;
            cout<<"Deposited $"<<amt<<" into Account No. "<<accNo<<endl;
        } else {
            cout<<"Invalid deposit amount. Amount must be positive."<<endl;
        }
    }

    void withdraw(double amt) {
        if ((amt>0)&(amt<=bal)) {
            bal-=amt;
            cout<<"Withdrew $"<<amt<<" from account "<<accNo<< endl;
        } else {
            cout<<"Insufficient funds or invalid withdrawal amount."<<endl;
        }
    }

    void checkBalance() {
        cout<<"Account Number: "<<accNo<< "    Available balance: $"<< bal<<endl<<endl;
    }
};

int main() {
    double iniBal,accNo;
    int c;
    cout<<"Enter the account number: "<<endl;
    cin>>accNo;
    cout<<"Enter the initial balance: "<<endl;
    cin>>iniBal;
    BankAccount account(accNo,iniBal);
    cout<<"Account successfully created."<<endl<<endl;
    cout<<"Menu"<<endl<<"1. Check Account balance"<<endl<<"2. Deposit money"<<endl<<"3. Withdraw money"<<endl<<"4. Exit"<<endl<<"Enter your choice: ";
    cin>>c;
    
    while (c!=4) {
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
                cout<<"Enter the amount to withdraw: "<<endl;
                cin>>wd;
                account.withdraw(wd);
                account.checkBalance();
                break;
            
            default:
                cout<<"Invalid choice. Please try again."<<endl<<endl;
                break;
        }
        
        cout<<"Menu"<<endl<<"1. Check Account balance"<<endl<<"2. Deposit money"<<endl<<"3. Withdraw money"<<endl<<"4. Exit"<<endl<<"Enter your choice: ";
        cin>>c;
    }
    
    cout<<"Exiting..."<<endl;

    return 0;
}
