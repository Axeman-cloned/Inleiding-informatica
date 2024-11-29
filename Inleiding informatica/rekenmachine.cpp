#include <iostream>
using namespace std;

int main(){
    double number1;
    double number2;
    double result;
    char function;

    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter another number:";
    cin >> number2;
    cout << "Enter what you wanna do e.g. '+', '-', 'x', ':' :  ";
    cin >> function;
    
    switch (function)
    {
    case '+':
    result = number1 + number2;
    cout << "Answer: " << result << endl;
    break;

    case '-':
    result = number1 - number2;
    cout << "Answer" << result << endl;
    break;

    case 'x':
    result = number1 * number2;
    cout << "Answer: " << result << endl;
    break;
    
    case ':':
    result = number1/number2;
    cout << "Answer: " << result << endl;
    break;

    default :
    cout << "Invalid please enter '+', '-', 'x', ':': ";

    }

    return 0;
}