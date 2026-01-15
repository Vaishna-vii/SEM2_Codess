#include <iostream>
using namespace std;
int isVowel(char c);
int main(){
    string str2,str3;
    cout<<"Enter a String:";
    getline(cin,str2);
    int n=str2.length();
    for(int i=0;i<n;i++){
        char c=str2.at(i);
        if(isVowel(c)){
            continue;
        } else {
            str3+=c;
        }
    }
    cout<<"Original:"<<str2<<endl;
    cout<<"Without vowel:"<<str3<<endl;
    return 0;
}
int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return 1;
    } else return 0;
}