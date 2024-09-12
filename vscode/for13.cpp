#include<iostream>
using namespace std;
int main()
{//SUM OF N natural numbes
    int i, n, sum=0;
    cout<<"enter the number: ";
    cin>>n;
    
    for(i=1; i<=n;i=i+1)
    {
        sum=sum+i;
    }
    cout<<sum;
}