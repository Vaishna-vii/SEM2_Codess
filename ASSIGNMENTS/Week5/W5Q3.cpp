/*Q3) Design a Book class that stores the ISBN number, title, price, and an availability status
indicating whether the book is currently in the store.
 Overload the equality operator (==) to check whether two books have the same ISBN
number.
 Overload the less-than operator (<) to compare books based on price.
 Overload the logical NOT operator (!) to check whether a book is not available in the
store.
 Write a main() function that:
o stores multiple books,
o prevents duplicate ISBN entries, and
o displays whether each book is available or not available using the overloaded !
operator.*/
#include<iostream>
#include<string>
using namespace std;
class Book{
    long ISBN;
    float price;
    bool availability;
    string title;
public:
    void getter(){
    cout<<"Title "<<title<<endl;
    cout<<"ISBN "<<ISBN<<endl;
    cout<<"Price "<<price<<endl;
    cout<<"Availability "; availability?cout<<"yes":cout<<"no"; cout<<endl;
    }
    Book(int a, float b, string s,bool v){
    ISBN=a; title=s; availability=v; price=b;
    }
    Book(){ //default for making array of objects initialise one by one
    ISBN=00; title=""; availability=0; price=0;
    }
    bool operator==(const Book& b)const{
    if(ISBN==b.ISBN) return 1;
    else return 0;
    }
    bool operator<(const Book& c)const{
    if(price<c.price) return 1;
    else return 0;
    }
    bool operator!()const{
    if(availability==0) return 1;
    else return 0;
    }
};
int main(){
    //Book b[10]={};
    Book b1(2324,45.99,"Ikigai",1);
    Book b2(2325,58.99,"Rich Dad Poor Dad",0);
    Book b3(2324,30.99,"It ends with us",1);
    cout<<" b1 and b2 have ";
    b1==b2?cout<<"same":cout<<"different"; cout<<" ISBN"<<endl;
    cout<<" b1 and b3 have ";
    b1==b3?cout<<"same":cout<<"different"; cout<<" ISBN"<<endl;
    !b1?cout<<" b1 not available":cout<<" b1 available"; cout<<endl;
    !b2?cout<<" b2 not available":cout<<" b2 available"; cout<<endl;
    !b3?cout<<" b3 not available":cout<<" b3 available"; cout<<endl;
    cout<<"\tb1 details:\n"; b1.getter();
    cout<<"\tb2 details:\n"; b2.getter();
    cout<<"\tb3 details:\n"; b3.getter();
    return 0;
}
