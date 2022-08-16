// codeforces problem no- 50A
// problem name- domino piling

#include <iostream>
using namespace std;

int main()
{
    int M,N,Piece;
    cin>>M>>N;
    if(M>=1 && N<=16)
    {
        Piece= (M*N)/2;
    }
    cout<<Piece<<endl;
    return 0;

}
