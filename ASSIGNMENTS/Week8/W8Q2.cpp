
/*2. A single Employee can not belong to multiple Companies (legally!!), but if we delete the
Company, Employee object will not destroy.
WAP in C++ to model the relationships.*/
#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    Employee(string n) : name(n) {}
};

class Company {
public:
    string name;
    Employee* emp;

    Company(string n, Employee* e) {
        name = n;
        emp = e;
    }

    void display() {
        cout << name << " employs " << emp->name;
    }
};

int main() {
    Employee e1("John");
    Company c1("ABC", &e1);

    c1.display();
}
