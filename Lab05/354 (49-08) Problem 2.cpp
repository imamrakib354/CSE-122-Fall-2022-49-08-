// codeforces problem no- 791A
// problem name- Bear and Big Brother

#include <iostream>
using namespace std;

int main()
{
    int a,b,i,year=0;
    cin>>a>>b;
    if(a<=b)
    {
        for(i=0; ;i++)
        {
            a*=3;
            b*=2;
            year++;
            if(a>b)
            {
                break;
            }
        }
    }
    cout<<year;
}
