#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,min,max,tmp,x;
    cin >> t;
    while (t--)
    {
        cin >> n >> tmp;
        min = tmp;
        max = tmp;
        for (int i = 1; i < n; i++)
        {
            cin >> tmp;
            if(tmp < min) min = tmp;
            else if(tmp > max) max = tmp;
        }
        cin >> x;
        if(min <= x && max >= x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}