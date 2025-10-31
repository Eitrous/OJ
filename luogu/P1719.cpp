#include<bits/stdc++.h>
using namespace std;
const int N = 125;
int A[N][N],S[N][N],maxs = -127,su;

int sum(int bx,int by,int ex,int ey)
{
    int summary = 0;
    for (int i = bx; i <= ex; i++)
    {
        for (int j = by; j <= ey; j++)
        {
            summary += A[i][j];
        }
        
    }
    
    return summary;
}


int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            S[i+1][j+1] = sum(0,0,i,j);
        }
         
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int r = 1; r <= i; r++)
            {
                for (int s = 1; s <= j; s++)
                {
                    su = S[i][j] - S[i][j-s] - S[i-r][j] + S[i-r][j-s];
                    if(su > maxs) maxs = su;
                }
                
            }
            
        }
        
    }
    
    cout << maxs;

    return 0;
}