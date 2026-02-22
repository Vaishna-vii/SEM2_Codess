//Assignment 2
/*Dynamic Memory Allocation & Pointer Arithmetic-----------
2. WAP in C++ to store CGPA of n number of students using dynamic memory allocation
where ‘n’ is the number of students entered by the user. Display the details of the
students.*/
 #include <iostream>
 using namespace std;
 int main (){
int n;
cout<<"Enter number of students: ";
cin>>n;
if(n<=0) return 0;
float *cgpa=new float[n];
for(int i=0;i<n;i++){
    cout<<"Enter CGPA of the student "<<i+1<<endl;
    cin>>cgpa[i];
}
for(int i=0;i<n;i++){
    cout<<"CGPA of student "<<i+1<<" is: "<<cgpa[i]<<endl;
}
delete[] cgpa;
    return 0;
 }
 //9/10