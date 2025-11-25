#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005],b[200005];

signed main()
{
    int t; cin >> t;
    int n,cnt;
    string winner;
    while (t--){
        cnt = 0;
        cin >> n;
        winner = "";
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = n-1; i >= 0; i--){
            if(a[i] != b[i]){
                cnt++;
                if(winner == ""){
                    if((i+1)%2) winner = "Ajisai";
                    else winner = "Mai";
                }
            }
        }
        if(winner == "") cout << "Tie" << '\n';
        else{
            if(cnt%2) cout << winner << '\n';
            else cout << "Tie" << '\n';
        }
    }
    return 0;
}