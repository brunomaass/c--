#include <iostream>
using namespace std;

class Employee {
    private:
        // Private attribute
        int salary;

    public:
    //Setter
    void setSalary(int s) {
        salary = s;
    }

    // Getter
    int getSalary() {
        return salary;
    }
};

int main() {
    Employee objSalary;
    objSalary.setSalary(5000);
    cout << "The salary is: " << objSalary.getSalary();

    return 0;
}