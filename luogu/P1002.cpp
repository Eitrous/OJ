#include<bits/stdc++.h>



int main()
{
    int n,m,x,y;
    long long map[25][25];
    std::cin >> n >> m >> x >> y;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            map[i][j] = 0;
            map[0][0] = 1;
            if( i-1 >= 0 && (abs(i-x-1)+abs(j-y) != 3 || i-1 == x || j == y ) && !(i-1 == x && j == y)) map[i][j] += map[i-1][j];
            if( j-1 >= 0 && (abs(i-x)+abs(j-y-1) != 3 || i == x || j-1 == y ) && !(i == x && j-1 == y)) map[i][j] += map[i][j-1];
        }
        
    }
    

    std::cout << map[n][m];
    return 0;
}