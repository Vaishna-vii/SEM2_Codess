#include<iostream>
using namespace std;
class Rect{
    int l,h;
public:
    Rect(int length=2,int width=2):l(length),h(width){}
    //Rect(int length = 4,int width=5){
      //  l=length; h=width;
    //}
    int area(){
        return l*h;}
};
class Circle{
    int r;
public:
    //Circle(int rad):r(rad) {}
    //Circle(int r){
      //  this->r=r;
    //}
    Circle(int r):r(r){}
    float area(){
        const float pi=3.14159;
        return pi*r*r;
    }
};
int main(){
    Rect PQRS(2,1);
    cout<<PQRS.area()<<endl;
    Circle C1(10);
    cout<<C1.area()<<endl;
    return 0;
}
