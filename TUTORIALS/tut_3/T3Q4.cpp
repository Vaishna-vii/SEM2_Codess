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
    public:
    string depositor_NAME;
    int Account_number;
    char Account_type;
    float Balance_amount;
    // Bank(){
    //     Bank *customers = new Bank[10];//IDK HOW TO FOR 10, THIS WORKS FOR ONE THOUGH!!
    // }
    void setter(){
        // for(int i=0;i<10;i++){
            //cout<<"For Customer "<<i+1<<endl;
            cout<<"Enter Name:";
            getline(cin,depositor_NAME);
            cout<<"Enter account number:";
            cin>>Account_number;
            cout<<"Enter Type of account (S for Savings and C for Current)";
            cin>>Account_type;
            if(Account_type!='S'&& Account_type!='C')   return;
            cout<<"Enter balance amount:";
            cin>>Balance_amount;
        }
    void deposit(int num,int a);
    void withdraw(int num,int b);
    void display(){
        cout<<"Name:"<<depositor_NAME<<endl;
        cout<<"Account number:"<<Account_number<<endl;
        cout<<"Type of account (S for Savings and C for Current)"<<Account_type<<endl;
        cout<<"Balance amount:"<<Balance_amount<<endl;
    }
};
void Bank::deposit(int num,int a){
    if(a<=0) return;
    this->Account_number=num;
    this->Balance_amount+=a;
}
void Bank::withdraw(int num,int b){
    if(b<=0) return;
    if((Balance_amount - b)>=1000){
    this->Account_number=num;
    this->Balance_amount-=b;
    } else {
        cout<<"Insufficient Balance";
    }
}
int main(){
    Bank Central;
    Central.setter();

    cout<<"=====After deposit====="<<endl;
    Central.deposit(224001,500);
    Central.display();
    
    cout<<"======After withdraw====="<<endl;
    Central.withdraw(224001,1200);
    Central.display();
    return 0;
}