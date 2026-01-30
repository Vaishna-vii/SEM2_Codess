/*5. Create a class String with two private data members: 
 char *s to store a string dynamically, and 
 int size to store the length of the string. 
Define the following: 
i. A parameterized constructor to initialize the string. 
ii. A copy constructor to perform deep copying. 
iii. A destructor to release dynamically allocated memory. 
iv. A member function to display the string. 
Demonstrate the working of each function using suitable objects. */
#include <iostream>
using namespace std;
class String{
    char *s;
    int size;
    public:
    String(const char *str){//Parameterised constructor
        size=0; //start from begining
        while(str[size] != '\0') size++;
        size++; 
        s = new char[size];
        for(int i=0;i<size;i++){
            s[i]=str[i];
        }
    }
    String(const String &sample){//copy constructor
        size=sample.size;
        s = new char[size];
        for(int i=0;i<size;i++){
            s[i]=sample.s[i];
        }
    }
    ~String(){
        delete[] s;
    }
    void display(){
        cout<<s<<endl;
    }
};
int main(){
    String s1("I made this string class");
    cout<<"s1 with parameterised constructor: ";
    s1.display();
    String s2(s1);
    cout<<"s2 with copy constructor: ";
    s2.display();
    return 0;
}
//9/10