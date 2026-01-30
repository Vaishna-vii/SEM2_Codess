/*4. WAP in C++ to create a class Wall having private data members length and height. 
i. Create a parameterized constructor and a copy constructor to initialize these private 
data members.  
ii. Define a member function to return the area.  
Demonstrate the working of each member function.  
*/
#include <iostream>
using namespace std;
class Wall{
    int length,height;
    public:
    Wall(int a,int b){//Parameterised constructor
        length=a;
        height=b;
    }
    Wall(const Wall &sample){//Const Copy constructor
        this->length=sample.length;
        this->height=sample.height;
    }
    int area();
};
int Wall::area(){
    return length*height;
}

int main(){
    Wall west(10,20);//created object with parameterized constructor
    cout<<west.area()<<endl;//printing the value we get from area function
    Wall east(west);//Creating cobject with copy constructor
    cout<<east.area()<<endl;//area function called
    return 0;
}
//9/10