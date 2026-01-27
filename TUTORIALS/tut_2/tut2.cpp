#include <iostream>
using namespace std;
int main(){
    /*Topics: Dynamic Memory allocation in C++, Pointer Airthmetic in C++
Q1) which of the following is true about new when compared with malloc. done
1) new is an operator, malloc is a function
2) new calls constructor, malloc doesn't
3) new returns appropriate pointer, malloc returns void * and pointer needs to typecast to
appropriate type.
a) 1 &2
b) 1 & 3
c) 2 & 3
d) All 1, 2 & 3
im sure for option d */
/* Q2) Write a C++ program to perform Insertion and deletion operation in array by creating array of
marks of students in a class using dynamic memory allocation (new and delete operator). */

/*Q3) What will be the output of the following program? done
#include <iostream>
using namespace std;
int main()
{
int a = 32, *ptr = &a; //we declared variable a and pointer ptr pointing towards a
char ch = 'A', &cho = ch; //now we declared another variable ch and its reference cho 
a reference variable has same memory address as main variable(deep copy).
cho += a;  //cho=65+32=97 which is acsii value of 'a'
//value of ch is 'a'
*ptr += ch; //32+97=129 (ascii value of a is 97)
//value of variable a is 129 now
cout << a << ", " << ch << endl;
// output 129,a //value of ch is same as initially declared
return 0;
}*/
/*
Q4) What will be the output of the following program? Is there any bad memory reference in this program? done
#include <iostream>
using namespace std;
int main()
{ 
int a = 32, *ptr = &a; //we declared variable a and pointer ptr pointing towards a
char ch = 'A', *cho = &ch; //now we declared another variable ch and its pointer cho
cho += a;//pointer moves 32 bytes forward, and now points to a garbage value
//hence yes this is a bad memory reference
*ptr += ch; //32+65=97 (ascii value of a is 97 and A is 97)
// value of a is 97 now.
cout << a << ", " << ch << endl;//output: 97,A //value of ch remains the same as declared initially
return 0;
}
*//*
Q5) What will be the output of the following program? done
#include <iostream>
using namespace std;
int main()
{
int num[5];
int* p;
p = num; //pointer p points at first element of num
*p = 10; //num[0]=10
p++;//moves to 2nd element
*p = 20;//num[1]=20
p = &num[2];//p moves to 3rd element
*p = 30;//num[2]=30
p = num + 3;//pointer goes to num[3]
*p = 40;//num[3]=40
p = num;//pointer p back to num[0]
*(p + 4) = 50;//p moves to num[4] = 50
for (int i = 0; i < 5; i++) //loop iterates for i=0 to i=4 (not 5) and shows the array elements
cout << num[i] << ", ";
return 0;
} //final output: 10,20,30,40,50 */

/* Q6) Predict the output of the following program: done
#include<iostream>
using namespace std;
int main() {
// Initial value of var.
int var = 10;
cout << "Address of var" << &var << endl; //gives address of var (hex value)
cout << "Value of var" << var << endl; //10
int *memory = new (&var) int (100); //NOT dynamic memory allocated
// we made a new pointer memory which has POINTS TO address of var variable(doesnt store)
// also var BECOMES 100
cout << "After placement new - \n";
cout << "Address of var" << &var << endl;
cout << "Value of var" << var << endl;
cout << "Address of mem" << memory << endl;
return 0;
}
output: Address of var1ef3001
Value of var10
After placement new - 
Address of var1ef3001
Value of var100
Address of mem1ef3001
*/
    return 0;
}