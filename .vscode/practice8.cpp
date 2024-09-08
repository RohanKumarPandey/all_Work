#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"enter the numnber n :";
    cin>>n;

    for(row=n; row>=1;row--)
    {
     for(col=n;col>=1;col--)
     {
        cout<<col<<" ";
     }
     cout<<endl;
    }
} // 8 & 9 are same