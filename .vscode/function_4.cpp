#include<iostream>
using namespace std;

void prime(int n)
{
    if(n<2)
    {
        cout<<0<<endl;
        return ;
    }

    for(int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            cout<<0<<endl;

            return ;
        }
       
    }
    
    cout<<1<<endl;    
}

int fact (int n=3)  // Default Parameter
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

    //a ka factorial
    cout<<fact()<<endl;
    //b is prime or not
  
    //b ka factorial
    cout<<fact(b)<<endl;
    //b-a is prime or not
    
    //b-a ka factorial
    cout<<fact(b-a);
}
