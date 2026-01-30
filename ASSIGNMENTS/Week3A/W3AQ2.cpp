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
using namespace std;
class Pass{
    int PassNumber,ValidityDays;
    string CommuterName, PassType;
    public:
    Pass(int PN, string CN, string PT,int VD){
        PassNumber=PN;
        CommuterName=CN;
        ValidityDays=VD;
        PassType=PT;
    }
    Pass(string PT= "Monthly",string CN,int VD){
        CommuterName=CN;
        ValidityDays=VD;
        PassType=PT;
    }
    Pass(int PN = 1,string CN = "Unknown",string PT = "Monthly",int VD = 30){
        PassNumber=PN;
        CommuterName=CN;
        ValidityDays=VD;
        PassType=PT;
    }
    void getter(){
    }
    void setter(){
    }
};
int main() {
    Pass P1();
    Pass P2;
    return 0;
}
