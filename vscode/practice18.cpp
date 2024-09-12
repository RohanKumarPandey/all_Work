#include<iostream>
using namespace std;
int main()
{
    int n,col;
    char row;
    cin>>n;

    for(row='a';row<='e';row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row<<" ";

        }
        cout<<endl;
    }
}