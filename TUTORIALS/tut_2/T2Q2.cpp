#include <iostream>
using namespace std;
/* Q2) Write a C++ program to perform Insertion and deletion operation in array by creating array of
marks of students in a class using dynamic memory allocation (new and delete operator). //will do rn*/
    class marks{
        public:
        int n;
        int *arr;
        marks(){ //default constructor
            cout<<"Enter number of students: ";
            cin>>n; 
            arr= new int[n];
        }
        marks(int num){ //parameterized constructor
            n=num;
            arr= new int[n];
        }
        //must have setter and getter(ie display) functions handy
        void set_elements(){
            cout<<"Enter the elements:";
            for(int i=0;i<n;i++){
            cin>>arr[i];}
        }
        void get_elements(){
            for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";}
            cout<<endl;
        }
        void insertion(int a,int pos);
        void deletion(int pos);
        ~marks(){
            delete[] arr;
        }
    };
    void marks::insertion(int a,int pos){
        for(int i=n-1;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=a;
    }
    void marks::deletion(int pos){
        for(int i=pos;i<(n-1);i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=0;
    }
int main(){
    marks M;
    M.set_elements();
    M.insertion(89,4);
    M.get_elements();
    M.deletion(5);
    M.get_elements();
    return 0;
}