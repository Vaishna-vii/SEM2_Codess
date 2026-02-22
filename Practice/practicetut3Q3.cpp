#include<iostream>
#include<cstring>
using namespace std;
class Book{
    string BookName,Author,Publisher;
    int BookNumber,IssuedCopies,Copies;
    float Price;
public:
    Book(string name,string auth,string pub,int num,float rate,int issue,int total):
        BookName(name),BookNumber(num),Author(auth),Publisher(pub),Price(rate),IssuedCopies(issue),Copies(total){}
    void Issue(){
        if(Copies-IssuedCopies>0){
            cout<<"Book issue successful"<<endl;
            IssuedCopies++;
        } else cout<<"Book out of stock"<<endl;
    }
    void Return(){
        if(IssuedCopies>0&&Copies!=0){
            cout<<"Book return successful"<<endl;
            IssuedCopies--;
        }else cout<<"Invalid return"<<endl;
    }
    void show(){
        cout<<"Book Information:"<<endl;
        cout<<BookNumber<<"\t"<<BookName<<"\t"<<Price<<"\n"<<Author<<"\t"<<Publisher<<"\t"<<IssuedCopies<<" "<<Copies<<endl;
    }
};
int main(){
    Book A("Ikigai","Henry Helm","Scholastic",3435,39.99,25,35);
    Book B("Star Fall","Joseph John","Scholastic",3656,32.99,20,45);
    A.Issue();
    A.show();
    B.Return();
    B.show();
    return 0;
}
