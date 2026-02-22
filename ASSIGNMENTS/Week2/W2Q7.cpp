//Assignment 2
/*7. Write a C++ program to compute the area of a rectangle. Create a class named Area with
two member functions:
a. setDim() – to accept the length and breadth of the rectangle
b. getArea() – to return the area of the rectangle
Use a main() function to test the class.*/
 #include <iostream>
 using namespace std;
 class Area{
   int length,breadth;
   public:
   void setDim(int l,int b){
      length=l;
      breadth=b;
   }
   int getArea(){
      return length*breadth;
   }
 };
 int main (){
   Area ABCD;
   ABCD.setDim(20,30);
   cout<<ABCD.getArea();
    return 0;
 }