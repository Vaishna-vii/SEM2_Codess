/*
Q4) A company is building a smart office automation system that controls different electrical devices.
The development team has already implemented the following classes:
class Device
{
public:
virtual void start() = 0;
virtual void showStatus()
{
cout << "Device operating normally" << endl;
}
};
class Printer : public Device
{

public:
void start()
{
cout << "Printer is printing documents" << endl;
}
};
class AirConditioner : public Device
{
public:
void start()
{
cout << "Air conditioner cooling the room" << endl;
}
};
Write a program in C++ for the office control system that should:
 Be able to operate different types of devices using a common interface.
 Provide a utility routine that accepts a reference/pointer to a Device and performs the device
operation.
 Demonstrate the system working with multiple device types.
 The output should clearly show that the correct device behavior is selected at runtime when
devices are operated through the common interface.
 The system should be easily extendable to support additional devices in the future without
modifying existing logic.

*/