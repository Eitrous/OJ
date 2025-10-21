#include<bits/stdc++.h>

int main()
{
    int M[104][104],n,m,k;
    for (int i = 0; i < 104; i++)
    {
        for (int j = 0; j < 104; j++)
        {
            M[i][j]  = 0;
        }
        
    }
    
    std::cin >> n >> m >> k;

    int x,y;
    while (m--)
    {
        std::cin >> x >> y;
        x--;
        y--;
        M[x+2][y+2] = 1;
        M[x][y+2] = 1;
        M[x+1][y+1] = 1;
        M[x+1][y+2] = 1;
        M[x+1][y+3] = 1;
        M[x+2][y] = 1;
        M[x+2][y+1] = 1;
        M[x+2][y+3] = 1;
        M[x+2][y+4] = 1;
        M[x+3][y+1] = 1;
        M[x+3][y+2] = 1;
        M[x+3][y+3] = 1;
        M[x+4][y+2] = 1;
    }
    
    int o,p;
    while (k--)
    {
        std::cin >> o >> p;
        for (int i = o; i <= o+4; i++)
        {
            for (int j = p; j <= p+4; j++)
            {
                M[i][j] = 1;
            }
            
        }
        
    }
    
    int num = 0;
    for (int i = 2; i < n+2; i++)
    {
        for (int j = 2; j < n+2; j++)
        {
            if(M[i][j] == 0) num++;
        }
        
    }
    
    std::cout << num;
    return 0;
}