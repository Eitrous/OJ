#include<bits/stdc++.h>
#define i32 int
#define i64 long long
using namespace std;
const i64 N = 20005;
i64 L[N],R[N];

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    i32 n,l,r,sum = 0,Lf = 0,Rf = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> L[i] >> R[i];
    }
    
    sort(L,L+n);
    sort(R,R+n);

    sum = R[0] - L[0];
    for (int i = 0; i < n-1; i++)
    {
        if(R[i] >= R[i+1]) 
        {
            sum += 0;
            R[i+1] = R[i];
        }
        else if(L[i+1] <= R[i] && R[i] < R[i+1])
        {
            sum += R[i+1] - R[i];
        }
        else
        {
            sum += R[i+1] - L[i+1];
        }
    }

    
    cout << sum;

    return 0;
}