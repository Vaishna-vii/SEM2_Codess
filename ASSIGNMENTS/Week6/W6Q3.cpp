/*Q3) Simulate the inheritance system of a kingdom. The kingdom begins with a single king.
Every person in the kingdom may have children, and children are added in the order in which
they are born, with older children coming before younger ones. The inheritance order strictly
follows the family line: a person always appears before their children, and a person’s entire
family line is completed before moving on to their siblings. If a person dies, they are removed
from the inheritance order, but their children continue to remain in the list according to the same
inheritance rules.
Create a class called ThroneInheritance with the following methods:
1. Constructor: ThroneInheritance(kingName)
 Initializes the kingdom with the given king.
 The king is the first person in the inheritance order.
2. Add Family Members: birth(parentName, childName)
 Adds childName as the youngest child of parentName.
 It is guaranteed that parentName is alive.
 All names are unique.
3. Mark a Person as Dead: death(name)
 Marks the person as dead.
 The person should not be removed from records, only skipped in the final
inheritance order.

4. Display Current Inheritance Order: getInheritanceOrder()

 Returns a list of names representing the current inheritance order.
 Dead people must not appear in the returned list.
Sample code snippet for main():
int main() {
// Step 1: Initialize kingdom
ThroneInheritance kingdom("King");

// Step 2: Add family members
kingdom.birth("King", "Charles");
kingdom.birth("King", "Anne");
kingdom.birth("Charles", "William");
kingdom.birth("William", "George");
// Step 3: Display inheritance order
cout << "Current Inheritance Order:\n";
vector<string> order1 = kingdom.getInheritanceOrder();
for(string name : order1) {
cout << name << " ";
}
cout << endl;
// Step 4: Mark a person as dead
kingdom.death("Charles");
// Step 5: Display updated inheritance order
cout << "Updated Inheritance Order:\n";
vector<string> order2 = kingdom.getInheritanceOrder();
for(string name : order2) {
cout << name << " ";
}
cout << endl;
return 0;
}*/

#include<iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace  std;
class ThroneInheritance{
public:
    string king;
    unordered_map<string, vector<string>> children;
    unordered_set<string> dead;
    ThroneInheritance(string kingName){
        king = kingName;
    }
    void birth(string parent, string child){
        children[parent].push_back(child);
    }
    void death(string name){
        dead.insert(name);
    }
    void updating(string person, vector<string> &order){
        if(dead.find(person) == dead.end())
            order.push_back(person);

        for(string child : children[person])
            updating(child, order);
    }
     vector<string> getInheritanceOrder(){
        vector<string> order;
        updating(king, order);
        return order;
    }
};
int main(){
    ThroneInheritance kingdom("King");
    kingdom.birth("King", "Charles");
    kingdom.birth("King", "Anne");
    kingdom.birth("Charles", "William");
    kingdom.birth("William", "George");
    cout << "Current Inheritance Order:\n";
    vector<string> order1 = kingdom.getInheritanceOrder();
    for(string name : order1) {
        cout << name << " ";
    }
    cout << endl;

    kingdom.death("Charles");
    cout << "Updated Inheritance Order:\n";
    vector<string> order2 = kingdom.getInheritanceOrder();
    for(string name : order2) {
        cout << name << " ";
    }
    cout << endl;
    return 0;
}
