//Problem Name: Word
//Problem No: 59A

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int i, uppercase=0, lowercase=0;
    cin>> s;
    for(i=0; i<s.size(); i++){
        if(islower(s[i])){
            lowercase++;
        } else {
            uppercase++;
        }
    }
    if(uppercase>lowercase){
        for(i=0; i<s.size(); i++){
            s[i]=toupper(s[i]);
        }
        cout << s << endl;

    } else if (uppercase=lowercase){
        for(i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        cout << s << endl;

    } else {
        for(i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }

        cout << s << endl;
    }
    return 0;
}
