#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,i;
        string a,b,c;
        cin >> n >> a >> m >> b >> c;
        i = 0;
        while (m--)
        {
            if(c[i] == 'D') a += b[i];
            else a = b[i] + a;
            i++;
        }
        cout << a << endl;
    }
    return 0;
}