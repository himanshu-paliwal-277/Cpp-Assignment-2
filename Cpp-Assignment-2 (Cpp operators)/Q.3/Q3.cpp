// Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

#include<iostream>
using namespace std;

int main()
{
     int total, boys, girls;
     boys = 17;
     // total students of grade A
     total = (45*80) / 100;
     // Total girls of grade A
     girls = total - boys;
     cout<<"Total girls received grades 'A' : "<<girls<<endl;
     return 0;
}