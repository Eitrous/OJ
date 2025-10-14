#include<iostream>
using namespace std;
int main()
{
    char N[]="00000000000";
    int b = 0;
    scanf("%s",&N);
    if(N[0] == '-')
    {
        cout << '-';
    }
    if(N[0] == '0')
    {
        cout << 0;
        goto mark;
    }
    for(int i = 10 ; i >=0 ; i--)
    {
        if(N[i] == '0' || N[i] == '-' || N[i] ==0)
        {
            if(b == 0||N[i] == '-')
            {
                continue;
            }
        }
        b = 1;
        cout << N[i]-48;
    }
    mark:
    return 0;
}