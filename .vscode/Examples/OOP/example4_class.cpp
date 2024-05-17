#include <iostream>
#include <cmath>

using namespace std;

class Car {
  public:
    int speed(int maxSpeed);  
};

int Car ::speed(int maxSpeed){
    return maxSpeed;
}

int main(){
    Car myCar; // Create a object of car
    cout << "The Max Speed is: " << myCar.speed(340); // Call Method with an argument
    return 0;
}