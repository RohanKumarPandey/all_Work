#include<iostream>
using namespace std;
int main()
{//sum of square of n natural no.
    int n,i,sum=0;
    cout<<"enter the number:";
    cin>>n;

    for(i=1; i<=n; i=i+1)
    {
        sum=sum+i*i;
    }
   cout<<sum;
}