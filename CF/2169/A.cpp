#include<bits/stdc++.h>
using namespace std;
const long long N = 3e5 + 10;
#define int long long
vector<int> v;

signed main()
{
    int t;cin >> t;
    int n,a,pos;
    while (t--)
    {
        v.clear();
        cin >> n >> a;
        v.push_back(a);
        int tmp;
        for (int i = 1; i <= n; i++)
        {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        pos = find(v.begin(), v.end(), a) - v.begin();
        tmp = v[(pos > n - pos ? pos - 1 : pos + 1)];
        if(tmp == a) tmp = (pos >= n - pos ? a-1 : a+1);
        cout << tmp << '\n';
    }
    return 0;
}