#include <iostream>
using namespace std;
int main(){
    /*Topics: Dynamic Memory allocation in C++, Pointer Airthmetic in C++
Q1) which of the following is true about new when compared with malloc.
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
marks of students in a class using dynamic memory allocation (new and delete operator). //will do rn*/

/*Q3) What will be the output of the following program?
#include <iostream>
using namespace std;
int main()
{
int a = 32, *ptr = &a; //we declared variable a and pointer ptr pointing towards a
char ch = 'A', &cho = ch; //now we declared another variable ch and what is cho??
cho += a;  //??
*ptr += ch; //32+97=129 (ascii value of a is 97)
// value of a is 129 now.
cout << a << ", " << ch << endl;// output 129,A //value of ch is same as initially declared
return 0;
}*/
/*
Q4) What will be the output of the following program? Is there any bad memory reference in this program?
#include <iostream>
using namespace std;
int main()
{ 
int a = 32, *ptr = &a; //we declared variable a and pointer ptr pointing towards a
char ch = 'A', *cho = &ch; //now we declared another variable ch and its pointer cho
cho += a;//pointer moves 32 bytes forward, and now points to a garbage value
//hence yes this is a bad memory reference
*ptr += ch; //32+97=129 (ascii value of a is 97)
// value of a is 129 now.
cout << a << ", " << ch << endl;//output: 129,A //value of ch remains the same as declared initially
return 0;
}
*//*
Q5) What will be the output of the following program?
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
for (int i = 0; i < 5; i++) //loop iterates for i=0 to i=5 and shows the array elements
cout << num[i] << ", ";
return 0;
} //final output: 10,20,30,40,50 */
/* Q6) Predict the output of the following program:
#include<iostream>
using namespace std;
int main() {
// Initial value of var.
int var = 10;
cout << "Address of var" << &var << endl; //gives address of var
cout << "Value of var" << var << endl; //10
int *memory = new (&var) int (100); //dynamic memory allocated........idk
cout << "After placement new - \n";
cout << "Address of var" << &var << endl;
cout << "Value of var" << var << endl;
cout << "Address of mem" << memory << endl;
return 0;
}*/
    return 0;
}