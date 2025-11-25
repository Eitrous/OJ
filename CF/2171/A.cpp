#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;cin >> t;
    int n;
    while (t--){
        cin >> n;
        if(n%2) cout << 0 << '\n';
        else cout << n/4 + 1 << '\n';
    }
    return 0;
}