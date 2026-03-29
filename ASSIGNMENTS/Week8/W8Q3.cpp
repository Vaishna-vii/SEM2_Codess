/*3. House can contain multiple rooms. There is no independent life for room and any
roomcannotbelongtotwodifferenthouses.Ifwedeletethehouse,roomwillalsobe
automatically deleted.*/
#include <iostream>
using namespace std;

class Room {
public:
    Room() { cout << "Room created\n"; }
    ~Room() { cout << "Room destroyed\n"; }
};

class House {
    Room r1, r2;  // composition
public:
    House() { cout << "House created\n"; }
    ~House() { cout << "House destroyed\n"; }
};

int main() {
    House h;
}
