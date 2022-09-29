//Problem Name: Elephant
//Problem No: 617A

#include <iostream>
using namespace std;
int main()
{
    int positions,steps;
    cout<<"Elephant's friend's location = ";
    cin>>positions;
    if(positions%5==0)
    {
        steps=positions/5;
        cout<<"Minimum steps = "<<steps<<endl;
    }
    else
    {
        steps=(positions/5)+1;
        cout<<"Minimum steps = "<<steps<<endl;
    }
}
