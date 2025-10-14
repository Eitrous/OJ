#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,flag;
    int rst[400005];
    cin >> t;
    for (int i = 0; i < 400005; i++)
    {
        rst[i] = 0;
    }
    while (t--)
    {
        for (int i = 0; i < n+1; i++)
        {
            rst[i] = 0;
        }
        cin >> n;
        string num;
        flag = 0;
        cin >> num;
        rst[n-1] = num[0]-'0';
        for (int i = 1; i < n; i++)
        {
            rst[n-i-1] = rst[n-i]+(num[i]-'0');
        }
        for (int i = 0; i < n; i++)
        {
            if(rst[i] > 9){
                rst[i+1] += rst[i]/10;
                rst[i] %= 10;
            }
        }
        for (int i = n; i >= 0; i--)
        {
            if(rst[i] != 0) flag = 1;
            if(flag) cout << rst[i];
        }
        cout << endl;
    }
    return 0;
}