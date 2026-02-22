/*Problem 2: Create a class called StringWrapper that represents a simple string.
Overload the + operator to concatenate two StringWrapper objects,
the == operator to compare two StringWrapper objects for equality, and
the << operator to display the string. Additionally, implement a
member function reverse that reverses the characters of the string.*/
#include<iostream>
#include<cstring>
using namespace std;
class StringWrapper{
    char* str;
public:
    StringWrapper(const char*s="Hi"){ //constructor
        str =new char[strlen(s)+1];
        strcpy(str,s);
    }
    ~StringWrapper(){//destructor
        delete[] str;
    }
    StringWrapper(const StringWrapper& copyString){ //copy constructor
        str =new char[strlen(copyString.str)+1];
        strcpy(str,copyString.str);
    }
    bool operator==(const StringWrapper& other){ //== overloaded
        return strcmp(this->str,other.str);
    }
    StringWrapper operator <<(const StringWrapper& abcd){//<<overloaded
        cout<<abcd.str<<endl;
    }
    StringWrapper operator +(const StringWrapper& another){ //+ overloaded
        StringWrapper result;
        result.str=new char[strlen(this->str)+strlen(another.str)+1];
        result.str=strcat(str,another.str);
        return result;
    }
    void ReverseString(){
        int len=strlen(str);
        for(int i=0;i<len/2;i++){
            char temp=str[i];
            str[i]=str[len-i-1];
            str[len-i-1]=temp;
        }
    }
};
int main(){
    StringWrapper s1("Hakuna ");
    StringWrapper s2("Matata");
    StringWrapper s3=s1+s2;
    s2<<s3;s1<<s1;//error
    return 0;
}
