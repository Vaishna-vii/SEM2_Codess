/*Q1) Write a C++ program to implement the following OOP concepts.
a) Create a base class named Person with the following data members:
Data Member Access Specifier
name public
age protected
aadhaarNo private

 A public member function setPersonDetails() to initialize all data members
 A public member function displayPersonDetails() to display only accessible members
b) Create a class Student that inherits publicly from Person.
The Student class must:
 Declare its own data member rollNo
 Implement a function displayStudentDetails() that:
o Displays name (public member of Person)
o Displays age (protected member of Person)
o Attempts to access aadhaarNo
 This line must be commented
 Add a comment explaining why it causes an error
c) Create another class GraduateStudent that inherits publicly from Student.
The GraduateStudent class must:
 Add a data member researchTopic
 Implement a function displayGraduateDetails() to display:
o Name
o Age
o Roll number
o Research topic
d) Create another class Employee that also inherits publicly from Person.
The Employee class must:
 Have a data member employeeId

 Implement a function displayEmployeeDetails() to display:
o Name
o Age
o Employee ID
e) Perform the following operations inside the main() function:
i. Create and Test Student Object (Single Inheritance)
 Create an object of class Student.
 Call setPersonDetails() to initialize:
o name
o age
o aadhaarNo
 Initialize rollNo of the Student.
 Call displayStudentDetails() to:
o Display name and age
o Observe that aadhaarNo cannot be accessed directly
ii. Create and Test GraduateStudent Object (Multilevel Inheritance)
 Create an object of class GraduateStudent.
 Call setPersonDetails() to initialize base class data.
 Initialize:
o rollNo
o researchTopic
 Call displayGraduateDetails() to verify:
o Access to name (Person)
o Access to age (Person)
o Access to rollNo (Student)

iii. Create and Test Employee Object (Hierarchical Inheritance)
 Create an object of class Employee.
 Call setPersonDetails() to initialize Person data.
 Initialize employeeId.
 Call displayEmployeeDetails() to display:
o Name
o Age
o Employee ID

iv. Task 4: Observe and Record Outputs
 Execute the program.
 Verify:
o Public members are acessible through objects
o Protected members are accessible only inside derived classes
o Private members are not accessible in derived classes
 Record observations in the result section.*/

#include<iostream>
using namespace std;
class Person{
    int aadhaarNo;
    protected:  int age;
public:
    string name;
    void setPersonDetails(int a, int b, string c){
        aadhaarNo=a;   age=b;    name=c;
    }
    void displayPersonDetails(){
        cout<<"Name  "<<name<<endl;
        cout<<"Age  "<<age<<endl;
        cout<<"Aadhaar No  "<<aadhaarNo<<endl;
    }
};
class Student: public Person{
public:
    int rollNo;
    void displayStudentDetails(){
        cout<<"Name  "<<name<<endl;
        cout<<"Age  "<<age<<endl;
        //cout<<"Aadhaar No  "<<aadhaarNo<<endl;
        //Private members of base class are never inherited.
        cout<<"Roll No  "<<rollNo<<endl;
    }
};
class GraduateStudent: public Student{
public:
    string researchTopic;
    void displayGraduateDetails(){
        cout<<"Name  "<<name<<endl;
        cout<<"Age  "<<age<<endl;
        cout<<"Roll No  "<<rollNo<<endl;
        cout<<"Research Topic  "<<researchTopic<<endl;
    }
};
class Employee: public Person{
public:
    int employeeId;
    void displayEmployeeDetails(){
        cout<<"Name  "<<name<<endl;
        cout<<"Age  "<<age<<endl;
        cout<<"Employee ID  "<<employeeId<<endl;
    }
};
int main(){
    cout<<"---------Student Info---------"<<endl;
    Student S0011;
    S0011.setPersonDetails(24212523,17,"Purvit");
    S0011.rollNo=22031032;
    S0011.displayStudentDetails();

    cout<<"\n\n---------Graduate Student Info---------"<<endl;
    GraduateStudent G22110;
    G22110.setPersonDetails(324235,25,"Samriddhi");
    G22110.rollNo=21034243;
    G22110.researchTopic="Electricity and Environment";
    G22110.displayGraduateDetails();

    cout<<"\n\n---------Employee Info---------"<<endl;
    Employee E0034;
    E0034.setPersonDetails(42146643,26,"Vijaya");
    E0034.employeeId=3532677;
    E0034.displayEmployeeDetails();

    return 0;
}
//9/10
