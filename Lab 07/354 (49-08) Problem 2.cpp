//Problem Name: Tram
//Problem No: 116A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Number of stops = ";
    cin>>n;
    int a,b,i,sum=0,k=0;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=(a+k)-b;
        if(sum<0)
        {
            k=0;
        }
        else
        {
            k=sum;
        }
     }
    cout<<sum;
}
