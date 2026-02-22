/*3. Design a class Employee with a private data member basicSalary. Create a friend class
Payroll that computes the employee’s allowances, deductions, and net salary.
*/
#include <iostream>
using namespace std;
class Employee;
class Payroll{
public:
    float allowance=0.15,deduction=0.30;
    void calcNet(Employee& a);
};
class Employee{
    float netSalary,basicSalary;
public:
    void setter(){
        cout<<"Enter Basic Salary: ";
        cin>>basicSalary;
        cout<<endl;
    }
    void getter(){
    cout<<"Basic Salary is "<<basicSalary<<endl;
    cout<<"Net salary is "<<netSalary<<endl;
    }
    friend class Payroll;
};
void Payroll::calcNet(Employee& a){
    a.netSalary=a.basicSalary;
    a.netSalary+= a.basicSalary*allowance;
    a.netSalary-=a.basicSalary*deduction;
    a.getter();
}
int main(){
    Payroll p1;
    Employee emp1;
    emp1.setter();
    p1.calcNet(emp1);
    return 0;
}
