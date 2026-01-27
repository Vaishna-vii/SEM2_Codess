//Assignment 1
#include <iostream>
using namespace std;
struct student
{
    int rollNo;
    string name;
    float marks[3];
    float total;
    float average;
};

int main(){
/*1. Define a structure Student with members: rollNo, name, marks in 3 subjects. Write a
program to:
 Input details of n students
 Calculate total and average marks
 Display the result for a given rollNo OR name
*/
    int n,i,j;
    cout<<"Enter Number of student:";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++){
        cout<<"Enter Student "<<(i+1)<<" details:\n Enter roll number:"<<endl;
        cin>>s[i].rollNo;
        cout<<"Enter Name:"<<endl;
        cin>>s[i].name;
        s[i].total=0;
        for(j=0;j<3;j++){
            cout<<"Enter subject "<<(j+1)<<" marks:"<<endl;
            cin>>s[i].marks[j];
            s[i].total+=s[i].marks[j];
        }
        s[i].average=s[i].total/3;
    }

    student search;
    bool found=0;
    cout<<"Enter student roll number for result:";
    cin>>search.rollNo;
    for(i=0; i<n;i++){
        if(search.rollNo==s[i].rollNo){
            found=1;
            cout<<"Name:"<<s[i].name<<endl;
            for(j=0;j<3;j++){
                cout<<"Marks of subject "<<(j+1)<<" is: "<<s[i].marks[j]<<endl;
            }
            cout<<"Total:"<<s[i].total<<endl;
            cout<<"Average:"<<s[i].average<<endl;
            break;
        }
    }
    if(found==0){
        cout<<"\n Student with roll number "<<search.rollNo<<" not found";
    }
    return 0;
}
