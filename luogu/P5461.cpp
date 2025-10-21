#include<bits/stdc++.h>

bool cheater[1030][1030];
int n;

void pardon(int x,int y,int m)
{
    int half = (1 << (m-1));
    for (int i = x; i < x+half; i++)
    {
        for (int j = y; j < y+half; j++)
        {
            cheater[i][j] = 1;
        }
    }

    if(m == 1) return;
    
    pardon(x+half,y,m-1);
    pardon(x,y+half,m-1);
    pardon(x+half,y+half,m-1);
}



int main()
{
    std::cin >> n;
    pardon(0,0,n);

    for (int i = 0; i < pow(2,n); i++)
    {
        for (int j = 0; j < pow(2,n); j++)
        {
            if(cheater[i][j]) std::cout << "0 ";
            else std::cout << "1 ";
        }
        std::cout << std::endl;
    }

    return 0;
    
}