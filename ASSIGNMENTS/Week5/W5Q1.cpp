/*Q1) Write a C++ program to overload the unary plus (+) operator for a class Temperature. The
operator should return the absolute value of the temperature. Display the original and modified
temperature values.
Example:
Original temperature: -25
Modified temperature: 25
*/
#include <iostream>
using namespace std;
class Temperature{
    int temp;
public:
    int getter(){
    return temp;}
    Temperature operator+(){
        int c = temp;
        if(temp<0) c *= (-1);
        return Temperature(c); //made an object with constructor
    }
    Temperature(int a=0){
    temp = a;
    }
};
int main(){
    Temperature t1(-29),t2(-10);
    cout<<"For t1:\nOriginal temperature: "<<t1.getter()<<"\nModified temperature: "<<(+t1).getter()<<endl;
    cout<<"For t2:\nOriginal temperature: "<<t2.getter()<<"\nModified temperature: "<<(+t2).getter()<<endl;
    return 0;
}
