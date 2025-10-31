#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    long long t,n,q,a[1005],times,pos,an,count;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> q >> str;
        //str += 'E';
        for (char c : str)
        {
            if(c == 'B') count++;
        }
        a[1005] = {0};
        for (int i = 0; i < q; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            times = 0;
            pos = 0;
            an = a[i];
            if(count == 0)
            {
                cout << a[i] << '\n';
                continue;
            }
            else
            {
                while (1)
                {
                    if(an == 0) break;
                    else if(str[pos] == 'A')
                    {
                        an--;
                        times++;
                        pos++;
                        pos %= n;
                    }
                    else
                    {
                        an = floor(an/2.0);
                        times++;
                        pos++;
                        pos %= n;
                    }
                }
            }
            cout << times << '\n';
            
        }
        
    }
    
    return 0;
}