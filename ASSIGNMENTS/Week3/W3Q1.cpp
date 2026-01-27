/*1. Write a C++ program to calculate electricity bill. Create a class to calculate 
Electricity Bill with:  
i. Create a get( ) function to take input details of the customer. 
ii. Create a function calc_bill( ) to calculate the total bill of the customer based on 
number electricity units consumed by the customer .  
iii. Create a put( ) function to print or display customer or person electricity bill. */
#include <iostream>
using namespace std;
class bill{
public:
    int consumed;
    float total;
    void get(){
    cout<<"Enter number of units consumed: ";
    cin>>consumed;
    };
    float calc_bill(int A){
    return (A*43);
    };
    void put(){
    cout<<"total bill is "<<total<<endl;
    };
};
int main(){
    bill personA;
    personA.get();
    personA.total=personA.calc_bill(personA.consumed);
    personA.put();
    return 0;
}
