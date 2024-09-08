#include<iostream>
using namespace std;
int main()
{
    int n, row;
    char col;
    
    cin>>n;
    

    for(row=1;row<=n;row++)
    {
        for(col='a';col<='e';col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}