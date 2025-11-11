#include<bits/stdc++.h>
using namespace std;

struct Poker
{
    char type = 0;
    int value = 0;
    bool must_use = false;
};


int main()
{
    int n = 0;
    scanf("%d",&n);
    while (n--)
    {
        getchar();
        Poker poker[10];
        int count[256] = {0},cnt = 0,mark[5] = {0}; //H72 D68 C67 S83
        bool is_TH = false,is_SZ = true,must_used = false;
        string str;
        int pos = 0;
        getline(cin,str);
        str += "    ";
        for (int i = 1; i <= 7; i++)
        {
            if(i <= 2) poker[i].must_use = true;
            poker[i].type = str[pos];
            pos++;
            if(str[pos] > '9') poker[i].value = (str[pos] == 'J' ? 11 : (str[pos] == 'Q' ? 12 : (str[pos] == 'K' ? 13 : 14)));
            else
            {
                poker[i].value = str[pos]-'0';
                if(str[pos+1] == '0') 
                {
                    poker[i].value*10;
                    pos++;
                }
            }
            pos += 2;
            count[poker[1].type]++;
        }
        
        if(poker[1].type == poker[2].type && count[poker[1].type] >= 5) is_TH = true;

        for (int i = 1; i <= 6; i++)
        {
            for (int j = 1; j <= 7 - i; j++)
            {
                if(poker[j+1].value < poker[j].value)
                {
                    poker[0] = poker[j];
                    poker[j] = poker[j+1];
                    poker[j+1] = poker[0];
                }
            }
            
        }

        for (int i = 1; i <= 3; i++)
        {
            is_SZ = true;
            must_used = false;
            for (int j = i; j <= i+3; j++)
            {
                if(poker[j].must_use) must_used = true;
                if(poker[j].value != poker[j+1].value-1)
                {
                    is_SZ = false;
                    
                }
                
            }
            if(is_SZ && must_used) mark[++cnt] = i;
        }
        if(cnt > 0) is_SZ = true;
        else is_SZ = false;

        if(!is_SZ && !is_TH) printf("GP\n");
        else if(!is_SZ && is_TH) printf("TH\n");
        else if(is_SZ && !is_TH) printf("SZ\n");
        else
        {
            for (int i = 1; i <= cnt; i++)
            {
                is_TH = true;
                for (int j = mark[i]; j <= mark[i] + 3; j++)
                {
                    if(poker[j].type != poker[j+1].type) is_TH = false;
                }
                if(is_TH)
                {
                    printf("THS\n");
                    break;
                }
                
            }
            if(!is_TH) printf("TH\n");
        }
        

    }
    
}