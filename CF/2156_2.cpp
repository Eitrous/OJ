#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,q,a,pos;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> q >> str;
        int nb = count(str.begin(),str.end(),'B');
        while (q--)
        {
            cin >> a;
            if(nb == 0) cout << a << '\n';
            else
            {
                pos = 0;
                while (a)
                {
                    if(str[pos%n] == 'A') a--;
                    else a >>= 1;
                    pos++;
                }
                cout << pos << '\n';
            }
        }
        
    }
    return 0;
}