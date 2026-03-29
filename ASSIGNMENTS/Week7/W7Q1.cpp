/*Q1) Create a base class Shape with a virtual function draw(). Create two derived classes Circle and
Rectangle that override the draw() function.
a) Define the base class with virtual void draw().
b) Override draw() in both derived classes.
c) In main(), create objects of Circle and Rectangle and call draw() using a base class pointer.*/
#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw(){
    cout<<"Shape drawn"<<endl;
    }
};
class Circle: public Shape{
    void draw()override{
        cout<<"Circle drawn"<<endl;
    }
};
class Rectangle:public Shape{
    void draw()override{
        cout<<"Rectangle drawn"<<endl;
    }
};
int main(){
    Shape* ptr; //runtime polymorphism
    Circle c1;
    ptr=&c1;
    ptr->draw();
    Rectangle ABCD;
    ptr=&ABCD;
    ptr->draw();
    return 0;
}