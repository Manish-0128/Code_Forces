// link - https://codeforces.com/problemset/problem/133/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9') flag=true;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

// inputCopy
// Hi!
// outputCopy
// YES
// inputCopy
// Codeforces
// outputCopy
// NO