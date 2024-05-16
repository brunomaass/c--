// include cmath library
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    //Calculator add
    int firstNumber;
    int secondNumber;
    cout << "Input the first number: ";
    cin >> firstNumber;
    cout << "Now, input the second number: ";
    cin >> secondNumber;
    int result = firstNumber + secondNumber;

    cout << "The total is: " << result;
}