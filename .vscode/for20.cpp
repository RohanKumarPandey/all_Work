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
    {//imp quest solve nhi hua
    {
        for(col=1;col<=row;col++)
        cout<<col ;
    }
    cout<<endl;
    for(col=1;col<=5-row;col++)
    {
        cout<<"*";
    }
    cout<<endl;
    }

}