#include <iostream>
using namespace std;

int main() {
    double number1; 
    double number2;
    double result;

    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter another number: ";
    cin >> number2;
    result = number1 + number2;
    cout << "sum of the numbers:" << result;
    return 0;

}