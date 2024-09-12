#include<iostream>
using namespace std;
int main()
{//THINK
    int row,col;

    for(row=1;row<=5;row=row+1)
    {
        char name ='a';
        for(col=1;col<=5;col=col+1)
    {
        cout<<name+col-1<<" ";
       
    }
    cout<<endl;
    }
}