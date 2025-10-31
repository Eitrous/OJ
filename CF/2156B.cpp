#include<bits/stdc++.h>
using namespace std;

long long times = 0,pos = 1;
string str;
long long t,n,q;

long long mb(long long a);

long long ma(long long a)
{
    a -= 1;
    times++;
    pos++;
    pos %= n;
    if(a == 0) return times;
    else if(str[pos] == 'A') return ma(a);
    else return mb(a);
}

long long mb(long long a)
{
    a = floor(a/2.0);
    times++;
    pos++;
    pos %= n;
    if(a == 0) return times;
    else if(str[pos] == 'A') return ma(a);
    else return mb(a);
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        
        int a[1005] = {0};
        cin >> n >> q;
        cin >> str;
        str += 'E';
        for (int i = 0; i < q; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            pos = 0;
            times = 0;
            if(a[i] == 0) cout << 0 << endl;
            else if(str[0] == 'A') cout << ma(a[i]) << endl;
            else cout << mb(a[i]) << endl;
        }
        
        
    }
    
    return 0;
}