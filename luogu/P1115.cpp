#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int A[N],S[N];

int main()
{
    int n,max = -10000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        S[i] = S[i-1] + A[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(max < S[i]-S[j] ) max = S[i]-S[j];
        }
        
    }
    
    cout << max;

    return 0;
}