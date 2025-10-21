#include<bits/stdc++.h>

bool used[11];
int num[11];
int pos = 1,n;

void permu(int x)
{
    for (int i = 1; i <= n; i++)
    {
        if(!used[i])
        {
            num[x] = i;
            used[i] = 1;
            if(x != n)
            {
                permu(x+1);
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    printf("%5d",num[j]);
                }
                std::cout << std::endl;
            }
            used[i] = 0;
        }
    }
    
}

int main()
{
    std::cin >> n;

    permu(1);
    
    return 0;
}