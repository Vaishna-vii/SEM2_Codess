//Assignment 1
#include <iostream>
using namespace std;
struct employee{
    int empID;
    string name;
    float basicSalary;
    float hra;
    float da;
    float gross;
};
int main(){
/*2. Create a structure Employee containing: empId, name, basicSalary. Calculate and display:
 HRA (20% of basic)
 DA (10% of basic)
 Gross Salary
 Name of employee with highest paid salary
 Basic salary of an employee given his Id OR name*/
int n,i,j,max=0;
cout<<"Enter number of employees: ";
cin>>n;
employee e[n];
for(i=0;i<n;i++){
    cout<<"Enter details of Employee "<<(i+1)<<endl;
    cout<<"Enter Employee ID: "<<endl;
    cin>>e[i].empID;
    cout<<"Enter Employee name: "<<endl;
    cin>>e[i].name;
    cout<<"Enter Basic Salary: "<<endl;
    cin>>e[i].basicSalary;
    e[i].hra=(e[i].basicSalary*0.2);
    e[i].da=(e[i].basicSalary*0.1);
    e[i].gross=e[i].basicSalary+e[i].hra+e[i].da;
}
for(j=0;j<n;j++){
    if(e[max].gross<=e[j].gross){
        max=j;
    }
}
cout<<"Employee with Highest paid salary: "<<e[max].name<<endl;
employee search;
    bool found=0;
    cout<<"Enter employee ID to search:"<<endl;
    cin>>search.empID;
    for(i=0; i<n;i++){
        if(search.empID==e[i].empID){
            found=1;
            cout<<"Name:"<<e[i].name<<endl;
            cout<<"Basic Salary:"<<e[i].basicSalary<<endl;
            cout<<"Gross Salary:"<<e[i].gross<<endl;
            break;
        }
    }
    if(found==0){
        cout<<"\n Employee with empID "<<search.empID<<" not found";
    }

    return 0;
}