//C++ program to get the salary and work hours of the employee and print the final salary
#include <iostream>
using namespace std;

class Employee {
    public:
    int sal,hours;
    
    //Function to get the salary and work hours
    void getInfo(){
        cout<<"Enter the salary of the employee (in dollars): ";
        cin>>sal;
        cout<<"Enter the number of hours of work per day of the employere: ";
        cin>>hours;
    }
    
    //Function to modify salary based on the salary amount
    void AddSal(){
        if (sal<500){
            sal+=10;
        }
    }
    
    //Function to modify salary based on the work hours
    void AddWork(){
        if (hours>6){
            sal+=5;
        }
    }
};

int main() {
    Employee Emp1;
    Emp1.getInfo();
    Emp1.AddSal();
    Emp1.AddWork();
    cout<<"The final salary of the employee is "<<Emp1.sal;
    
    return 0;
}
