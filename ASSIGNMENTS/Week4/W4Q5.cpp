/*5. Create a class Point to represent a 2D point with coordinates x and y.
a. Provide constructors for:
i. Initializing the origin (0, 0).
ii. Initializing with specific x and y values.
iii. Initializing by copying another Point. Demonstrate constructor overloading in the
program.
b. Write a program to create a class Distance with private members feet and inches. Use
a friend function to compare two Distance objects and display the larger one.

c. Design a class account with private members balance and accountNumber. Use a
parameterized constructor for initialization. Write a friend function transferFunds to
transfer a specified amount from one account to another.
d. Write a program to create a class time with private data members hours, minutes, and
seconds. Use a friend function to add two-time objects and return the result.*/
#include <iostream>
using namespace std;

class Point{
    int x,y;
public:
    Point(int a=0, int b=0){
        x=a; y=b;
    }
    Point(const Point& A){
        x=A.x; y=A.y;
    }
    void getter(){
    cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
class Distance{
    int feet, inches;
public:
    Distance(int a,int b){
    feet=a; inches=b;
    if(inches>11){
        cout<<"Conversion is done"<<endl;
        feet+=(inches/12);
        inches%=12;
    }
    }
    void getter(){
    cout<<feet<<" feet\t"<<inches<<" inches"<<endl;
    }
    friend void compareDistance(Distance& A,Distance& B);
};
void compareDistance(Distance& A,Distance& B){
    cout<<"Greater is: ";
    int totalA=A.feet*12+A.inches;
    int totalB=B.feet*12+B.inches;
    if(totalA>totalB){
            A.getter();
       } else if(totalA<totalB){
            B.getter();
       }
}
class account{
    int accNumber;
    float balance;
public:
    account(int a=2222, float b=200.0):accNumber(a), balance(b){}
    void getter(){
    cout<<"Account Number: "<<accNumber<<"\tbalance:"<<balance<<endl;
    }
    friend void transferFunds(account& p,account& q,float b);
};
void transferFunds(account& p,account& q,float b){
    if(b<=p.balance){
    p.balance-=b;
    q.balance+=b;
    cout<<"Transaction of "<<b<<" was successful\nUpdated Logs:"<<endl;
    p.getter();
    q.getter();
    } else  {
    cout<<"Insufficient funds"<<endl;
    }
}
class time{
    int hours,minutes,seconds;
public:
    time(int a,int b,int c):hours(a),minutes(b),seconds(c){}
    friend time addtime(const time& a,const time& b);
    time(const time& p){
    hours=p.hours; minutes=p.minutes; seconds=p.seconds;
    }
    void getter(){
    cout<<hours<<" hours\t"<<minutes<<" minutes\t"<<seconds<<" seconds"<<endl;
    }
};
time addtime(const time& a,const time& b){
    time c(0,0,0);
    c.hours=a.hours+b.hours;
    c.minutes=a.minutes+b.minutes;
    c.seconds=a.seconds+b.seconds;
    if(c.seconds>=60){
        c.minutes+=(c.seconds/60);
        c.seconds%=60;
    }
    if(c.minutes>=60){
        c.hours+=(c.minutes/60);
        c.minutes%=60;
    }
    return c;
}
int main(){
    Point P(2,4),Q;
    Point R(P);
    cout<<"Point P "; P.getter();
    cout<<"Point Q "; Q.getter();
    cout<<"Point R "; R.getter();
    cout<<endl;
    Distance a(5,6),b(6,13);
    cout<<"Distance a "; a.getter();
    cout<<"Distance b "; b.getter();
    compareDistance(a,b);
    cout<<endl;
    account M(2422,6200.90),N;
    cout<<"Account M:\n"; M.getter();
    cout<<"Account N:\n"; N.getter();
    cout<<endl;
    transferFunds(M,N,300.15);
    cout<<endl;
    time X(22,33,44),Y(12,44,57);
    cout<<"time X: "; X.getter();
    cout<<"time Y: "; Y.getter();
    time Z(addtime(X,Y));
    cout<<"total time Z:"; Z.getter();
    cout<<"Thanks!";
    return 0;
}
