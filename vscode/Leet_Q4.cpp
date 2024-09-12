#include<iostream>
using namespace std;
int main()
{// POWER OF 2
int x;
cin>>x;
if (x<1)
cout<<"not comes in power of 2";

while(x!=1)
{
    if(x%2==1)
    cout<<"not comes in power of 2";
    x/=2;
}
cout<<"come in power of 2";

}