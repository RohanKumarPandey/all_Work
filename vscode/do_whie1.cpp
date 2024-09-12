#include<iostream>
using namespace std;
int main()
{// Table ka program
    int n;
    cout<<"enter the number";
    cin>>n;

    int i=1;      //Initialize

    do{
        cout<<i*n<<endl;
        i++;      //Update
    }while (i<=10);   //break
}