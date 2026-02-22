//Assignment 2
/*Classes and Objects---------------
4. Define a class to represent a bank account. The class should include the following:
a. Data Members (Appropriate details such as account holder name, account number,
and balance.)
b. Member Functions
i. A function to assign initial values
ii. A function to deposit an amount
iii. A function to withdraw an amount after checking sufficient balance
iv. A function to display the account holder’s name and balance
c. Write a main() function to test the class.*/
 #include <iostream>
 using namespace std;
 class bankAccount{
   char holderName[50];
   int accNumber,balance;
   public:
   bankAccount(const char c[50],int acc,int bal){
      accNumber=acc;
      balance=bal;
      for(int i=0;c[i]!='\0';i++){
      holderName[i]=c[i];
      }
   }
      void deposit(int amount,int acc){
         if(acc==accNumber){
            balance+=amount;
               cout<<"--------Deposit successful------"<<endl;
            } else cout<<"-------Deposit Failed-----"<<endl;
         }
      void withdraw(int amount,int acc){
         if(acc==accNumber){
            if(balance>=1000){
               balance-=amount;
               cout<<"-----Withdraw successful------"<<endl;
            } else cout<<"------Withdraw Failed-------"<<endl;
         }
      }
      void display(int acc){
         if(acc==accNumber){
         cout<<"Holder Name:";
         for(int i=0;holderName[i]!='\0';i++){
            cout<<holderName[i];
         }
         cout<<"\nBalance:"<<balance<<endl;
      }}
 };
 int main (){
   bankAccount PersonA("Shalini",2390,1220);
   PersonA.display(2390);
   PersonA.deposit(2000,2390);
   PersonA.display(2390);
   PersonA.withdraw(1000,2390);
   PersonA.display(2390);
    return 0;
 }