#include<bits/stdc++.h>

int main()
{
    int a,b,c,d,time;
    std::cin >> a >> b >> c >> d;
    time = 60*(c-a)+d-b;
    std::cout << time/60 << ' ' << time%60;
    return 0;
}