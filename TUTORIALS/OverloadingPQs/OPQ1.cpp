/*Problem 1:Create a class called Matrix to represent a 2x2 matrix.
 Overload the == operator to compare two matrices for equality.*/
 #include<iostream>
 using namespace std;
 class Matrix{
     int arr[2][2];
 public:
    Matrix(){
    arr[0][0]=0;
    arr[1][0]=0;
    arr[0][1]=0;
    arr[1][1]=0;
    }
    Matrix(int a,int b,int c,int d){
    arr[0][0]=a;
    arr[1][0]=b;
    arr[0][1]=c;
    arr[1][1]=d;
    }
    bool operator==(const Matrix &other)const{
        return
    arr[0][0]==other.arr[0][0]&&arr[1][0]==other.arr[1][0]&&
    arr[0][1]==other.arr[0][1]&&arr[1][1]==other.arr[1][1];
    }
    void display(){
        for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                cout<<arr[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
 };
 int main(){
     Matrix M1(2,4,6,8);
     Matrix M2(2,4,6,8);
     M1.display();
     M2.display();
     if(M1==M2){
        cout<<"Matrices are equal"<<endl;
     }else  cout<<"Matrices are not equal"<<endl;
    return 0;
 }
