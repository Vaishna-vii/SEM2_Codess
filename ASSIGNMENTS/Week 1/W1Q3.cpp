//Assignment 1
#include <iostream>
using namespace std;
struct rectangle{
    float length,breadth;
};
void Area(rectangle r){
    cout<<"Area is: "<<(r.length*r.breadth)<<endl;
}
void Perimeter(rectangle r){
    cout<<"Perimeter is: "<<(2*(r.breadth+r.length))<<endl;
}
int main(){
    rectangle r1;
    cout<<"Enter length and breadth: "<<endl;
    cin>>r1.length>>r1.breadth;
    Area(r1);
    Perimeter(r1);
/*
3. Define a structure Rectangle with length and breadth. Pass the structure to a function to
calculate and display:
 Area
 Perimeter*/

    return 0;
}