/*6. Create a class BankAccount with the following private data members:
 char *accountHolder to store the account holder’s name dynamically, and
 double balance to store the account balance.
Define the following:
i. A parameterized constructor to initialize the account details.
ii. A copy constructor to perform deep copying of the account holder’s name.
iii. A destructor to release dynamically allocated memory.
iv. A member function to display account information. */
#include <iostream>
using namespace std;
class BankAccount{
    char *accountHolder;
    double balance;
    public:
    BankAccount(const char *str,double bal){//size of array? find out yourself
        balance=bal;
        int size =0;
        while(str[size]!='\0') size++;
        size++; //for '\0'
        accountHolder=new char[size];
        for(int i=0;i<size;i++){
            accountHolder[i]=str[i];
        }   
    }
    BankAccount(const BankAccount &sample){//copy constructor(deep copy!!)
    // accountHolder= sample.accountHolder; //shallow copy!!
    int size=0; //start from begining
    while(sample.accountHolder[size]!= '\0') size++;
    size++; //for '\0'
    accountHolder=new char[size];
    for(int i=0;i<size;i++){
        accountHolder[i]=sample.accountHolder[i];
    }
    balance=sample.balance;
    }
    ~BankAccount(){
        delete[] accountHolder;
    }
    void display(){
        cout<<"Holder name:"<<accountHolder<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
};
int main(){
    BankAccount personA("Rajesh Kumar Singh",101);
    cout<<"using Parameterised Constructor:"<<endl;
    personA.display();
    BankAccount personB(personA);
    cout<<"Using Copy Constructor:"<<endl;
    personB.display();
    return 0;
}
//9/10