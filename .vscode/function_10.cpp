#include<iostream>
using namespace std;

int countdigit (int n)
{
    int count=0;
    while(n!=0)
    {
        count++;
        n= n/10;
    }
    return count;
}

bool Armstrong(int num, int digit)
{
    int n=num, rem, ans=0;
    while(n>0)
    {
        rem = n%10;
        n/=10;
        ans= ans +pow(rem, digit);

        return ans;
    }
    if(ans==num)
    return 1;
    else
    return 0;
}

int main()
{
    int num;
    cin>>num;
    
    //Count Digit
    int digit = countdigit(num);
 
    //Armstrong number
    cout<<Armstrong(num, digit);
}