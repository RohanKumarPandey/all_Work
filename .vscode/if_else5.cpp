#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<< "Enter your number: ";
    cin>> number;
    if (number>0)
    cout<< "number is positive";
    else if (number == 0)
    cout<< "number is 0";
    else 
    cout<< "number is negative";
}
