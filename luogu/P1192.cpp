#include<bits/stdc++.h>

int main()
{
    long long n,k,N[100005];
    std::cin >> n >> k;
    
    N[0] = 1;
    for (long long i = 1; i <= n; i++)
    {
        N[i] = 0;
        for (int j = 1; j <= k && j <= i; j++)
        {
            N[i] = (N[i] + N[i-j])%100003;
        }
        
    }

    std::cout << N[n];
    
    return 0;
}