/*Q6) A robotics company is designing a control system for autonomous vehicles. The system architecture
is partially implemented as follows:
class Vehicle
{
public:
virtual void move()
{
cout << "Vehicle is moving" << endl;
}
};
class LandVehicle : virtual public Vehicle
{
public:
void move()
{
cout << "Moving on land" << endl;
}
};
class WaterVehicle : virtual public Vehicle
{
public:
void move()
{
cout << "Moving on water" << endl;
}
};

The company now wants to introduce a special vehicle called AmphibiousVehicle that can operate both
on land and water. The completed system should:
 Represent the AmphibiousVehicle using the existing hierarchy.
 Ensure that the vehicle can operate through a common vehicle interface.
 Demonstrate how the system resolves the ambiguity that arises when multiple parent classes
provide the same function.
 Ensure that only one base Vehicle instance exists in the final hierarchy.
 Allow different types of vehicles to be controlled using a unified interface, with the correct
movement behavior executed at runtime.*/
