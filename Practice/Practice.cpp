#include<iostream>
using namespace std;
class Matrix{
int a[2][2];
public:
void input(){
for(int i=0;i<2;i++)
for(int j=0;j<2;j++){
cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
cin>>a[i][j];
}
}
bool operator==(const Matrix& m)const{
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
if(a[i][j]!=m.a[i][j])
return false;
return true;
}
};
int main(){
Matrix m1,m2;
m1.input();
m2.input();
if(m1==m2)
cout<<"Matrices are equal";
else
cout<<"Matrices are not equal";
return 0;
}

