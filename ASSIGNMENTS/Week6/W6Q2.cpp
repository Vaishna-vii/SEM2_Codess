/*Q2) Study the following C++ programs and write the exact output.
a)
#include <iostream>
using namespace std;
class Vehicle {
public:
Vehicle() { //constructor
cout << "Vehicle ";
}
~Vehicle() { //destructor
cout << "~Vehicle ";
}
};
class Car : public Vehicle { //publically inherited
public:
Car() { //constructor
cout << "Car ";
}
~Car() { //destructor
cout << "~Car ";
}
};
class ElectricCar : public Car { //publically inherited of car
public:

ElectricCar() { //constructor
cout << "ElectricCar ";
}
~ElectricCar() { //destructor
cout << "~ElectricCar ";
}
};
int main() {
ElectricCar e;
return 0;
}/*
output:
Vehicle Car ElectricCar ~ElectricCar ~Car ~Vehicle
b)
#include <iostream>
using namespace std;
class Vehicle {
public:
Vehicle() { //constructor
cout << "Vehicle ";
}
~Vehicle() { //destructor
cout << "~Vehicle ";
}
};
class Car : private Vehicle { //privately inherited
public:
Car() { //constructor
cout << "Car ";
}
};
class ElectricCar : public Car { //publically inherited
public:

ElectricCar() { //constructor
cout << "ElectricCar ";
}
};
int main() {
ElectricCar e;
Vehicle v = e;
return 0;
}
output:
error coz vehicle is inaccesible base of electric car
c)
#include <iostream>
using namespace std;
class A {
public:
int x = 10;
protected:
int y = 20;
private:
int z = 30;
};
class B : protected A {
public:
void showB() {
cout << x << " ";
cout << y << " ";
// cout << z << " ";
//commented coz z is private member of base A
}
};
class C : public B {
public:
void showC() {
cout << x << " ";
cout << y << " ";
}
};

int main() {
C obj;
obj.showB();
obj.showC();
return 0;
}
output:
10 20 10 20
*/
