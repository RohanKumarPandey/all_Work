#include <iostream>
using namespace std;
int main()
{// ADD DIGITS TILL SINGLE DIGIT

    int num, rem, ans = 0;
    cin >> num;
    while (num >= 10)
    ans = 0;
    {
        while (num != 0)
        {
            rem = num % 10;
            num = num / 10;
            ans = ans + rem;
        }
        num = ans;
    }
    cout<<num;
    return 0;
}
