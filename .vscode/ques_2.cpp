#include<iostream>
using namespace std;
int trailingzeroes (int N)
{
    int count = 0;

    while(N>=5)
    {
        count+=N/5;
        N/=5;
    }
    return count;
}

int main()
{
    int n;
    cout<<trailingzeroes(n);
}