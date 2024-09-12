#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cin>>n;

    for(row=1;row<=n;row=row+1)
    {
        for(col=n;col>=1;col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }//IN PATTERN7 CODE, WE JUST REPLACED 5TO N
}
