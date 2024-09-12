#include<iostream>
using namespace std;
int main()
{
    int n, row,col;
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=row;col>=1;col--)
        {
            cout<<col<<" ";

        }
        cout<<endl;
    }
}