#include<iostream>
using namespace std;

void swap(int &a, int &b)    //Pass by reference
{
    int c;
    c=a;
    a=b;
    b=c;
}

void swap(float &c, float &d)  //Function Overloading
{
    float r;
    r=c;
    c=d;
    d=r;
}

int main()
{
    int a,b;
    cout<<"Number enter kr de";
    cin>>a>>b;
    swap (a,b);
    cout<<a<<" "<<b<<endl;

    float f1,f2;
    cout<<"Fir se daal";
    cin>>f1>>f2;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
}