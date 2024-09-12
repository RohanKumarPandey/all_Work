#include<iostream>
using namespace std;

void Sum(int m, int n)
{
    int ans = m+n;
    cout<<ans;

}

int Mul(int m, int n)
{
    int ans =m*n;
    return ans;
}

void fun()
{
    cout<<"Hello Coder army";
}

int main()
{
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;

    //Function Call
    Sum(a,b);
    cout<<endl<<Mul(a,b)<<endl;
    fun();
}