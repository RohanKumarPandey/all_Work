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
        cout<<row<<" ";
     }
     cout<<endl;
    }
}