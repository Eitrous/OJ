#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];

signed main()
{
    int t; cin >> t;
    int n;
    while (t--){
        cin >> n;
        for (int i = 0;  i < n; i++) cin >> a[i];
        if(a[0] == -1 || a[n-1] == -1){
            cout << 0 << '\n';
            a[0] = (a[0] != -1 ? a[0] : (a[n-1] != -1 ? a[n-1] : 0));
            a[n-1] = (a[n-1] != -1 ? a[n-1] : a[0]);
        }
        else cout << abs(a[0] - a[n-1]) << '\n';
        for (int i = 0; i < n; i++){
            if(a[i] != -1) cout << a[i] << ' ';
            else cout << 0 << ' ';
        }
        cout << '\n';
    }
    return 0;
}