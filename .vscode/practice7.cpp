#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"enter the numnber n :";
    cin>>n;

    for(row=n; row>=1;row--)
    {
     for(col=1;col<=n;col++)
     {
        cout<<col<<" ";
     }
     cout<<endl;
    }
}//2 and 7 have same result but different method is used