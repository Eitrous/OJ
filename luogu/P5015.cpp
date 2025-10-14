//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    freopen("1.in","r",stdin);
    int num,c;
    while((c = getchar()) != EOF)
    {
        if(c != 10 && c != 32)
        {
            num ++;
        }
    }
    cout << num;
    return 0;
    //system("pause");
}