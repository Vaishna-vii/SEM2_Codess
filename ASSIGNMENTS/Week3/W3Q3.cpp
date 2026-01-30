/*Write a C++ program to create a class that stores private data members: Enrolment 
Number, Name, Branch, and CGPA. The class should include the following 
constructors: 
i. 
ii. 
iii. 
A constructor to initialize Enrolment Number, Name, Branch, and CGPA. 
A constructor to initialize Enrolment Number, Name, and CGPA (with Branch = 
"CSE" as the default). 
A constructor to initialize all data members with default values: 
Enrolment Number = 1, Name = "Unknown", Branch = "CSE", CGPA = 6. 
Also include: 
 Getter and setter functions for each data member. 
 In the main() function, create objects using all three constructors. 
 Modify the CGPA of any one object using a setter function. 
 Display the updated CGPA along with the complete student details on the console.*/
#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    int Enrolment_no;
    float CGPA;
    string name,branch;
public:
    Student(){//initialise all
    Enrolment_no = 1;
    name = "Unknown";
    branch = "CSE";
    CGPA = 6;
    }
    Student(int x,string y,float z){//branch predefined
        Enrolment_no=x;
        CGPA=z;
        name=y;
        branch = "CSE";
    }
    Student(int x,string y,string w,float z){//set values to all
        Enrolment_no=x;
        CGPA=z;
        name=y;
        branch = w;
    }
    void setCGPA(float z){ CGPA=z;}
    void setName(string n){ name=n; }
    void setBranch(string b){branch=b; }
    void setEnrolmentNumber(int n){Enrolment_no=n; }

    int getEnrolmentNumber() { return Enrolment_no; }
    string getName() { return name; }
    string getBranch() { return branch; }
    float getCGPA() { return CGPA; }
    void display() {
        cout << "Enrolment Number: " << Enrolment_no << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};
int main(){
    Student s1(2338,"Purvit","ECE",7.9);
    Student s2(2339,"Mehak",8.5);
    Student s3;
    cout<<"Student 1 Details:"<<endl;
    s1.display();
    cout<<"Student 2 Details:"<<endl;
    s2.display();
    cout<<"Student 3 Details:"<<endl;
    s3.display();
    s1.setCGPA(8.7);
    cout<<"Updated Student 1 Details:"<<endl;
    s1.display();
    return 0;
}
// 9/10