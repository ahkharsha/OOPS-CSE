//Question 2 - Element Stack
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
