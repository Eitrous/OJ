#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 10000005;
int cdmg[N],dmg[N],ccdmg[N];

signed main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,m,l,r,s,e,d,max = 0,sum;
    cin >> n >> m;
    while (m--)
    {
        cin >> l >> r >> s >> e;
        d = (e-s)/(r-l);
        ccdmg[l] += s;
        ccdmg[l+1] += d-s;
        ccdmg[r+1] -= d+e;
        ccdmg[r+2] += e;
    }

    for (int i = 1; i < n+1; i++)
    {
        cdmg[i] = cdmg[i-1] + ccdmg[i];
        dmg[i] = dmg[i-1] + cdmg[i];
        if(i == 1) sum = dmg[1];
        else sum ^= dmg[i];
        if(dmg[i] > max) max = dmg[i];
    }
    
    cout << sum << ' ' << max;

    return 0;
}
