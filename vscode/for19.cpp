#include<iostream>
using namespace std;
int main()
{
    int n=10;
    
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    

    for(int i=0;i<10;i++){
        int Nextno = a+b;
        cout<<Nextno<<" ";

        a=b;
        b=Nextno;
        
    }
}