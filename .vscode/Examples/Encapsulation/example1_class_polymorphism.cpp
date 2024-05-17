#include <iostream>
using namespace std;

// Base class

class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound \n";
        }
};

// Derived class
class Pig: public Animal {
    public:
        void animalSound() {
            cout << "The pig says: wee wee \n";
        }
};

// Derived class
class Dog: public Animal {
    public:
        void animalSound(){
            cout << "The dog sound is: bow how \n";
        }
};

int main() {
    Animal animal;
    Pig myPig;
    Dog mydog;

    animal.animalSound();
    myPig.animalSound();
    mydog.animalSound();

    return 0;


}