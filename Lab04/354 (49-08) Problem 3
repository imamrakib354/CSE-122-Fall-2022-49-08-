// Codeforces problem: 236A
// Problem name: Boy or girl

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
     int i, j, different=0, same=0;
    char s[100];
    cin >> s;
    for(i=0; s[i]!='\0'; i++){
        for(j=i-1; j>=0; j--){
            if(s[i]==s[j]){
                different++;
                break;
            }
        }
        if(different==0){
            same++;
        }
        different=0;
    }
    if(same%2==0){
        cout<<"CHAT WITH HER!"<< endl;
    } else {
        cout<< "IGNORE HIM!" << endl;
    }

    return 0;
}
