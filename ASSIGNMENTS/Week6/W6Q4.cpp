/*Q4) Extend the kingdom inheritance system to demonstrate hybrid inheritance
using C++ classes.
Create a base class RoyalMember that stores common details of all royal members
such as:
 Name of the member
 Life status (alive or dead)
Derive the following classes from RoyalMember:
1. King
o Represents the ruler of the kingdom
o Stores the king’s name
2. Prince
o Represents royal family members who may have children
Create a class ThroneInheritance that inherits from both King and Prince.
The ThroneInheritance class should:
 Use inherited properties from RoyalMember
 Manage birth of children
 Mark members as dead
 Display the current inheritance order
a) Implement all classes with appropriate access specifiers.
b) Demonstrate hierarchical inheritance using RoyalMember, King, and Prince.
c) Demonstrate multiple inheritance in ThroneInheritance.
d) Show how hybrid inheritance is formed by combining both.
e) Create objects and display outputs to verify inheritance behavior.*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class RoyalMember {
protected:
    string name;
    bool alive;
public:
    RoyalMember(string n) : name(n), alive(true) {}
    void markDead() { alive = false; }
    bool isAlive() { return alive; }
    string getName() { return name; }
};
class King : virtual public RoyalMember {
public:
    King(string n) : RoyalMember(n) {}
};
class Prince : virtual public RoyalMember {
public:
    Prince(string n) : RoyalMember(n) {}
};
class ThroneInheritance : public King, public Prince {
    unordered_map<string, vector<string>> children;
    unordered_map<string, bool> aliveStatus;
public:
    ThroneInheritance(string kingName)
        : RoyalMember(kingName), King(kingName), Prince(kingName) {
        aliveStatus[kingName] = true;
    }
    void birth(string parent, string child) {
        children[parent].push_back(child);
        aliveStatus[child] = true;
    }
    void death(string name) {
        aliveStatus[name] = false;
    }
    void updating(string person, vector<string>& order) {
        if (aliveStatus[person])
            order.push_back(person);
        for (string child : children[person])
            updating(child, order);
    }
    vector<string> getInheritanceOrder() {
        vector<string> order;
        updating(name, order);  
        return order;
    }
};
int main() {
    ThroneInheritance kingdom("King");
    kingdom.birth("King", "Charles");
    kingdom.birth("King", "Anne");
    kingdom.birth("Charles", "William");
    cout << "Initial Order:\n";
    for (auto x : kingdom.getInheritanceOrder())
        cout << x << " ";
    cout << "\n";
    kingdom.death("Charles");
    cout << "After Death:\n";
    for (auto x : kingdom.getInheritanceOrder())
        cout << x << " ";
    return 0;
}