#include <iostream>
#include <cmath>
using namespace std;
int isVowel(char c);
int main() {
/*1. Write a C++ program to read a number and display whether it is an even or an 
odd number. */
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    if(a%2==0) cout<<"Even number"<<endl;
    else cout<<"Odd number"<<endl;
/*2. Write a C++ program to input three numbers from the user and find the largest 
among them. Display the largest number as output. */
    int b,c,d,max;
    cout<<"Enter 3 numbers:";
    cin>>b>>c>>d;
    if(b>=c && b>=d) max = b;
    else if(c>=d && c>=b) max = c;
    else if(d>=c && d>=b) max = d;
    cout<<"Maximum number is "<<max<<endl;
/*3. Write a C++ program to calculate the simple interest. 
The program should take the principal amount, rate of interest, and time as 
input and display the calculated simple interest. */
    float principal,rate,time,simpleInterest;
    cout<<"Enter the principal amount:";
    cin>>principal;
    cout<<"Enter the rate of interest:";
    cin>>rate;
    cout<<"Enter the time:";
    cin>>time;
    simpleInterest=principal*rate*time/100;
    cout<<"The simple interest is "<<simpleInterest<<endl;
/*4. Write a C++ program to read two numbers x and y. 
Also, display the quotient and remainder on dividing x by y. */
    int x,y;
    cout<<"Enter values of x and y:";
    cin>>x>>y;
    if (y == 0) {
        cout<<"Division by zero not allowed"<<endl;
    } else {
        cout<<"On dividing "<<x<<" by "<<y<<", the quotient is "<<x/y
    <<" and remainder is "<<x%y<<endl;
    }
/*5. Write a C++ program to read a 3-digit number and reverse it. */
    int number, reversedNumber=0;
    cout<<"Enter a 3-digit number:";
    cin>>number;
    if(number<1000 && number>99){
        while(number!=0){
            reversedNumber*=10;
            reversedNumber+=(number%10);
            number/=10;
        }
        cout<<"Reversed number is "<<reversedNumber<<endl;
    } else cout<<"Not a 3 digit Number!"<<endl;
/*6. Write a C++ program to display the truth table of AND, OR, and NOT operators. */
    int X,Y;
    cout<<"Truth table of AND:"<<endl;
    cout<<"X Y X&Y"<<endl;
    for(X=0;X<=1;X++){
        for(Y=0;Y<=1;Y++){
            cout<<X<<" "<<Y<<"  "<<(X&Y)<<endl;
        }
    }
    cout<<"Truth table of OR:"<<endl;
    cout<<"X Y X|Y"<<endl;
    for(X=0;X<=1;X++){
        for(Y=0;Y<=1;Y++){
            cout<<X<<" "<<Y<<"  "<<(X|Y)<<endl;
        }
    }
    cout<<"Truth table of NOT:"<<endl;
    cout<<"X -X"<<endl;
    for(X=0;X<=1;X++){
            cout<<X<<"  "<<(!X)<<endl;
        }
/*7. Write a C++ program to find the roots of a given quadratic expression. */
    int A,B,C;
    float D,root1,root2;
    cout<<"Ax^2+Bx+C=0"<<endl<<"Enter the coefficients in order:";
    cin>>A>>B>>C;
    D= B*B - 4*A*C;
    if (A == 0) {
        cout << "Not a quadratic equation\n";
    } else {
    if(D>=0){
    root1= (-1*B - sqrt(D))/(2*A);
    root2= (-1*B + sqrt(D))/(2*A);
    cout<<"Roots are "<<root1<<" and "<<root2;
    } else cout<<"Imaginery roots";
    }
/*8. Write a C++ program to read a string and find the number of vowels in it. */
    string str1;
    getline(cin,str1);
    int count=0;
    int n1=str1.length();
    for(int i=0;i<n1;i++){
        char c=str1.at(i);
        if(isVowel(c)){
            count++;
        }
    }
    cout<<"There are "<<count<<" vowels in "<<str1<<endl;
/*9. Write a C++ program to remove vowels from a given string.*/
    string str2,str3;
    cout<<"Enter a String:";
    getline(cin,str2);
    int n2=str2.length();
    for(int i=0;i<n2;i++){
        char c=str2.at(i);
        if(isVowel(c)){
            continue;
        } else str3+=c;
    }
    cout<<"Original:"<<str2<<endl;
    cout<<"Without vowel:"<<str3<<endl;
    return 0;
}
int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return 1;
    } else return 0;
}