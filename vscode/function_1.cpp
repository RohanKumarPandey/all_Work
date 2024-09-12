#include<iostream>
using namespace std;

int Sum (int m, int n)   //Function Declare
{
    int ans = m+n;       //Function Define
    return ans;
}

int Mul(int m, int n)
{
    int ans= m*n;
    return ans;
}

void fun()
{
    cout<<"Hello Pandey Ji";
}

int main()
{
    int a,b;
    cout<<"Enter 2 numbers ";
    cin>>a>>b;

    //Function Call
    cout<<Sum(a,b);
    cout<<endl;
    cout<<Mul(a,b);
    cout<<endl;
    fun();
}