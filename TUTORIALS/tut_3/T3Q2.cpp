/*Q2. Define the class Rect with private members l and h, which denote the length and width of a
rectangle, respectively. Also, define the class Circle with private member r, which denotes the
radius of the circle. Each class must contain an appropriate constructor and a public function
area(), which returns the area of the corresponding shape. Write a program that tests the function.
*/
#include <iostream>
using namespace std;
class Rect{
    private:
    float l,h;
    public:
    Rect(float length,float height){
        l=length;
        h=height;
    }
    
    float area(){
        return l*h;
    }
};
class Circle{
    private:
    float r;
    public:
    Circle(float R){
        r=R;
    }
    
    float area(){
        const float pie=3.14159;
        float A=pie*r*r;
        return A;
    }
};
int main() {
    Rect P(20,30);
    cout<<"Area of rectangle is "<<P.area()<<endl;
    Circle Q(10);
    cout<<"Area of Circle is "<<Q.area()<<endl;
    return 0;
}
//9/10