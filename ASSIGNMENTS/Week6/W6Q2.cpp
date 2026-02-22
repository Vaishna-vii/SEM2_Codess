/*Q2) Study the following C++ programs and write the exact output.
a)
#include <iostream>
using namespace std;
class Vehicle {
public:
Vehicle() {
cout << "Vehicle ";
}
~Vehicle() {
cout << "~Vehicle ";
}
};
class Car : public Vehicle {
public:
Car() {
cout << "Car ";
}
~Car() {
cout << "~Car ";
}
};
class ElectricCar : public Car {
public:

ElectricCar() {
cout << "ElectricCar ";
}
~ElectricCar() {
cout << "~ElectricCar ";
}
};
int main() {
ElectricCar e;
return 0;
}
b)
#include <iostream>
using namespace std;
class Vehicle {
public:
Vehicle() {
cout << "Vehicle ";
}
~Vehicle() {
cout << "~Vehicle ";
}
};
class Car : private Vehicle {
public:
Car() {
cout << "Car ";
}
};
class ElectricCar : public Car {
public:

ElectricCar() {
cout << "ElectricCar ";
}
};
int main() {
ElectricCar e;
Vehicle v = e;
return 0;
}
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
}*/