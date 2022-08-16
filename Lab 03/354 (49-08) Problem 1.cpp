// codeforces problem no- 282A
// problem name- Bit++

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
     int n,i,x=0; char s[20];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x<<endl;
    return 0;

}
