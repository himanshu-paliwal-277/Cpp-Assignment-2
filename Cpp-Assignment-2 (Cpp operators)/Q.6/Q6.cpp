// Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)

#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter a first number : " << endl;
    cin >> a;
    cout << "Enter a second number : " << endl;
    cin >> b;
    int Sum, Difference, Product, Remainder;
    float Division;
    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    return 0;
}