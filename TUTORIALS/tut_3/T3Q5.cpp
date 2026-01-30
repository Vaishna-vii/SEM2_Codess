
/*
Q5. Consider the following class declaration and answer the questions below:
class SmallObj
{
private:
int some, more; //PRIVATE DATA MEMBERS
void err_1() //PRIVATE MEMBER FUNCTION
{cout<<"error";}
public:
void Xdata(int d)//PUBLIC MEMBER FUNCTION
{some=d;
more=d++; }
void Ydata()//PUBLIC MEMBER FUNCTION
{cout<<some<<" "<<more; }
};
(i) Write the name that specifies the above class......SmallObj
(ii) Write the data of the class with their access scope.....some & more are PRIVATE data members
(iii) Write all member functions of the class along with their access
scope......Xdata, Ydata are public while err_1 is private
(iv) Indicate the member function of the SmallObj that sets data......Xdata sets the data
*/