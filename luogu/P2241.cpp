#include<iostream>
using namespace std;
int min(int a,int b)
{
    if(a>=b) return b;
    else return a;
}
int main()
{
    long long n,m,sum = 0,sq = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sq += min(m-i,n-j);
            sum += (m-i)*(n-j);
        }
        
    }
    cout << sq << ' ' << sum-sq;
    return 0;
}