#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag = 0;
    int s[100],tmp[100];
    for (int i = 0; i < 100; i++)
    {
        s[i] = 0;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 100; j++)         
        {
            tmp[j] = 0;
        }
        tmp[0] = 1;
        for (int j = 0; j <= i; j++)
        {
            for (int k = 0; k < 100; k++)
            {
                tmp[k] *= (j+1);
            }
            for (int k = 0; k < 100; k++)
            {
                if(tmp[k] > 9)
                {
                    tmp[k+1] += tmp[k]/10;
                    tmp[k] %= 10;
                }
            }    
        }
        for (int k = 0; k < 100; k++)
        {
            s[k] += tmp[k];
            if(s[k] > 9){
                s[k+1] += s[k]/10;
                s[k] %= 10; 
            }
        }
        
    }
    for (int i = 99; i >= 0; i--)
    {
        if(s[i] != 0) flag = 1;
        if(flag) cout << s[i];
    }
    return 0;
    
}