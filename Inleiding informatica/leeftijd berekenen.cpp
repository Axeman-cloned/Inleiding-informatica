#include <iostream> 
using namespace std;

int main() {
    const int currentYear = 2024;
    int birthYear;
    int age;
    cout << "Enter the year you were born in: ";
    cin >> birthYear;
    age = currentYear - birthYear;
    cout << "You are " << age << " years old" << endl;
    return 0;
}