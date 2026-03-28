/*

Q4) Create a Distance class that represents a physical distance using kilometers and meters.
 Store distance values as two attributes: kilometers and meters.
 Overload the addition (+) operator to add two Distance objects.
 Overload the subtraction (-) operator to subtract one Distance object from another.
 Automatically normalize the result so that 1000 meters are converted into 1 kilometer
whenever required.
 Write a main() function to demonstrate addition and subtraction of distances.
*/
#include <iostream>
using namespace std;
class Distance{
    int kilometers, meters;
public:
    void getter(){
    cout<<kilometers<<" km "<<meters<<" m"<<endl;
    }
    Distance(int akm=0,int am=0){
    kilometers=akm; meters=am;
    }
    void normalise(Distance& a){
        if(a.meters>=1000){
            a.kilometers+=a.meters/1000;
            a.meters%=1000;
        }
    }
    Distance operator+(const Distance& b){
        Distance temp;
        temp.kilometers=kilometers+b.kilometers;
        temp.meters=meters+b.meters;
        normalise(temp);
        return temp;
    }
    Distance operator-(const Distance& b){
        Distance temp;
        temp.kilometers=kilometers-b.kilometers;
        temp.meters=meters-b.meters;
        normalise(temp);
        return temp;
    }
};
int main(){
    Distance B(2,456),A(4,566);
    cout<<"A: ";
    A.getter();
    cout<<"B: ";
    B.getter();
    Distance C=A+B ,D=A-B;
    cout<<"Sum: ";
    C.getter();
    cout<<"Difference: ";
    D.getter();
    return 0;
}
