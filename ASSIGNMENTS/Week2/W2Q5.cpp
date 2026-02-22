//Assignment 2
/*5. Define a class to represent a vector (a list of float values). Include member functions to
perform the following tasks:
a. To create/initialize the vector
b. To modify elements by adding a scalar value
c. To multiply all elements by a scalar value
d. To display the vector in the form: (10, 20, 30, ...)*/
 #include <iostream>
 using namespace std;
 class Vector{
   float list[6];
   public:
   Vector(){
      for(int j=0;j<6;j++){
         list[j]=1.4+j;
      }
   }
   void ModifyMultiply(float x=1){
   cout<<"Multiply by "<<x<<":\t";
      for(int i=0;i<6;i++){
         list[i]*=x;
      }
   }
   void ModifyAdd(float x=1){
   cout<<"Add "<<x<<":\t";
      for(int i=0;i<6;i++){
         list[i]+=x;
      }
   }
   void display(){
      for(int i=0;i<6;i++){
         cout<<list[i]<<"  ";
      } cout<<endl;
   }
 };
 int main (){
   Vector A1;
   A1.display();
   A1.ModifyAdd();
   A1.display();
   A1.ModifyMultiply(2);
   A1.display();
    return 0;
 }