#include<iostream>
using namespace std;
int main()
{//   1234554321
//    1234**4321
//    123****321
//    12******21
//    1********1

    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
        cout<<col<<" ";
        }
        for(col=1;col<=row-1;col++)
        {
            cout<<"*"<< " ";
        }
        for(col=1;col<=5-row;col++)
        {
            cout<<"*"<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}