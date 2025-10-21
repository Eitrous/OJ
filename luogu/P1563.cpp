#include<bits/stdc++.h>

int n = 0,m = 0;

int po(int pos)
{
    while (pos < 0) pos += n;
    while (pos >= n) pos -= n;

    return pos;
}

int main()
{
    
    std::cin >> n >> m;

    char toy[100000][11];
    int k = 0,face[100000];

    while (k < n)
    {
        std::cin >> face[k] >> toy[k];
        k++;
    }
    int pos = 0,a,s;

    while (m--)
    {
        std::cin >> a >> s;
        if((face[po(pos)]+a)%2)
        {
            pos += s;
            pos = po(pos);
        } 
        else
        {
            pos -= s;
            pos = po(pos);
        }
    }
    

    std::cout << toy[pos];

    return 0;
    
}