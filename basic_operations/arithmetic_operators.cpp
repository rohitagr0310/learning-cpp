#include <iostream>

using namespace std;

int main()
{
    // Addition Operator (+)
    int a = 10, b = 5;
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    // Subtraction Operator (-)
    int difference = a - b;
    cout << "Difference: " << difference << endl;

    // Multiplication Operator (*)
    int product = a * b;
    cout << "Product: " << product << endl;

    // Division Operator (/)
    int quotient_int = a / b;                                             // integer division
    float quotient_float = static_cast<float>(a) / static_cast<float>(b); // floating-point division
    cout << "Integer Quotient: " << quotient_int << endl;
    cout << "Floating-point Quotient: " << quotient_float << endl;

    // Modulus Operator (%)
    int remainder = a % b;
    cout << "Remainder: " << remainder << endl;

    // Increment Operator (++)
    int x = 5;
    int y = ++x; // Prefix increment
    cout << "Prefix Increment: x = " << x << ", y = " << y << endl;

    x = 5;
    int z = x++; // Postfix increment
    cout << "Postfix Increment: x = " << x << ", z = " << z << endl;

    // Decrement Operator (--)
    x = 5;
    y = --x; // Prefix decrement
    cout << "Prefix Decrement: x = " << x << ", y = " << y << endl;

    x = 5;
    z = x--; // Postfix decrement
    cout << "Postfix Decrement: x = " << x << ", z = " << z << endl;

    return 0;
}
