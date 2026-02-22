/*1. Create a class Box with private members length, width, and height.
Write a friend function addVolumes() that takes two objects of Box and returns the sum
of their volumes.*/
#include <iostream>
using namespace std;
class Box{
    int length, width,height;
public:
    void setter(){
        cout<<"Enter Dimensions:"<<endl;
        cin>>length>>height>>width;
        cout<<endl;
    }
    friend int addVolumes(const Box& a,const Box& b);
};
int addVolumes(const Box& a,const Box& b){
    return (a.height*a.length*a.width)+(b.height*b.length*b.width);
}
int main(){
    Box b1,b2;
    b1.setter();
    b2.setter();
    cout<<"Total Volume:"<<addVolumes(b1,b2);
    return 0;
}
