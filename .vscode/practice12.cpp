#include<iostream>
using namespace std;
int main()
{
    int n, col;
    char row;
    
    cin>>n;
    

    for(row='a';row<='e';row++)
    {
        for(col=1;col<=5;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}// if use formula then name='a'+row-1