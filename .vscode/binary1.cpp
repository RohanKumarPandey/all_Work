#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num: ";
    cin>>num;
    int rem, ans=0, mul=1;

    while(num>0)
    {
        // reminder
        rem=num%10;

        // num ko divide kar do
        num= num/10;

        // ans
        ans=rem*mul+ans;

        // mul
        mul=mul*2;
    }

    cout<<ans<<endl;

}