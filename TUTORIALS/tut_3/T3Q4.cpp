/*Q4. Declare a class to represent bank account of 10 customers with the following data
members. Name of the depositor, Account number, Type of account (S for Savings and C
for Current), Balance amount.
The class also contains member functions to do the following:
(i) To initialize data members
(ii) To deposit money
(iii) To withdraw money after checking the balance (minimum balance in Rs.
1000)
(iv) To display the data members
*/
#include <iostream>
#include <string>
using namespace std;
class Bank{
    string depositor_NAME;
    int Account_number;
    char Account_type;
    float Balance_amount;
    public:
    //no constructor was instructed to make
    void setter(string n, int a, char t, float b);
    void display();
    void deposit(int a);
    void withdraw(int b);
};
void Bank::setter(string n, int a, char t, float b){
    depositor_NAME = n;
    Account_number = a;
    Account_type = t;
    Balance_amount = b;
}
void Bank::display(){
    cout<<"Name: "<<depositor_NAME<<endl;
    cout<<"Account number: "<<Account_number<<endl;
    cout<<"Type of account: "<<Account_type<<endl;
    cout<<"Balance amount: "<<Balance_amount<<endl;
}
void Bank::deposit(int a){
    if(a<=0) return;
    Balance_amount+=a;
    cout<<"Deposit successful"<<endl;
}
void Bank::withdraw(int b){
    if(b<=0) return;
    if((Balance_amount - b)>=1000){
    Balance_amount-=b;
    cout<<"Withdraw successful"<<endl;
    } else {
        cout<<"Insufficient Balance"<<endl;
    }
}
int main(){
    Bank Customers[10];
    string n; int a; char t; float b;
    for(int i=0;i<10;i++){
        cout<<"For Customer "<<i+1<<endl;
        cout<<"Enter in order (name, account number, account type(S/C), balance):"<<endl;
        cin.ignore();
        getline(cin,n);
        cin>>a>>t>>b;
        Customers[i].setter(n,a,t,b);
    }
    cout<<"=====Customer 1 after deposit====="<<endl;
    Customers[0].deposit(500);
    
    cout<<"======Customer 2 after withdraw====="<<endl;
    Customers[1].withdraw(1200);

    for(int i=0;i<10;i++){
        cout<<"Updated log for Customer "<<i+1<<endl;
        Customers[i].display();
    }

    return 0;
}
// 9/10