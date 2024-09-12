#include<iostream>
using namespace std;
int main()
{//REVERSE OF A NUMBER
    int num, rem, ans=0;
    cin>>num;

    while(num!=0)
    {
        rem=num%10;
        num/=10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10)
        cout<<"NOT REVERSED";
        ans = ans*10 + rem;
    }
    cout<<ans;
}