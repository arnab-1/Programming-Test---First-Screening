#include <iostream>
using namespace std;

class Calculator {
    double a, b;

public:
    Calculator(double val1, double val2) {
        a = val1;
        b = val2;
    }

    double calculate(string operation) {
        if (operation == "Addition") {
            return a + b;
        } else if (operation == "Subtraction") {
            return a - b;
        } else if (operation == "Multiplication") {
            return a * b;
        } else if (operation == "Division") {
            if (b == 0) {
                cout << "Division by zero not allowed" << endl;
                return 0.0;
            }
            return a / b;
        } else {
            cout << "Invalid operation" << endl;
            return 0.0;
        }
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation : ";
    cin >> op;

    Calculator cal(a, b);
    double result = cal.calculate(op);

    cout << "Calculated value is: " << result << endl;

    return 0;
}
