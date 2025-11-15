#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string river;
    int t; cin >> t;
    int tmp,pos;
    while (t--){
        cin >> river;
        if(river.find(">*") != string::npos || river.find("**") != string::npos || river.find("*<") != string::npos || river.find("><") != string::npos) cout << -1 << '\n';
        else if(river.length() == 1) cout << 1 << '\n';
        else{
            tmp = 0,pos = 0;
            while (1){
                if(river[pos] == '<' || river[pos] == '*') pos++;
                else break;
            }
            tmp = pos;
            pos = river.length()-1;
            while (1){
                if(river[pos] == '>' || river[pos] == '*') pos--;
                else break;
            }
            if(tmp <= river.length()-1 - pos) cout << river.length()-1 - pos << '\n';
            else cout << tmp << '\n';
        }
    }
    return 0;
}