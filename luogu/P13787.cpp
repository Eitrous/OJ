#include<bits/stdc++.h>
#define i32 int
#define i64 long long
using namespace std;
const i64 N = 5005,M = 200005;
i64 cmap[N][N],smap[N][N];

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    i64 n = 0,m = 0,x1 = 0,x2 = 0,y1 = 0,y2 = 0,sum = 0;
    //scanf("%d %d",&n,&m);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        //scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        cin >> x1 >> y1 >> x2 >> y2;
        cmap[x1][y1]++;
        cmap[x1][y2+1]--;
        cmap[x2+1][y1]--;
        cmap[x2+1][y2+1]++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            smap[i][j] = smap[i-1][j] + smap[i][j-1] - smap[i-1][j-1] + cmap[i][j];
            sum += ((i+j)^smap[i][j]);
        }
        
    }
    
    //printf("%d",sum);
    cout << sum;

    return 0;
}