#include<iostream>
using namespace std;
//int sum(int a, int b, int c)  Multiple parameter
bool prime(int n)
{
    if(n<2)
    return 0;

    for(int i=2; i<n; i++)
    {
        if (n%i==0)
        return 0;
    }
    
     return 1;
}

int fact (int n)
{
    int ans=1;
    for(int i=1; i<=n; i++)
    ans*=i;

    return ans;
}

int main()
{
    int a,b;
    cout<<"enter the number:";
    cin>>a>>b;

    //a is prime or not
    cout<<prime(a)<<endl;
    //a ka factorial
    cout<<fact(a)<<endl;
    //b is prime or not
    cout<<prime(b)<<endl;
    //b ka factorial
    cout<<fact(b)<<endl;
    //b-a is prime or not
    cout<<prime(b-a)<<endl;
    //b-a ka factorial
    cout<<fact(b-a);
}
