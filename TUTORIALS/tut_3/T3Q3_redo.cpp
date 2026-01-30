/*
Q3. Define a class to represent a book in a library. Include the following members-
Data Members: Book Number, Book Name, Author, Publisher, Price, No. of copies issued, No.of copies
Member Functions:
(i) To assign initial values
(ii) To issue a book after checking for its availability
(iii) To return a book
(iv) To display book information.*/
#include <iostream>
#include <string>
using namespace std;
class Book{
int book_number;
string book_name;
string author;
string publisher;
float price;
int Num_copies_issued,Num_copies;
// this-> to be used when local variable has same number as class data member!!
public:
    //Constructor not needed!
    void setter(int bno, string bname, string au,string pub,float price, int NCI, int TC);
    void display();
    void issue();
    void Return();
};
void Book::setter(int bno, string bname, string au,string pub,float price, int NCI, int TC){
    book_number=bno;
    book_name=bname;
    author=au;
    publisher=pub;
    this->price=price;
    Num_copies_issued=NCI;
    Num_copies=TC;
}
void Book::display(){
    cout<<"Book Number:"<<book_number<<endl;
    cout<<"Book Name:"<<book_name<<endl;
    cout<<"Author:"<<author<<endl;
    cout<<"Publisher:"<<publisher<<endl;
    cout<<"Price:"<<price<<endl;
    cout<<"No. of copies issued:"<<Num_copies_issued<<endl;
    cout<<"No.of copies:"<<Num_copies<<endl;
}
void Book::issue(){
    int available=Num_copies-Num_copies_issued;
    if(available>0){
        Num_copies_issued++;
        cout<<"Book issue successful"<<endl;
    } else {
        cout<<"Book not available"<<endl;
    }
}
void Book::Return(){
    if(Num_copies_issued>0){//checking whether issued or not in the first place
        Num_copies_issued--;
        cout<<"Book return successful"<<endl;
    } else {
        cout<<"Book return failed"<<endl;
}}
int main(){
    Book B1;
    B1.setter(2230,"Ikigai","Hary Henson","Scholastic",29.99,20,30);
    B1.issue();
    cout<<"==========After issuing==========="<<endl;
    B1.display();
    B1.Return();
    cout<<"=========After returning==========="<<endl;
    B1.display();
    return 0;
}

//9/10