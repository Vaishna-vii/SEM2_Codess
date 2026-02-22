/*
2. Create a class Product with private members price and quantity.
Create a friend function calculateTotal() that calculates total cost of two products.
Create a friend class Billing that applies tax and discount.
*/
#include <iostream>
using namespace std;
class Product;
class Billing{
    float discount=0.1,tax=0.05;
public:
    float Bill(const Product& a);
};
class Product{
    int quantity;
    float price;
public:
    void setter(){
        cout<<"Enter details of Product:";
        cin>>price>>quantity;
        cout<<endl;
    }
    friend class Billing;:Bill(const Product& a);
    friend float calculateTotal(const Product& a,const Product& b);
};
float Billing::Bill(const Product& a){
    float total= a.price*a.quantity;
    total+=total*tax; //apply 5% tax
    total-=total*discount; //apply 10% discount
    return total;
}
float calculateTotal(const Product& a,const Product& b){
    Billing b1;
    return b1.Bill(a)+b1.Bill(b);
}
int main(){
    Product p1,p2;
    Billing B1;
    p1.setter();
    p2.setter();
    cout<<"Product 1 bill:"<<B1.Bill(p1)<<"\nProduct 2 bill:"<<B1.Bill(p2)<<endl;
    cout<<"Total Bill:"<<calculateTotal(p1,p2)<<endl;
    return 0;
}
