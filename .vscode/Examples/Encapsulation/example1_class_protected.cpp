#include <iostream>

using namespace std;

// Base class
class Employee{
    protected:
        int salary;
};

// Derived class
class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }

        int getSlary() {
            return salary;
        }
};

int main() {
    Programmer myObj;
    myObj.setSalary(5000);
    myObj.bonus = 1500;

    cout <<"Salary: " << myObj.getSlary() << "\n";
    cout <<"Bonus: " << myObj.bonus << "\n";

    return 0;
}