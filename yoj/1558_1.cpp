#include<bits/stdc++.h>

int isPrime[10000005];

int main()
{
    for (int i = 0; i < 10000004; i++)
    {
        isPrime[i] = 1;
    }
    for (int i = 2; 2*i < 10000004 ; i++)
    {
        for (int j = 2*i; j < 10000004 ; j += i)
        {
            isPrime[j] = 0;
        }
        
    }
    isPrime[1] = 0;
    isPrime[2] = 1;
    int n,num;
    std::cin >> n;
    while (n--)
    {
        std::cin >> num;
        if(isPrime[num])
        {
            std::cout << "YES ";
        }
        else
        {
            std::cout << "NO ";
        }
    }
    
    

    
}