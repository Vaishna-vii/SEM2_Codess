/*Dynamic Memory Allocation & Pointer Arithmetic-----------
3. WAP to calculate the sum of n integers stored in an array. Ask user to enter the n integers
at run time.*/
 #include <iostream>
 using namespace std;
 int main (){
    int n,sum=0;
    cout<<"Enter Value of n:"<<endl;
    cin>>n;
    if(n<=0) return 0;
    int* ptr=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number "<<i+1<<" in array"<<endl;
        cin>>ptr[i];
        sum+=*(ptr + i);
    }
    cout<<"Sum of the elements is: "<<sum;
    delete[] ptr;
    return 0;
 }
 //9/10