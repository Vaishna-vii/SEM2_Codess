/*5. Create a domain model for online shopping. The purpose of the diagram is to introduce
some common terms, "dictionary" for online shopping - Customer, Web User,
Account, Shopping Cart, Product, Order, Payment, etc. and relationships between. It
could be used as a common ground between business analysts and software developers.*/
#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    string name;
};

class LineItem {
public:
    Product* product;
};

class Order {
public:
    vector<LineItem> items;
};

class ShoppingCart {
public:
    vector<LineItem> items;
};

class Account {
public:
    ShoppingCart cart;
    vector<Order> orders;
};

class Customer {
public:
    int id;
    Account account;
};
