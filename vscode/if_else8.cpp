#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n<2)
    {
    cout<<"Not Prime";
    }
    else(n%1==0 && n%n==0)
    {
    cout<<"Prime number";
    }
}