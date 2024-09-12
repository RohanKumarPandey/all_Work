#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    int i=1;      //Initialize

    do{
        cout<<i<<endl;
        i++;      //Update
    }while (i<=n);   //break
}