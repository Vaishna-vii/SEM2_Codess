/*Q2) Design a Battery class that stores the current battery level (in percentage).
 Implement charging and discharging behavior by overloading the increment (++) and
decrement (--) operators.
 The battery level should increase by 5% when charged and decrease by 5% when
discharged.
 Support both prefix and postfix forms of increment and decrement operators to allow:
o immediate state updates (prefix), and
o access to the previous battery level before charging or discharging (postfix).
 Ensure that the battery level never exceeds 100% and never falls below 0%.
 Write a main() function to demonstrate:
o charging and discharging the battery, and
o the difference between prefix and postfix operator behavior.
*/
#include <iostream>
using namespace std;
class Battery{
    int level;
public:
    Battery(int A=0){
    //if(A<101&&A>=0) level=A;//weirdESTTT, cutoff krte na
    if(A>100) level=100;
    else if(A<0) level=0;
    else level=A;
    }
    void getter(){
        cout<<"Battery status:"<<level<<endl;
    }
    Battery& operator++(){//prefix coz we pass by reference, return mei this keyword and clamp as per required
        level+=5;
        if(level>100) level=100;
        return *this;
    }
    Battery& operator--(){//prefix
        level-=5;
        if(level<0) level=0;
        return *this;
    }
    Battery operator++(int){//postfix coz there is a DUMMY parameter
        Battery temp=*this;
        level+=5;
        if(level>100) level=100;
        return temp;
    }
    Battery operator--(int){//postfix
        Battery temp=*this;
        level-=5;
        if(level<0) level=0;
        return temp;
    }
};
int main(){
    Battery PQ(40);
    cout<<"Initially:"<<endl;
    PQ.getter();

    cout<<"\nPostfix Charging:"<<endl;
    (PQ++).getter();
    cout<<"\nPrefix Charging:"<<endl;
    (++PQ).getter();

    cout<<"\nPrefix Discharging:"<<endl;
    (--PQ).getter();
    cout<<"\nPostfix Discharging:"<<endl;
    (PQ--).getter();

    cout<<"\nFinale:"<<endl;
    PQ.getter();
    return 0;
}
