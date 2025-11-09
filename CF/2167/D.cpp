#include<bits/stdc++.h>
using namespace std;
const long long N = 2e5 + 7;
vector<long long> pri;
bool num[N];

void init()
{
    for (long long i = 2; i < N; i++)
    {
        if(!num[i]) pri.push_back(i);
        for (auto x : pri)
        {
            if(i * x >= N) break;
            num[i * x] = 1;
            if(i % x == 0) break;
        }
    }
    
}


int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    init();
    long long t,n,tmp,g;
    cin >> t;
    while (t--)
    {
        cin >> n;
        g = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> tmp;
            g = gcd(g,tmp);
        }

        for (auto x : pri)
        {
            if(g % x)
            {
                cout << x << '\n';
                break;
            }
        }
    }
    return 0;
}
/*
记得开long long
记得开long long
记得开long long
记得开long long
记得开long long
记得开long long
记得开long long
记得开long long
*/