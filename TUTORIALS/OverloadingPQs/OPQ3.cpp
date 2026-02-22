/*Problem 3: Overload the [] operator for
a class called Array to access elements by index.*/
#include<iostream>
using namespace std;
class Array{
    int numSize;
    int* elements;
public:
    Array(int s=5){
        numSize=s;
        elements= new int[numSize];
    for(int i=0;i<numSize;i++){
    elements[i]=i+1;
    }}
    int& operator[](int i){
        if(i<0||i>numSize){
            cout<<"Out of bounds element!"<<endl;
            exit(1);
        }
        return elements[i];
    }
    void display()const {
    for(int i=0;i<numSize;i++){
            cout<<elements[i]<<"\t";
    }
    cout<<endl;
    }
    ~Array(){
        delete[] elements;
    }
};

int main(){
    Array arr(4);
    arr.display();
    cout<<"After Modifying:"<<endl;
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr.display();
    return 0;
}
