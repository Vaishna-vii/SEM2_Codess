/*Ques1. Create a class called 'Matrix' containing constructor that initializes the number of rows and the number of columns of a new Matrix object.

The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)

The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices
5 - multiplying the two matrices

You can assume that the dimensions are correct for the multiplication and addition.

Ques2.

Ques3. What will be the output of following program? Explain with reasons:

Ques4. Explain the role of a default constructor? When is it considered equivalent to a parameterized constructor? Support your answer with examples.

Ques5. What will be the output of the following C++ code?

#include <iostream>
#include <string>
using namespace std;
class A{
mutable int a;
public:
A(){
cout<<"A's default constructor called\n";
}
A(const A& a){
cout<<"A's copy Constructor called\n";
}
};
class B{
A obj;
public:
B(){
cout<<"B's Constructor called\n";
}
};
int main(int argc, char const *argv[])
{
B b1;
B b2;
}

Ques6. What will be the output of the following C++ code?

#include <iostream> 
using namespace std;
class A{
public:
int a;
A(int a=0){
this->a = a;
}
};
int main()
{
A a1, a2(10);
cout<<a1.a<<a2.a;
return 0;
}

Ques7. What is the difference between constructors and destructors?

a) They have a different function name
b) Constructors does not have return type whereas destructors do have
c) Constructors allow function parameters whereas destructors do not
d) Constructors does not function parameters*/