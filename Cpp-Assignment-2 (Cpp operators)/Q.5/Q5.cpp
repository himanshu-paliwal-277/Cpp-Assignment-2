// Q5 - Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;

int main()
{
    int num, sum;
    int first_digit, second_digit, third_digit;
    cout << "Enter a 3 digit number : " << endl;
    cin >> num;
    first_digit = num / 100;
    second_digit = (num / 10) % 10;
    third_digit = num % 10;
    sum = first_digit + second_digit + third_digit;
    cout<<"Sum of digits = "<<sum<<endl;
    return 0;
}