//Problem Name: Queue At The School
//Problem No: 266B

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,b,i,j;
    cin>>a>>b;
    string s;
    cin>>s;
    for(i=0;i<b;i++)
    {
        for(j=0;j<s.size()-1;j++)
        if(s[j]=='B' && s[j+1]=='G')
        {
            s[j]='G';
            s[j+1]='B';
            j++;
        }
    }
       cout<<s<<endl;
    }
