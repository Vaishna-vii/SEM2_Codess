//Assignment 2
/*6. Create a class named First with a data member string studentName and a member
function printName(). The program should create an object of the class and print the
student’s name using the member function.*/
 #include <iostream>
 using namespace std;
 class First{
   string studentName;
   public:
   void printName(string s){
      studentName=s;
      cout<<"Student name: "<<studentName;
   }
 };
 int main (){
   First PersonA;
   PersonA.printName("Purvit");
    return 0;
 }