#include<bits/stdc++.h>

int main()
{
    long long num[1005];
    int n;
    std::cin >> n;
    num[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        num[i] = 1;
    }
    
    for (int i = 1; i < n+1; i++)
    {
        for (int j = i; j < n+1; j++)
        {
            if(j >= 2*i) num[j] += num[i];
        }
        
    }
    
    std::cout << num[n];
    return 0;
}