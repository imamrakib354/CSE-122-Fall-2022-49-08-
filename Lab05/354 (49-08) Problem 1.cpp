// codeforces problem no- 266A
// problem name- Stones on the Table

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,count=0,i;
    char colour[50];
    cin>>n>>colour;
    for(i=0; i<n; i++)
    {
        if(colour[i]==colour[i+1])
        {
            count++;
        }
    }
    cout<<count;
}
