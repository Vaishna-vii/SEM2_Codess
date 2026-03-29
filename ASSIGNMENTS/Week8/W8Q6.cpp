/*6. Implementthefollowingrelationshipsin C++	
(i) Association
class CPU {
public:
    double speed;
};

class Computer {
public:
    CPU cpu;

    void setCPU(CPU c) { cpu = c; }
};

(ii) Aggregation
class CPU {
public:
    double speed;
};

class Computer {
public:
    CPU* cpu;  // aggregation

    void setCPU(CPU* c) { cpu = c; }
};

(iii) Inheritance (PC from Computer)
class Computer {};

class PC : public Computer {
public:
    string name;
};
*/