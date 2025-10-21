#include<bits/stdc++.h>

int main()
{
    int n,num,flag = 1;
    std::cin >> n;
    while (n--)
    {
        std::cin >> num;
        if(num == 2) 
        {
            std::cout << "YES ";
            continue;
        }
        else if(!(num%2))
        {
            std::cout << "NO ";
            continue;
        }
        else if(num == 1)
        {
            std::cout << "NO ";
            continue;
        }
        for (int i = 3; i < sqrt(num)+1; i++)
        {
            if(!(num%i))
            {
                std::cout << "NO ";
                flag = 0;
                break;
            }
        }
        if(flag) std::cout << "YES ";
        flag = 1;
        
    }
    return 0;
}