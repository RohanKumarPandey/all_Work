#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num: ";
    cin>>num;
    int rem, ans=0, mul=1;

    while(num>0)
    {// Basically hum operators ka use karke code ko short me aur acche way me likh skte hain
        //reminder
        rem=num%2;       // rem= num&1; v likh skte hn

        //quotient
        num=num/2;       // num/=2 v likh skte hn //AUR num=num>>1; v likh skte hain

        //ans
        ans=rem*mul+ans;  //yahan par ans+=rem*mul likhte to bhi ho jata

        //mul
        mul=mul*10;      // mul*=10
    }

    cout<<ans<<endl;


}
