#include<cstring>
#include <iostream>
using namespace std;
class Bank{
    string HolderName;
    int AccNumber;
    char Type;
    float Balance;
public:
    void deposit(float a){
        Balance+=a;
        cout<<"Deposit Successful"<<endl;
    }
    void withdraw(float a){
        if(Balance>1000){
            Balance-=a;
            cout<<"Withdraw Successful"<<endl;
        }else cout<<"Withdraw Failed"<<endl;
    }
    void display(){
        cout<<HolderName<<"\t"<<AccNumber<<"\t"<<Type<<"\t"<<Balance<<endl;
    }
    void setter(){
        cin>>HolderName;
        //getline(cin,HolderName);
        cin>>AccNumber>>Type>>Balance;
    }
};
int main(){
    Bank* customer = new Bank[10];
    //cout<<"S.No\tName\tAccount\tType\tBalance"<<endl;
    for(int i=0;i<2;i++){
        cout<<i+1<<"\t";
        customer[i].setter();
        customer[i].display();
        customer[i].deposit(100);
        customer[i].withdraw(120);
        customer[i].display();
    }
    delete[] customer;
    return 0;
}
