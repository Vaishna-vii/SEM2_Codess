#include <iostream>
using namespace std;
int main(){
/*6. Write a C++ program to display the truth table of AND, OR, and NOT operators. */
    int X,Y;
    cout<<"Truth table of AND:"<<endl;
    cout<<"X Y X&Y"<<endl;
    for(X=0;X<=1;X++){
        for(Y=0;Y<=1;Y++){
            cout<<X<<" "<<Y<<"  "<<(X&Y)<<endl;
        }
    }
    cout<<"Truth table of OR:"<<endl;
    cout<<"X Y X|Y"<<endl;
    for(X=0;X<=1;X++){
        for(Y=0;Y<=1;Y++){
            cout<<X<<" "<<Y<<"  "<<(X|Y)<<endl;
        }
    }
    cout<<"Truth table of NOT:"<<endl;
    cout<<"X -X"<<endl;
    for(X=0;X<=1;X++){
            cout<<X<<"  "<<(!X)<<endl;
        }
    return 0;
}