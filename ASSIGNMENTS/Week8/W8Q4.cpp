/*4. RefertotheUMLdiagramaboveanddothefollowing:

(i) Vehicle class
#include <iostream>
using namespace std;

class Vehicle {
public:
    int wheels = 4;
    int maxPower = 100;
    int seats = 5;

    void pressAccelerator() {}
    void turnWheel() {}
    void pressBrake() {}
};

(ii) Aggregation (Vehicle–Wheel)
class Wheel {};

class Vehicle {
public:
    Wheel* w;  // aggregation
};

(iii) Inheritance (Car, Lorry)
class Vehicle {
public:
    void drive() {}
};

class Car : public Vehicle {};
class Lorry : public Vehicle {};

(iv) Association (Person owns Vehicle)
class Vehicle {};

class Person {
public:
    Vehicle* v;

    void owns(Vehicle* veh) {
        v = veh;
    }
};
*/