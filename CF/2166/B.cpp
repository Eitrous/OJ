#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t; cin >> t;
    int a,b,n;
    while (t--){
        cin >> a >> b >> n;
        if(b*n <= a || a == b) cout << 1 << '\n';
        else cout << 2 << '\n';
    }
    return 0;
}