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



//Question 2 - Stack
#include <iostream>

using namespace std;

class Stack {
private:
    int arr[100];
    int n;

public:
    Stack() {
        n=-1;
    }

    void push(int push_ele) {
        if (n>=100-1) {
            cout<<"Stack overflow. Cannot push element."<<endl;
        } else {
            arr[++n]=push_ele;
            cout<<"Pushed element: "<<push_ele<<endl;
        }
    }

    void pop(){
        if (isEmpty()) {
            cout<<"Stack is empty. Cannot pop element."<<endl;
        } else {
            int pop_ele=arr[n--];
            cout<<"Popped element: "<<pop_ele<<endl;
        }
    }

    bool isEmpty() {
        return n==-1;
    }
};

int main() {
    Stack stack;
    int c;
    int ele;

    cout<<"Stack Operations:"<<endl<<"1. Push"<<endl<<"2. Pop"<<endl<<"3. Exit"<<endl<<"Enter your choice: "<<endl;
    cin>>c;
        
    while (c!=3){
        switch(c) {
            case 1:
                cout<<"Enter element to push: ";
                cin>>ele;
                stack.push(ele);
                break;
                
            case 2:
                stack.pop();
                break;
                
            case 3:
                break;
                
            default:
                cout<<"Invalid choice. Please try again."<<endl;
                break;
        }

        cout<<endl;
        cout<<"Stack Operations:"<<endl<<"1. Push"<<endl<<"2. Pop"<<endl<<"3. Exit"<<endl<<"Enter your choice: ";
        cin>>c;
    }
    
    cout<<"Exiting..."<<endl;
    
    return 0;
}
