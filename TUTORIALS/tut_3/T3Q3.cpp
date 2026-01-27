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
public:
    Book(){//Constructor!
        int NUM,NC,NCI;
        string NAME, AUTH, PUBL;
        float PR;
        cout<<"Enter Book Number:"; cin>>NUM;
        this->book_number=NUM;
        cout<<"Enter Book Name:"; 
        cin.ignore();//only call before first getlline
        getline(cin,NAME);
        this->book_name=NAME;
        cout<<"Enter Author:"; 
        getline(cin,AUTH);
        this->author=AUTH;
        cout<<"Enter Publisher:"; 
        getline(cin,PUBL);
        this->publisher=PUBL;
        cout<<"Enter Price:"; cin>>PR;
        this->price=PR;
        cout<<"Enter No. of copies issued:"; cin>>NCI;
        this->Num_copies_issued=NCI;
        cout<<"Enter No.of copies:"; cin>>NC;
        this->Num_copies=NC;
}
    void DISPLAY();
    void ISSUE();
    void RETURN();
};
void Book::DISPLAY(){
    cout<<"Book Number:"<<book_number<<endl;
    cout<<"Book Name:"<<book_name<<endl;
    cout<<"Author:"<<author<<endl;
    cout<<"Publisher:"<<publisher<<endl;
    cout<<"Price:"<<price<<endl;
    cout<<"No. of copies issued:"<<Num_copies_issued<<endl;
    cout<<"No.of copies:"<<Num_copies<<endl;
}
void Book::ISSUE(){
    if(Num_copies>0){
        Num_copies_issued++;
        cout<<"Book issue successful"<<endl;
    } else {
        cout<<"Book not available"<<endl;
    }
}
void Book::RETURN(){
    if(Num_copies_issued>0){
        Num_copies_issued--;
        cout<<"Book return successful"<<endl;
    } else {
        cout<<"Book return failed"<<endl;
}}
int main(){
    Book B1;
    B1.ISSUE();
    cout<<"==========After issuing==========="<<endl;
    B1.DISPLAY();
    B1.RETURN();
    cout<<"=========After returning==========="<<endl;
    B1.DISPLAY();
    return 0;
}