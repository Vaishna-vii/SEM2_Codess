//Assignment 1
#include <iostream>
using namespace std;
struct laptop{
    string brand;
    float price;
    int RAM;
};
int main(){
    laptop lap;
    laptop *ptr=&lap;
    cout << "Enter Laptop Brand: ";
    getline(cin, ptr->brand);
    cout << "Enter RAM: ";
    cin >> ptr->RAM;
    cout << "Enter Price: ";
    cin >> ptr->price;
    ptr->RAM += 4;         
    ptr->price += 5000;  
    cout << "\nUpdated Laptop Details\n";
    cout << "Brand: " << ptr->brand << endl;
    cout << "RAM: " << ptr->RAM << " GB" << endl;
    cout << "Price: " << ptr->price << endl;
    
    return 0;
}
