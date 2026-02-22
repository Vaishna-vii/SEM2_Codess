#include <iostream>
using namespace std;
void insertion(int*& A, int n,int pos, int a);
void deletion(int*& A, int n,int pos);
int main(){
    int n;
    cout<<"Enter number of students ";
    cin>>n;
    int* arr = new int[n+1];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    insertion(arr,n,5,30);
    deletion(arr,n,2);
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" is "<<arr[i];
        cout<<endl;
    }
    delete [] arr;
    return 0;
}
void insertion(int*& A, int n,int pos, int a){
    n++;
    if (pos < 0 || pos > n) {
        cout << "Invalid position for insertion!\n";
        return;
    }
    for(int i=n;i>pos;i--){
    A[i]=A[i-1];
} A[pos]=a;
}
void deletion(int*& A, int n,int pos){
    if (pos < 0 || pos > n) {
        cout << "Invalid position for deletion!\n";
        return;
    }
    A[pos]=0;
    for(int i=pos;i<n;i++){  
    A[i]=A[i+1];
}n--;
}