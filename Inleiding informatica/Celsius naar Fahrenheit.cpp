#include <iostream>
using namespace std;

int main() {
    int tempCelsius;
    int tempFahrenheit;
    cout << "Enter temperature in degrees Celsius: ";
    cin >> tempCelsius;
    tempFahrenheit = (tempCelsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << tempFahrenheit << endl;
    return 0;
}