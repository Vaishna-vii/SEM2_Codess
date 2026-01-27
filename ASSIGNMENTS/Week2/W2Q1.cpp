//Assignment 2
 #include <iostream>
 using namespace std;
 int main (){
/*Dynamic Memory Allocation & Pointer Arithmetic-----------
1. Assume there are three integer elements in the array A= {10,100,200} that are stored at
addresses 0xbfa088b0, 0xbfa088b4, 0xbfa088b8
Note: The address can vary from system to system.
WAP in C++ to perform following operations using pointer arithmetic.
(i) Increment a Pointer (++)
Sample output after incrementing pointer: Address of var[0] = 0xbfa088b0
Value of var[0] = 10
Address of var[1] = 0xbfa088b4 Value of var[1] = 100
Address of var[2] = 0xbfa088b8 Value of var[2] = 200
(ii) Decrement a Pointer (--)
Sample output after decrementing pointer: Address of var[3] = 0xbfdb70f8
Value of var[3] = 200
Address of var[2] = 0xbfdb70f4 Value of var[2] = 100
Address of var[1] = 0xbfdb70f0 Value of var[1] = 10*/
int i;
int A[3]={10,100,200};
int *ptr=A;//starts at A[0]
cout<<"incrementing pointer:"<<endl;
for(i=0;i<3;i++){
cout<<"Address of var["<<i<<"] = "<<ptr<<endl;
cout<<"Value of var["<<i<<"] = "<<*ptr<<endl;
ptr++;
}
ptr--;//starts at A[2] now
cout<<"decrementing pointer:"<<endl;
for(i=0;i<3;i++){
cout<<"Address of var["<<(2-i)<<"] = "<<ptr<<endl;
cout<<"Value of var["<<(2-i)<<"] = "<<*ptr<<endl;
ptr--;
}
    return 0;
 }