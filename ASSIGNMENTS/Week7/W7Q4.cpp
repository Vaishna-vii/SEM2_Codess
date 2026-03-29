/* Q4) A company is building a smart office automation system that controls different electrical devices.
The development team has already implemented the following classes:
Write a program in C++ for the office control system that should:
 Be able to operate different types of devices using a common interface.
 Provide a utility routine that accepts a reference/pointer to a Device and performs the device
operation.
 Demonstrate the system working with multiple device types.
 The output should clearly show that the correct device behavior is selected at runtime when
devices are operated through the common interface.
 The system should be easily extendable to support additional devices in the future without
modifying existing logic. */
#include <iostream>
using namespace std;
class Device {
public:
virtual void start() = 0; //polymorphism
virtual void showStatus() {
cout << "Device operating normally" << endl;
} };
void operate(Device* d) {
    d->start();
    d->showStatus();
}
class Printer : public Device {
public:
void start() {
cout << "Printer is printing documents" << endl;
} };
class AirConditioner : public Device {
public:
void start() {
cout << "Air conditioner cooling the room" << endl;
} };
class Tubelight : public Device {
public:
void start() {
cout << "Tubelight is glowing" << endl;
} };
class Fan : public Device {
public:
void start() {
cout << "Fan is spinning" << endl;
} };
int main() {
    Printer p;
    AirConditioner ac;
    Tubelight t;
    Fan f;
    Device* devices[]={&p,&ac,&t,&f};
    for(int i=0;i<4;i++){
        operate(devices[i]);
    }
    return 0;
}
