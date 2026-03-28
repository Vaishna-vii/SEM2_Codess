/*Q5) Create a Distance class that represents a physical distance using kilometers and meters.
 Store the distance as two attributes: kilometers and meters.
 Overload the extraction operator (>>) to allow input of distance values in a user-friendly
format.
 Overload the insertion operator (<<) to display the distance in a readable and
standardized form.
 Ensure the distance is always normalized, such that 1000 meters are converted into 1
kilometer.
 Write a main() function to demonstrate reading and displaying multiple distance objects
using the overloaded stream operators.
Example:
Enter distance (km m): 3 1450
Distance: 4 km 450 m*/
#include<iostream>
using namespace std;
class Distance {
    int kilometers, meters;
public:
    void normalise(){
        if(meters>=1000){
            kilometers+=meters/1000;
            meters%=1000;
        }
    }
    friend istream& operator>>(istream &in,Distance &A){
        in>>A.kilometers>>A.meters;
        A.normalise();
        return in;
    }
    friend ostream& operator<<(ostream &out,Distance &B){
        out<<B.kilometers<<" km "<<B.meters<<" m"<<endl;
        return out;
    }
};
int main (){
    Distance D1,D2;
    cout<<"Enter Distance (km m): ";
    cin>>D1;
    cout<<"Given distance: "<<D1<<endl;
    cout<<"Enter Distance (km m):";
    cin>>D2;
    cout<<"Given distance: "<<D2<<endl;
    return 0;
}
