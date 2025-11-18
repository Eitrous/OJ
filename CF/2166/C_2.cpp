#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
    int t;cin >> t;
    int n,num[200005],numb[200005],pos,ltmp,rtmp;
    ll cost;
    while (t--){
        cost = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> num[i];
            numb[i] = num[i];
        }
        sort(num,num+n);
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n; j++){
                if(num[i] == numb[j]){
                    pos = (j+n-1)%n;
                    while (numb[pos] == -1) pos = (pos+n-1)%n;
                    ltmp = numb[pos],pos = (j+n+1)%n;
                    while (numb[pos] == -1) pos = (pos+n+1)%n;
                    rtmp = numb[pos];
                    cost += min(ltmp,rtmp);
                    numb[j] = -1;
                }
            }
        }
        cout << cost << '\n';
    }
    return 0;
}