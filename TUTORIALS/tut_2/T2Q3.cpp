#include <iostream>
using namespace std;
int main()
{
int a = 32, *ptr = &a; //we declared variable a and pointer ptr pointing towards a
char ch = 'A', &cho = ch; //now we declared another variable ch and cho is??
cho += a;  //??
*ptr += ch; //ch='a'=97; 32+97=129 (ascii value of a is 97)
// value of a is 129 now.
cout << a << ", " << ch << endl;// gives output 129,A //value of ch is same as initially declared
return 0;
}
