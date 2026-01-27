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
        this->l=length;
        this->h=height;
        cout<<"Length is "<<length<<endl;
        cout<<"Breadth is "<<height<<endl;
    }
    void area(){
        float A=l*h;
        cout<<"Area of rectangle is "<<A<<endl;
    }
};
class Circle{
    private:
    float r;
    public:
    Circle(float R){
        this->r=R;
        cout<<"Radius is "<<R<<endl;
    }
    void area(){
        float A=3.14*r*r;
        cout<<"Area of Circle is "<<A<<endl;
    }
};
int main() {
    Rect P(20,30);
    P.area();
    Circle Q(10);
    Q.area();
    return 0;
}