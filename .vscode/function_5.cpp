#include<iostream>
using namespace std;

void swap(int a, int b)  //Pass by value(isme swap nhi ho rha)
{
    int c;
    c=a;
    a=b;
    b=c;

}

int main()
{
    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" ";
}