#include<iostream>
using namespace std;
int main()
{
    int i;

    for(i=1;i<=100;i++)
    {
    if(i%4==0)
    continue;
    cout<<i<<" "<<endl;
    }
}