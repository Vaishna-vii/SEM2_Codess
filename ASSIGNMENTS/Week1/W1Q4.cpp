//Assignment 1
#include <iostream>
using namespace std;
struct book{
    int bookID;
    string title;
    float price;
};
int main(){
    int n,i,j;
    cout<<"Enter number of books:";
    cin>>n;
    book b[n];
    for(i=0;i<n;i++){
        cout<<"Enter Book "<<(i+1)<<" details\n Enter book ID:"<<endl;
        cin>>b[i].bookID;
        cout<<"Enter book title:"<<endl;
        cin.ignore();
        getline(cin, b[i].title);
        cout<<"Enter book price:"<<endl;
        cin>>b[i].price;
    }
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (b[j].price > b[j + 1].price) {
                book temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    
    cout << "\nBooks Sorted by Price (Ascending)"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Book ID: " << b[i].bookID<<endl;
        cout << "Title: " << b[i].title<<endl;
        cout << "Price: " << b[i].price<<endl;
    }
    


/*
4. Create a structure Book with members: bookId, title, price. Write a program to:
 Store details of n books
 Sort and display books based on price (ascending order)
*/
    return 0;
}