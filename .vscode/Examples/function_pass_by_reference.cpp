#include <iostream>
#include <cmath>

using namespace std;

void swapNums(int &x, int&y) {
    int z = x;
    x = y;
    y = z;
}

void arrayFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++ ){
        cout << myNumbers[i] << "\n";
    }
}

int main() {

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, wich will change the values of firstNum and secondNUm
    swapNums(firstNum, secondNum);
    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n\n";

    cout << "My Array: \n";
    int numbers[5] = {10, 20, 30, 40, 50}; 
    arrayFunction(numbers);

    return 0;
}