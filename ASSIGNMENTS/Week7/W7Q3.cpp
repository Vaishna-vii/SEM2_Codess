/*Q3) Create a base class Animal with a virtual function makeSound(). Create derived classes, Dog and
Cat.
a) Override makeSound() in both derived classes.
b) Print appropriate sounds such as "Dog barks" and "Cat meows".
c) Use an array of base class pointers to store objects of different derived classes and call
makeSound().*/
#include<iostream>
using namespace std;
class Animal{
    public:
virtual void makeSound(){
    cout<<"Animal sounds"<<endl;
}
};
class Dog: public Animal{
public:
    void makeSound(){
        cout<<"Dog barks"<<endl;
    }
};
class Cat: public Animal{
public:
    void makeSound(){
        cout<<"Cat meows"<<endl;
    }
};
int main(){
    Animal* animals[2];
    animals[0] = new Dog(); // points to Dog object
    animals[1] = new Cat(); // points to Cat object
    // Call makeSound() for each animal in the array
    for (int i = 0; i < 2; i++) {
    animals[i]->makeSound();
    }
    return 0;
}