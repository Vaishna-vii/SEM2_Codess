#include <iostream>
#include <cstring>
using namespace std;

// ---------- PERSON ----------
class Person {
protected:
    char name[20];
    int age;

public:
    Person(const char* n, int a) {
        strcpy(name, n);
        age = a;
    }

    const char* getName() const { return name; }
};

// ---------- SUBJECT ----------
class Subject {
    char name[20];

public:
    Subject(const char* n) {
        strcpy(name, n);
    }

    bool isMatch(const char* n) const {
        return strcmp(name, n) == 0;
    }

    const char* getName() const { return name; }
};

// ---------- STUDENT ----------
class Student : public Person {
    int enroll;
    float cgpa;

    Subject* subs[5];
    int count;

public:
    Student(const char* n, int a, int e, float c)
        : Person(n, a), enroll(e), cgpa(c), count(0) {}

    void registerSub(Subject* s) {
        if (count < 5)
            subs[count++] = s;
    }

    bool hasSubject(const char* subName) const {
        for (int i = 0; i < count; i++) {
            if (subs[i]->isMatch(subName))
                return true;
        }
        return false;
    }
};

// ---------- FACULTY ----------
class Faculty : public Person {
    int empId;
    float salary;

    Subject* subs[3];
    int count;

public:
    Faculty(const char* n, int a, int id, float sal)
        : Person(n, a), empId(id), salary(sal), count(0) {}

    void assignSubject(Subject* s) {
        if (count < 3)
            subs[count++] = s;
    }

    bool teaches(const char* subName) const {
        for (int i = 0; i < count; i++) {
            if (subs[i]->isMatch(subName))
                return true;
        }
        return false;
    }
};

// ---------- MAIN ----------
int main() {

    // Subjects
    Subject sdf("SDF-2");
    Subject ds("DS");
    Subject math("Math");

    // Students
    Student s1("Aman", 20, 101, 8.5);
    Student s2("Riya", 21, 102, 9.0);
    Student s3("Karan", 19, 103, 7.8);
    Student s4("Neha", 20, 104, 8.9);

    // Register subjects
    s1.registerSub(&sdf);
    s1.registerSub(&ds);

    s2.registerSub(&ds);

    s3.registerSub(&sdf);
    s3.registerSub(&math);

    s4.registerSub(&math);

    // Faculty
    Faculty f1("abc", 40, 5001, 70000);
    f1.assignSubject(&sdf);

    Faculty f2("xyz", 45, 5002, 80000);
    f2.assignSubject(&math);

    // -------- QUERY 1 --------
    cout << "\nStudents registered in SDF-2:\n";

    Student* students[] = {&s1, &s2, &s3, &s4};

    for (int i = 0; i < 4; i++) {
        if (students[i]->hasSubject("SDF-2"))
            cout << students[i]->getName() << endl;
    }

    // -------- QUERY 2 --------
    cout << "\nStudents taught by faculty abc:\n";

    if (strcmp(f1.getName(), "abc") == 0) {
        for (int i = 0; i < 4; i++) {
            if (students[i]->hasSubject("SDF-2") && f1.teaches("SDF-2"))
                cout << students[i]->getName() << endl;
        }
    }

    return 0;
}