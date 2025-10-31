#include<bits/stdc++.h>
using namespace std;
unsigned long long ary[100005];

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t,n,flag = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
        }
        
        sort(ary,ary+n);
        int len = unique(ary,ary+n) - ary;
        
        for (int i = 0; i < n; i++)
        {
            if(ary[i] %2)
            {
                flag = 0;
                break;
            }
        }
        
        if(flag == 0) 
        {
            cout << 2 << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if(ary)
            }
            
        }

    }

    return 0;
    
}