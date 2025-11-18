#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t,n,count;cin >> t;
    string str;
    while (t--)
    {
        cin >> n;
        int count = 0;
        cin >> str;
        for (int i = 0; i <= n-1; i++) if(str[i] == str[n-1]) count++;
        cout << n-count << '\n';
    }
    return 0;
}