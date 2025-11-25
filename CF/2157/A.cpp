#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 505;
int ary[maxn];

signed main()
{
    int t; cin >> t;
    int n,del;
    while (t--){
        del = 0;
        int cnt[maxn] = {0};
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> ary[i];
            cnt[ary[i]]++;
        }
        
        for (int i = 0; i < n; i++){
            if(cnt[ary[i]] != ary[i]){
                del += (cnt[ary[i]] > ary[i] ? cnt[ary[i]] - ary[i] : cnt[ary[i]]);
                cnt[ary[i]] = (cnt[ary[i]] > ary[i] ? ary[i] : 0);
            }
        }
        cout << del << '\n';
    }
    return 0;
}