//还没写完，用滑动窗口/双指针

#include<bits/stdc++.h>
using namespace std;
#define int long long
const long long N = 2e5 + 10;
int num[N],s[N],c[N];

int culcu(int i)
{
    return i*i + i - s[i];
}

signed main()
{
    int t; cin >> t;
    int min,max,n,l,r,pos,li,ri,sum,maxs;
    while (t--)
    {
        min = 0;
        cin >> n;
        l = 1,r = n;
        for (int i = 1; i <= n; i++)
        {
            cin >> num[i];
            s[i] = s[i-1] + num[i];
            c[i] = culcu(i) - culcu(i-1);
            
            // if(i == 1) max = i*i + i - s[i];
            // if(i*i + i - s[i] > max) max = i*i + i - s[i],r = i;
            // if(i*i + i - s[i] < min) min = i*i + i - s[i],l = i + 1;
        }
        sum = c[1];
        maxs = sum;
        li = 1,ri = 1;
        while (ri <= n)
        {
            if(c[ri] >= 0){
                sum += c[ri];
                if(sum > maxs) r = ri,maxs = sum;
                ri++;
            }
            else{
                if(sum + c[ri] < 0){
                    sum = 0;
                    li = ri + 1;
                }
                else sum += c[ri];
                ri++;
                l = li;
            }
        }
        

        if((l+r)*(r-l+1) > s[r] - s[l-1])cout << s[l-1] + (l+r)*(r-l+1) + s[n] - s[r] << '\n';
        else cout << s[n] << '\n';
    }
    return 0;
}
