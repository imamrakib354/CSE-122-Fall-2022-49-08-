// codeforces problem no- 158A
// problem name- next round

#include<iostream>
using namespace std;
int main(){

    int n,k,a[100],i,j,count=0;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<n; j++)
    {
        if(a[j]>=a[k-1] && a[j]>0)
            count++;
    }
    cout<<count<<endl;

    return 0;
}
