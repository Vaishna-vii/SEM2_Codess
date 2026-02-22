/*4. Create a class Employee to represent an employee record with private data members
empID and basicSalary.
a. Provide constructors for:
i. Initializing default values for empID and basicSalary.
ii. Initializing with user-defined empID and basicSalary.
iii. Initializing by copying another Employee object.
Demonstrate constructor overloading in the program.
b. Write a program to create a class Payroll with private members allowance and deduction.
Use a friend function to calculate and display the net salary of an Employee.
c. Design a class Department with private members deptName and totalEmployees. Use a
parameterized constructor for initialization. Write a friend function transferEmployee to
move an employee from one department to another and update the employee count.*/
#include <iostream>
#include<string>
using namespace std;

class Employee{
    int empID;
    float basicSalary,netSalary=0;
public:
    Employee(int a,float b){ //parameterised
    empID=a;
    basicSalary=b;
    }
    Employee(const Employee& A){ //copy constructor
    empID=A.empID;
    basicSalary=A.basicSalary;
    }
    Employee(){ //default constructor
    empID=2324;
    basicSalary=20000.00;
    }
    friend void calcNet(Employee& a);
    void getter(){
    cout<<"Basic Salary is "<<basicSalary<<endl;
    cout<<"ID is "<<empID<<endl;
    cout<<"Net Salary is "<<netSalary<<endl;
    }
};

class Payroll{
    float allowance=0.15,deduction=0.25;
public:
    friend void calcNet(Employee& a);
};
void calcNet(Employee& a){
    Payroll p1;
    a.netSalary=a.basicSalary;
    a.netSalary+= a.basicSalary*p1.allowance;
    a.netSalary-= a.basicSalary*p1.deduction;
    a.getter();
}

class Department{
    string deptName;
    int totalEmployees;
public:
    Department(string s1,int num){
    deptName = s1;
    totalEmployees = num;
    }
    void getter(){
    cout<<"Department Name: "<<deptName<<endl;
    cout<<"Total number of employees: "<<totalEmployees<<endl;
    }
    friend void transferEmployee(Department& A,Department& B);
};
void transferEmployee(Department& A,Department& B){
    A.totalEmployees--;
    B.totalEmployees++;
    cout<<"Transfer successful"<<endl;
    A.getter();
    B.getter();
}

int main(){
    Employee emp1(2521,33000.00),emp2;
    Employee emp3(emp1);
    cout<<"For employee 1: "<<endl;
    calcNet(emp1);
    cout<<"\nFor employee 2: "<<endl;
    calcNet(emp2);
    cout<<"\nFor employee 3: "<<endl;
    calcNet(emp3);
    cout<<endl;
    Department D1("CSE",9),D2("ECE",12);
    transferEmployee(D2,D1);
    return 0;
}
