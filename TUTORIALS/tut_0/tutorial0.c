#include <stdio.h> //Tutorial-0 
#include <string.h>
#include <math.h>
int isVowel(char c);
int main() {
/*1. Write a C program to read a number and display whether it is an even or an 
odd number. */
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0) printf("Even number\n");
    else printf("Odd number\n");
/*2. Write a C program to input three numbers from the user and find the largest 
among them. Display the largest number as output. */
    int b,c,d,max;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&b,&c,&d);
    if(b>=c && b>=d) max = b;
    else if(c>=d && c>=b) max = c;
    else if(d>=c && d>=b) max = d;
    printf("Maximum number is %d.\n",max);
/*3. Write a C program to calculate the simple interest. 
The program should take the principal amount, rate of interest, and time as 
input and display the calculated simple interest. */
    float principal,rate,time,simpleInterest;
    printf("Enter the principal amount:");
    scanf("%f",&principal);
    printf("Enter the rate of interest:");
    scanf("%f",&rate);
    printf("Enter the time:");
    scanf("%f",&time);
    simpleInterest=principal*rate*time/100;
    printf("The simple interest is %f\n",simpleInterest);
/*4. Write a C program to read two numbers x and y. 
Also, display the quotient and remainder on dividing x by y. */
    int x,y;
    printf("Enter values of x and y:");
    scanf("%d %d",&x,&y);
    if (y == 0) {
        printf("Division by zero not allowed\n");
    } else {
        printf("On dividing %d by %d, the quotient is %d and remainder is %d.\n",x,y,x/y,x%y);
    }
    /* 5. Write a C program to read a 3-digit number and reverse it. */
    int number, reversedNumber=0;
    printf("Enter a 3-digit number:");
    scanf("%d",&number);
    if(number<1000 && number>99){
        while(number!=0){
            reversedNumber*=10;
            reversedNumber+=(number%10);
            number/=10;
        }
        printf("Reversed number is %d\n",reversedNumber);
    } else printf("Not a 3-digit Number!\n");
/*6. Write a C program to display the truth table of AND, OR, and NOT operators. */
    int i,j;
    printf("Truth Table of AND:\n");
    printf("X Y X&Y\n");
    for(i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            printf("%d %d %d\n",i,j,(i&j));
        }
    }
    printf("Truth Table of OR:\n");
    printf("X Y X|Y\n");
    for(i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            printf("%d %d %d\n",i,j,(i|j));
        }
    }
    printf("Truth Table of NOT:\n");
    printf("X -X\n");
        for(j=0;j<=1;j++){
            printf("%d %d\n",j,(!j));
        }
/*7. Write a C program to find the roots of a given quadratic expression. */
    int A,B,C,D,root1,root2;
    printf("Ax^2+Bx+C=0\nEnter the coefficients in order:");
    scanf("%d %d %d",&A,&B,&C);
    D = (B*B - 4*A*C);
    if(A==0){
        printf("Not a Quadractic Equation");
    } else {
    if(D>=0){
    root1= (-1*B - sqrt(D))/(2*A);
    root2= (-1*B + sqrt(D))/(2*A);
    printf("Roots are %d and %d\n",root1,root2);
    } else printf("Imaginery roots\n");
    }
/*8. Write a C program to read a string and find the number of vowels in it. */
    char str1[50];
    printf("Enter a string:");
    scanf("%s",str1);
    int count1=0;
    int length1 =strlen(str1);
    for(int i=0;i<length1;i++){
        if(isVowel(str1[i])){
        count1++;
        } else continue;
    }
    printf("There are %d vowels in the string %s\n",count1,str1);
/*9. Write a C program to remove vowels from a given string.*/
    char str2[50],str3[50];
    printf("Enter a string:");
    scanf("%s",str2);
    char* p3;
    p3=&str3[0];
    int length2 =strlen(str2);
    for(int i=0;i<length2;i++){
        char c2=str2[i];
        if(isVowel(c2)){
            continue;
        } else{
            *p3=c2;
            p3++;
        }
    }
    *p3='\0';
    printf("New String:%s",str3);
    return 0; 
}
int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return 1;
    } else return 0;
}