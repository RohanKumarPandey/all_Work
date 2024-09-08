#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"enter the numnber n :";
    cin>>n;

    for(row=1; row<=n;row++)
    {
     for(col=n;col>=1;col--)
     {
        cout<<col<<" ";
     }
     cout<<endl;
    }
}// 8 & 9 are same