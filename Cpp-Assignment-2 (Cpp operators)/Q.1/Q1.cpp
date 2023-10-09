// Q1 - Write a program to check whether two numbers (entered by user) are equal or not.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter a first number : " << endl;
    cin >> num1;
    cout << "Enter a second number : " << endl;
    cin >> num2;
    cout << (num1 == num2);
    return 0;
}