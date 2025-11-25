#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t; cin >> t;
    int n,x,y,dx,dy,nof,noe;
    string str;
    while (t--){
        cin >> n >> x >> y;
        cin >> str;
        nof = 0, noe = 0;
        for (int i = 0; i < n; i++){
            if(str[i] == '4') nof++;
            else noe++;
        }
        dx = abs(x), dy = abs(y);
        if(dx <= nof + noe && dy <= nof + noe && dx + dy <= nof + 2*noe) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}