#include<bits/stdc++.h>
using namespace std;
long long ary[100005];
long long even[100005];

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t,n,cnt,mark;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        mark = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
            if(cnt < 2 && ary[i]%2 == 0) even[cnt++] = ary[i];
        }
        if(cnt == 2)
        {
            cout << even[0] << ' ' << even[1] << '\n';
            continue; 
        }
        for (int i = 0; i < n; i++)
        {
            if(ary[i]%2 != 0)
            {
                for (int j = i+1; j < n; j++)
                {
                    if((ary[j]%ary[i])%2 == 0)
                    {
                        mark = 1;
                        cout << ary[i] << ' ' << ary[j] << '\n';
                        break;
                    }
                } 
            }
            if(mark == 1) break;
        }
        
        if(mark != 1)
        {
            cout << -1 << '\n';
        }
    }
    
}