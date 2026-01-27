/*Write a C++ program with the following requirements: 
i. Create a class named Second with an integer data member personId. 
ii. Provide both a default constructor and a parameterized constructor. 
iii. Create two objects: 
 obj1 should call the default constructor and print the person ID. 
 obj2 should call the parameterized constructor and print the person ID.*/
#include <iostream>
using namespace std;
class Second{
    public:
    int personID;
    Second(){
        personID=0;
    }
    Second(int x){
        personID=x;
    }
    void printPersonID(){
    cout<<"Person ID: "<<personID<<endl;
    }
};
int main(){
    Second obj1;
    obj1.personID=2248;
    obj1.printPersonID();
    Second obj2(1246);
    obj2.printPersonID();
    return 0;
}
