/*Q2) Create a base class Employee with a virtual function calculateSalary(). Create two derived classes,
FullTimeEmployee and PartTimeEmployee.
a) FullTimeEmployee calculates salary as monthly fixed salary.
b) PartTimeEmployee calculates salary as hours worked × hourly rate.
c) Override calculateSalary() in both classes.
d) Demonstrate function overriding using a base class pointer in main().*/
#include<iostream>
using namespace std;
class Employee{
    public:
    virtual int calculateSalary(){
        return 0; //gives linker error if undeclared
    }
};
class FullTimeEmployee:public Employee{
    int months;
    int fixedSalary;
public:
    FullTimeEmployee(int a=1, int b=10000){
    months=a;fixedSalary=b;
    }
    int calculateSalary() override{
        return months*fixedSalary;
    }
};
class PartTimeEmployee:public Employee{
    int hours;
    int rate;
public:
    PartTimeEmployee(int a=1, int b=1000){
    hours=a;rate=b;
    }
    int calculateSalary() override{
        return hours*rate;
    }
};
int main(){
    Employee* ptr;
    int m,n;
    cout<<"Enter no of hours worked: "; cin>>n;
    PartTimeEmployee P1(n);
    ptr = &P1;
    cout<<"Part Time Salary for "<<n<<" hours is: "<<ptr->calculateSalary()<<endl;
    cout<<"Enter no of months worked: "; cin>>m;
    FullTimeEmployee F1(m);
    ptr = &F1;
    cout<<"Full Time Salary for "<<m<<" months is: "<<ptr->calculateSalary()<<endl;
    return 0;
}