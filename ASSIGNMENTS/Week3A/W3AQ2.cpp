/* Q2) Write a C++ program to create a class Pass having private data members:
PassNumber, CommuterName, PassType, and ValidityDays.
The class should include the following constructors:
i. A constructor to initialize PassNumber, CommuterName, PassType, and ValidityDays.
ii. A constructor to initialize PassNumber, CommuterName, and ValidityDays (with PassType =
"Monthly" as the default).
iii. A constructor to initialize all data members with default values:
PassNumber = 1, CommuterName = "Unknown", PassType = "Monthly", ValidityDays = 30.
Also include:
 Getter and setter functions for each data member.
 In the main() function, create objects using all three constructors.
 Modify the validity days of any one object using a setter function.
 Display the updated validity along with the complete pass details on the console.*/
#include <iostream>
#include <string>
using namespace std;
class Pass{
    int PassNumber,ValidityDays;
    string CommuterName, PassType;
    public:
    Pass(){//default constructor initialise with default values
        // int PN = 1,string CN = "Unknown",string PT = "Monthly",int VD = 30
        PassNumber=1;
        CommuterName="Unknown";
        ValidityDays=30;
        PassType="Monthly";
    }
    Pass(int PN, string CN, string PT,int VD){//parameterised constructor
        PassNumber=PN;
        CommuterName=CN;
        ValidityDays=VD;
        PassType=PT;
    }
    Pass(int PN,string CN,int VD){//PassType predefined parameterised constructor
        CommuterName=CN;
        ValidityDays=VD;
        PassNumber=PN;
        PassType="Monthly";
    }
    void setPassNumber(int p){
        PassNumber=p;
    }
    void setCommuterName(string s){
        CommuterName=s;
    }
    void setValidityDays(int n){
        ValidityDays=n;
    }
    void setPassType(string s){
        PassType=s;
    }
    int getPassNumber(){ return PassNumber; }
    string getCommuterName(){ return CommuterName; }
    int getValidityDays(){ return ValidityDays; }
    string getPassType(){return PassType;}
    void displayALL(){
        cout<<"Pass Number: "<<getPassNumber()<<endl;
        cout<<"Commuter Name: "<<getCommuterName()<<endl;
        cout<<"Validity Days: "<<getValidityDays()<<endl;
        cout<<"Pass Type: "<<getPassType()<<endl;
    }
};
int main() {
    Pass P1;
    Pass P2(2,"Purvit","Monthly",60);
    Pass P3(3,"Raj",45);
    P1.displayALL();
    P2.displayALL();
    P3.displayALL();
    P2.setValidityDays(30);
    cout<<"Updated Validity in P2"<<endl;
    P2.displayALL();
    return 0;
}
//9/10