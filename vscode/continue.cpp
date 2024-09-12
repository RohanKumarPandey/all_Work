#include<iostream>
using namespace std;
int main()
{//Continue

    int n;
    cin>>n;

    for(int i=1;i<=10;i++)
    {
        if(i==n)
        continue;

        cout<<i<<" ";
    }


}