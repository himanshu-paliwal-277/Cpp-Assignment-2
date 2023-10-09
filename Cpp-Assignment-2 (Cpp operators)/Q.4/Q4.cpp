// Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit numsecond_last_digiter.

#include <iostream>
using namespace std;

int main()
{
    int num, first_digit, second_last_digit, sum;
    // num = 12345;
    cout<<"Enter any 5 digit number : "<<endl;
    cin>>num;
    num = num / 10;
    first_digit = num % 10;
    second_last_digit = num / 1000;
    sum = first_digit + second_last_digit;
    cout << "Sum of the first and the second last digit = " << sum << endl;
    return 0;
}