/*UML DESIGNING
1. Multiple students can associate with a single department and single student can associate with multiple departments. Both objects have independent lifecycles and neither controls the
creation or deletion of the other.
WAP in C++ to model the relationships.*/
#include <iostream>
#include <vector>
using namespace std;

class Department;

class Student {
public:
    string name;
    vector<Department*> depts;

    Student(string n) : name(n) {}

    void addDept(Department* d) {
        depts.push_back(d);
    }
};

class Department {
public:
    string name;
    vector<Student*> students;

    Department(string n) : name(n) {}

    void addStudent(Student* s) {
        students.push_back(s);
    }
};

int main() {
    Student s1("A");
    Department d1("CSE"), d2("IT");

    s1.addDept(&d1);
    s1.addDept(&d2);

    d1.addStudent(&s1);
    d2.addStudent(&s1);
}
